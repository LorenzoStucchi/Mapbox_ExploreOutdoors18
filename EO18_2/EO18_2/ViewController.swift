//
//  ViewController.swift
//  EO18_2
//
//  Created by Lorenzo Stucchi on 17/08/18.
//  Copyright © 2018 Lorenzo Stucchi. All rights reserved.
//

import UIKit

import Mapbox
import MapboxCoreNavigation
import MapboxNavigation
import MapboxDirections

class ViewController: UIViewController {
    
    var mapView: MGLMapView!
    var button: UIButton!
    var points = [CLLocationCoordinate2D]()
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        // Setup map
        mapView = MGLMapView(frame: view.bounds)
        mapView.styleURL = URL(string: "mapbox://styles/lorenzostucchi/cjklalqeq2z9k2smshd5ntvlg")!
        mapView.showsUserLocation = true
        mapView.setUserTrackingMode(.follow, animated: true)
        view.addSubview(mapView)
        
        
        // Setup single tap gesture
        let singleTap = UITapGestureRecognizer(target: self, action: #selector(handleMapTap(sender:)))
        for recognizer in mapView.gestureRecognizers! where recognizer is UITapGestureRecognizer {
            singleTap.require(toFail: recognizer)
        }
        mapView.addGestureRecognizer(singleTap)
        
        // Setup navigation button
        button = UIButton(frame: CGRect(x: 20, y: 50, width: self.mapView.frame.width - 40, height: 45))
        button.setTitle("Tap to add points", for: .disabled)
        button.setTitle("Start navigation", for: .normal)
        button.backgroundColor = UIColor(red:0.77, green:0.77, blue:0.77, alpha:1.0)
        button.addTarget(self, action: #selector(startNavigation(sender:)), for: .touchUpInside)
        button.isEnabled = false
        mapView.addSubview(button)
    }
    
    // Handle single taps
    @objc @IBAction func handleMapTap(sender: UITapGestureRecognizer) {
        let point = sender.location(in: sender.view!)
        let coordinate = mapView.convert(point, toCoordinateFrom: mapView)
        points.append(coordinate)
        let annotation = MGLPointAnnotation()
        annotation.coordinate = coordinate
        mapView.addAnnotation(annotation)
        
        if (points.count) > 1 {
            button.backgroundColor = UIColor(red:0.35, green:0.84, blue:0.84, alpha:1.0)
            button.isEnabled = true
        }
    }
    
    // Begin navigation when navigation button is tapped
    @objc func startNavigation(sender: UIButton) {
        
        let options = NavigationRouteOptions(coordinates: points)
        options.profileIdentifier = .walking
        
        Directions.shared.calculate(options) { (waypoints, routes, error) in
            guard let route = routes?.first, error == nil else {
                print(error!.localizedDescription)
                return
            }
            
            let navigationController = NavigationViewController(for: route)
            
            self.present(navigationController, animated: true, completion: nil)
        }
    }
}





//
//  ViewController.swift
//  EO18_3
//
//  Created by Lorenzo Stucchi on 23/08/18.
//  Copyright © 2018 Lorenzo Stucchi. All rights reserved.
//

import UIKit
import SceneKit
import MapKit
import MapboxSceneKit
import MapboxMobileEvents
import CoreLocation

class ViewController: UIViewController {
    
    var sceneView: SCNView = SCNView()
    var scene: SCNScene = SCNScene()
    
    var terrainNode: TerrainNode?
    var terrainNodeScale = SCNVector3(0.0015, 0.0015, 0.0015) // Scale down map (otherwise it's far too big)
    
    // Chiavari
    var minLat = 44.31
    var minLon = 9.31
    var maxLat = 44.33
    var maxLon = 9.33

    override func viewDidLoad(){
        super.viewDidLoad()
        setupSceneView()
        createTerrain()
    }
    
    func setupSceneView(){
        self.view.addSubview(sceneView)
        sceneView.frame = self.view.bounds
        
        sceneView.scene = scene
        sceneView.allowsCameraControl = true
        sceneView.isPlaying = true
        
        let cameraNode = SCNNode()
        cameraNode.camera = SCNCamera()
        cameraNode.position = SCNVector3(x: 0, y: 0, z: 5)
        scene.rootNode.addChildNode(cameraNode)
        
        let lightNode = SCNNode()
        let light = SCNLight()
        light.type = .ambient
        light.intensity = 1000
        lightNode.light = light
        scene.rootNode.addChildNode(lightNode)
    }
    

    // Create default materials for each side of the terrain node
    func defaultMaterials() -> [SCNMaterial] {
        let groundImage = SCNMaterial()
        groundImage.diffuse.contents = UIColor.darkGray
        groundImage.name = "Ground texture"
        
        let sideMaterial = SCNMaterial()
        sideMaterial.diffuse.contents = UIColor.darkGray
        sideMaterial.isDoubleSided = true
        sideMaterial.name = "Side"
        
        let bottomMaterial = SCNMaterial()
        bottomMaterial.diffuse.contents = UIColor.black
        bottomMaterial.name = "Bottom"
        
        return [sideMaterial, sideMaterial, sideMaterial, sideMaterial, groundImage, bottomMaterial]
    }
    
    func createTerrain() {
        terrainNode = TerrainNode(minLat: minLat, maxLat: maxLat,
                                  minLon: minLon, maxLon: maxLon)
        

        if let terrainNode = terrainNode {
            terrainNode.scale = terrainNodeScale // Scale down map
            terrainNode.geometry?.materials = defaultMaterials()
            scene.rootNode.addChildNode(terrainNode)
        }
        
        if let terrainNode = terrainNode {
            terrainNode.scale = terrainNodeScale // Scale down map
            scene.rootNode.addChildNode(terrainNode)
            
            //on completion, add POI markers
            terrainNode.fetchTerrainHeights(minWallHeight: 50.0, enableDynamicShadows: true, progress: { progress, total in }, completion: {
                NSLog("Terrain load complete")
                self.addPOIMarkers()
            })
        
            let sURL = "lorenzostucchi/cjklalqeq2z9k2smshd5ntvlg"
            terrainNode.fetchTerrainTexture(sURL , zoom: 14, progress: { _, _ in }, completion: { image in
                NSLog("Texture load complete")
                //apply the satellite image to the terrain mesh
                terrainNode.geometry?.materials[4].diffuse.contents = image
            })
        }
    }
    
    func addPOIMarkers() {
         let locations: [(CLLocationDegrees, CLLocationDegrees)] = [(44.3187, 9.32622),(44.31524, 9.31872),(44.31906, 9.31914),(44.31893, 9.32211),(44.32281, 9.31822),(44.31652, 9.3149),(44.31267, 9.31514)]
        
        if let terrainNode = terrainNode {
            for location in locations {
                let coord = CLLocation(latitude: location.0, longitude: location.1)
                let markerHeight = CGFloat(40.0)
                let sphereMarker = SCNNode(geometry: SCNSphere(radius: markerHeight))
                sphereMarker.geometry?.firstMaterial?.diffuse.contents = UIColor.green
                sphereMarker.position = terrainNode.positionForLocation(coord)
                sphereMarker.position.y += Float(markerHeight / 2.0) + 25
                terrainNode.addChildNode(sphereMarker)
            }
        }
    }
}

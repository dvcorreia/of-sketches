#include "ofApp.h"

void ofApp::setup(){
    // Setting up fbo
    fbo.allocate(A1_72DPI_WIDTH, A1_72DPI_HEIGHT, GL_RGBA);
    fbo.begin();
    ofClear(255,255,255, 0);
    fbo.end();
    
    // Setting up gui
    gui.setup();
    gui.add(rad.set("rad", 250, 500, 800));
}

void ofApp::update(){
    fbo.begin();
    // Draw here
    ofBackground(0);
    ofSetColor(255);
    ofDrawCircle(fbo.getWidth()/2, fbo.getHeight()/2, rad);
    // End Draw here
    fbo.end();
}

void ofApp::draw(){
    fbo.draw(0, 0, ofGetWidth(), ofGetHeight());
    gui.draw();
}

void ofApp::keyPressed(int key){
    if(key == 's'){
        // Save render from fbo
        ofPixels pixels;
        fbo.readToPixels(pixels);
        ofImage outImg;
        outImg.setFromPixels(pixels);
        outImg.save(ofGetTimestampString() + ".png", OF_IMAGE_QUALITY_BEST);
    }
}

void ofApp::keyReleased(int key){}
void ofApp::mouseMoved(int x, int y ){}
void ofApp::mouseDragged(int x, int y, int button){}
void ofApp::mousePressed(int x, int y, int button){}
void ofApp::mouseReleased(int x, int y, int button){}
void ofApp::mouseEntered(int x, int y){}
void ofApp::mouseExited(int x, int y){}
void ofApp::windowResized(int w, int h){}
void ofApp::gotMessage(ofMessage msg){}
void ofApp::dragEvent(ofDragInfo dragInfo){}

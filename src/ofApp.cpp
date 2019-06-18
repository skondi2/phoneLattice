#include "ofApp.h"
#include "createLattice.hpp"

//--------------------------------------------------------------
void ofApp::setup(){
    CreateLattice latticeInstance;
    ofApp::input = latticeInstance.getInput();
    ofApp::letters = latticeInstance.seperateSounds();
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    // Draw the entered word at top:
    ofDrawBitmapString("Entered Word : " + ofApp::input, 0, 45);
    
    int circleSpacing = 120;
    int radius = 45;
    int startOffset = 30;
    
    for (int i = 0; i < ofApp::letters.size(); i++) {
        
        // Draw red circle
        ofSetColor(255, 0, 0);
        ofSetCircleResolution(100);
        ofDrawCircle((radius + i * circleSpacing) + startOffset, 200, 45); // 45 radius is good size for a letter
        
        ofSetColor(0, 0, 0);
        
        // Draw starting arrow node
        ofVec3f arrowTailPoint (0, 200, 0);
        ofVec3f arrowHeadPoint ( startOffset, 200, 0);
        ofDrawArrow(arrowTailPoint, arrowHeadPoint, 4);
        
        
        // Draw node number inside circle
        ofDrawBitmapString(i + 1, (radius + i * circleSpacing) + startOffset , 200);
        
        if (i != ofApp::letters.size() - 1) {
            // Draw arrow
            ofVec3f arrowTailPoint ( ((radius + i * circleSpacing) + radius) + startOffset, 200, 0);
            ofVec3f arrowHeadPoint ( ((radius + i * circleSpacing) + radius) + circleSpacing + startOffset, 200, 0);
            ofDrawArrow(arrowTailPoint, arrowHeadPoint, 4);
        }
        
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}

#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	ofBackground(37, 2, 122);
	myLineX = 0;
	ofSetFrameRate(20);
}

//--------------------------------------------------------------
void ofApp::update() {
		for (auto &vert : poly.getVertices()) {

			vert.x += ofRandom(-5, 5);
			vert.y += ofRandom(-5, 5);
		}
	

	myLineX = myLineX + 1;
	myPtX = myPtX + 15;
}
//--------------------------------------------------------------
void ofApp::draw() {

	ofSetColor(83, 127, 216);
	poly.draw();
	

	//ofDrawLine(0, 768/2, myLineX, 768/2);
	
	pt.set(myPtX, 768/2);
	poly.addVertex(pt);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {
	pt.set(x, y);
	poly.addVertex(pt);

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {
	poly.clear();
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {

}

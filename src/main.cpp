#include "ofMain.h"
#include "ofApp.h"
#include "paper.h"


//========================================================================
int main( ){
	ofSetupOpenGL(A5_72DPI_WIDTH,A5_72DPI_HEIGHT,OF_WINDOW);

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(new ofApp());

}

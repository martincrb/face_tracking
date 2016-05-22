#pragma once
#include "Camera3D.h"
#include "pxcsensemanager.h"
#include "pxcmetadata.h"



class RealSense :
	public Camera3D
{
public:
	RealSense();
	~RealSense();
	void init();
	void stop();
	void getFrameImage(QImage &image);
	void getDepthPoints();
	void getFaceOrientation();
	void getFaceOrientation(TrackingAlgorithm *tA);
	void update();
private:
	PXCSenseManager *pp;
	PXCFaceModule* faceAnalyzer;
	pxcStatus sts;
};

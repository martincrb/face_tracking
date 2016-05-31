#include "Camera3D.h"


Camera3D::Camera3D()
{
}


Camera3D::~Camera3D()
{
}

void Camera3D::setRenderer(GLWidget *renderer) {
	this->renderer = renderer;
}

bool Camera3D::trackerIsSet() {
	return _tracker_set;
}
void Camera3D::setTracker(TrackingAlgorithm *tracker) {
	if (tracker != nullptr) {
		_tracker_set = true;
		this->tracker = tracker;
	}
	else {
		_tracker_set = false;
	}
}
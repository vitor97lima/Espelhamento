#ifndef FACEDETECTOR_H
#define FACEDETECTOR_H

#include "opencv2/objdetect.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"
#include <stdio.h>

using namespace cv;
using namespace std;

class FaceDetector
{
public:
FaceDetector();
Mat detect(Mat image);
Mat getFace(Mat image);
Rect getFaceRoi(Mat image);
vector<Rect> getFaces();
CascadeClassifier getFaceCascade();

private:
CascadeClassifier face_cascade, eyes_cascade;
string face_cascade_name, eyes_cascade_name;
std::vector<cv::Rect> faces;

};

#endif // FACEDETECTOR_H

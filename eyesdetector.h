#ifndef EYESDETECTOR_H
#define EYESDETECTOR_H

#include "opencv2/objdetect.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"
#include <stdio.h>

using namespace cv;
using namespace std;

class EyesDetector
{
public:
EyesDetector();
void getEyesRect(Mat face, vector<Rect> *outputVector);
CascadeClassifier getEyesCascade();

private:
CascadeClassifier eyes_cascade;
string eyes_cascade_name;
std::vector<cv::Rect> eyes;

};


#endif // EYESDETECTOR_H

#ifndef MOUTHDETECTOR_H
#define MOUTHDETECTOR_H

#include "opencv2/objdetect.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"
#include <stdio.h>

using namespace cv;
using namespace std;

class MouthDetector
{
public:
MouthDetector();
Mat detect(Mat frame);
Mat getMouth(Mat frame);

private:
CascadeClassifier mouth_cascade;
string mouth_cascade_name;

};


#endif // MOUTHDETECTOR_H

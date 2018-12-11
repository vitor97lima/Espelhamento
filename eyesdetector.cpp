#include "eyesdetector.h"

EyesDetector::EyesDetector()
{
    eyes_cascade_name = "/home/vitor/Desenvolvimento/Qt Projects/Espelhamento/haarcascades/haarcascade_mcs_eyepair_big.xml";
    eyes_cascade.load( eyes_cascade_name );
}

void EyesDetector::getEyesRect(Mat image, vector<Rect> *outputVector){

    if(!(image.empty())){
        Mat image_gray;
        cvtColor( image, image_gray, COLOR_BGR2GRAY );
        equalizeHist( image_gray, image_gray );

        eyes_cascade.detectMultiScale( image, eyes, 1.1, 2, 0 |CASCADE_SCALE_IMAGE, Size(30, 30) );
        outputVector = &eyes;
    }
}
CascadeClassifier EyesDetector::getEyesCascade(){
    return eyes_cascade;
}


#include "facedetector.h"

FaceDetector::FaceDetector()
{
    face_cascade_name = "/home/vitor/Desenvolvimento/Qt Projects/Espelhamento/haarcascades/haarcascade_frontalface_alt.xml";
    face_cascade.load( face_cascade_name );
}

Mat FaceDetector::getFace(Mat frame)
{
        Mat frame_gray;
        Mat face;
        cvtColor( frame, frame_gray, COLOR_BGR2GRAY );
        equalizeHist( frame_gray, frame_gray );

        face_cascade.detectMultiScale( frame_gray, faces, 1.1, 2, 0|CASCADE_SCALE_IMAGE, Size(60, 60) );
            for ( size_t i = 0; i < faces.size(); i++ )
            {
                face = frame( faces[i] );
            }
        return face;
}
std::vector<cv::Rect> FaceDetector::getFaces(){
    return faces;
}


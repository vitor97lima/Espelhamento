#include "mouthdetector.h"

MouthDetector::MouthDetector()
{
    mouth_cascade_name = "/home/vitor/Desenvolvimento/Qt Projects/Espelhamento/haarcascades/haarcascade_mcs_mouth.xml";
    mouth_cascade.load( mouth_cascade_name );
}

Mat MouthDetector::getMouth(Mat frame)
{
        vector<Rect> mouths;
        Mat mouthROI;
        Mat frame_gray;
        cvtColor( frame, frame_gray, COLOR_BGR2GRAY );

        cv::Rect halfRect = Rect(0, 0, frame.size().width, frame.size().height);
        halfRect.height /= 2;
        halfRect.y += halfRect.height;
        cv::Mat halfFace = frame( halfRect );

        mouth_cascade.detectMultiScale( halfFace, mouths, 1.1, 4, 0 |CASCADE_SCALE_IMAGE, Size(30, 30) );
        for ( size_t i = 0; i < mouths.size(); i++ )
        {
            mouthROI = halfFace(mouths[i]);
        }
        return mouthROI;
}

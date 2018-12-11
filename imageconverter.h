#ifndef IMAGECONVERTER_H
#define IMAGECONVERTER_H
#include <QObject>
#include <QPixmap>
#include <QImage>
#include "opencv2/opencv.hpp"

using namespace cv;

class ImageConverter
{
public:

    ImageConverter();
    static QPixmap MatToQPixmap(Mat mat){
        QPixmap pixmap = QPixmap::fromImage(QImage(mat.data, mat.cols, mat.rows, mat.step,
                                                   QImage::Format_RGB888).rgbSwapped());
        return pixmap;
    }
};

#endif // IMAGECONVERTER_H

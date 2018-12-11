#ifndef VIDEOPROCESSORTHREAD_H
#define VIDEOPROCESSORTHREAD_H

#include <QObject>
#include <QThread>
#include "opencv2/opencv.hpp"
#include <QPixmap>

class VideoProcessorThread : public QThread
{
    Q_OBJECT
public:
    explicit VideoProcessorThread(QObject *parent = nullptr);

private:
    void run() override;

signals:
    void inDisplay(QPixmap pixmap);


public slots:
};

#endif // VIDEOPROCESSORTHREAD_H

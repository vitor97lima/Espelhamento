#-------------------------------------------------
#
# Project created by QtCreator 2018-07-06T00:25:32
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Espelhamento
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

INCLUDEPATH += /usr/local/include/opencv
LIBS += -L/usr/local/lib \
-lopencv_core \
-lopencv_imgcodecs \
-lopencv_highgui \
-lopencv_imgproc \
-lopencv_features2d \
-lopencv_calib3d \
-lopencv_objdetect \
-lopencv_video \
-lopencv_photo \
-lopencv_ml \
-lopencv_dnn \
-lopencv_flann \
-lopencv_shape \
-lopencv_stitching \
-lopencv_superres \
-lopencv_videoio \
-lopencv_videostab \
-lopencv_face \


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    facedetector.cpp \
    mouthdetector.cpp \
    eyesdetector.cpp \
    videoprocessorthread.cpp

HEADERS += \
        mainwindow.h \
    facedetector.h \
    facedetector.h \
    mouthdetector.h \
    imageconverter.h \
    videoprocessorthread.h \
    eyesdetector.h

FORMS += \
        mainwindow.ui

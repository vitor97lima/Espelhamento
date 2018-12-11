#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(&cameraCapture, SIGNAL(inDisplay(QPixmap)), ui->inVideo, SLOT(setPixmap(QPixmap)));
    cameraCapture.start();
}

MainWindow::~MainWindow()
{
    delete ui;
    cameraCapture.requestInterruption();
    cameraCapture.wait();
}

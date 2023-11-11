#include "mainwindow.h"
#include "mapa.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow){
    ui->setupUi(this);
    ui->spinBox->setRange(0,30);
    ui->spinBox_2->setRange(0,30);
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::on_pushButton_clicked(){
    mapa = new mapa(ui->spinBox->value(),ui->spinBox_2->value());
    hide();
}



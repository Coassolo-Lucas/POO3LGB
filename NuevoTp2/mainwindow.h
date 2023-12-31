#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "boton.h"
#include "juego.h"
#include "mapan.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void on_pushButton_clicked();
private:
    Ui::MainWindow *ui;
    mapaN *mapa;
};
#endif // MAINWINDOW_H

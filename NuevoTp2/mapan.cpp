#include "mapan.h"
#include "ui_mapan.h"

mapaN::mapaN(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::mapaN)
{
    ui->setupUi(this);
    srand(time(NULL));
}

mapaN::~mapaN()
{
    delete ui;
}

mapaN::mapaN(int cantF,int cantC){
    tablero = new Juego();
    interfaz = new Boton*();
    tablero->setCantColumnas(cantC);
    tablero->setCantFilas(cantF);
    for(int i=0;i<cantF;i++){
        interfaz[i]=new Boton[cantC];
    }
    for(int i=0;i<cantF;i++){
        for(int j=0;j<cantC;j++){
            interfaz[i][j].setFila(i);
            interfaz[i][j].setColumna(j);
        }
    }
}

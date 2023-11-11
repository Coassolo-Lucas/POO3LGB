#include "boton.h"

int Boton::getFila() const
{
    return fila;
}

void Boton::setFila(int newFila)
{
    fila = newFila;
}

int Boton::getColumna() const
{
    return columna;
}

void Boton::setColumna(int newColumna)
{
    columna = newColumna;
}

void Boton::on_pushButton_clicked(int &dondeF, int &dondeC){

    dondeF=this->getFila();
    dondeC=this->getColumna();
}

Boton::Boton(){

}

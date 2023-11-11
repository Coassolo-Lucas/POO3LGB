#include "juego.h"
#include <cstdlib>

int Juego::getCantFilas() const{
    return cantFilas;
}

void Juego::setCantFilas(int newCantFilas){
    cantFilas = newCantFilas;
}

int Juego::getCantColumnas() const{
    return cantColumnas;
}

void Juego::setCantColumnas(int newCantColumnas){
    cantColumnas = newCantColumnas;
}

void Juego::GeneraTren(){
    int dondeF,dondeC; dondeF=rand()%cantFilas; dondeC=rand()%cantColumnas;
    matriz[dondeF][dondeC].tipo='T';
    matriz[dondeF][dondeC].habilitado=true;
}

void Juego::GeneraEstacion(){

}

Juego::Juego(){}

void Juego::iniciarT(){
    matriz=new Celda*[this->getCantFilas()];
    for(int i=0; i<getCantFilas();i++){
        for(int j=0;j<getCantColumnas();j++){
            matriz[i]=new Celda[getCantColumnas()];
        }
    }
}

int Juego::tipoEstacion(){
    srand(time(nullptr));
    // Genera un valor aleatorio entre 1 y 4 (incluidos)
    int Ntipo = rand() % 4 + 1; // Esto generará un número entre 1 y 4.
    return Ntipo;
}

bool Juego::VerifPosStation(int Pc, int Pf){
    // Verificar si las celdas adyacentes están habilitadas
    if(matriz[Pc][Pf].pisado)
        return true;

    if (Pc > 0 && matriz[Pf][Pc - 1].habilitado && matriz[Pf][Pc - 1].pisado) // Izquierda
        return true;

    if (Pc < cantColumnas - 1 && matriz[Pf][Pc + 1].habilitado && matriz[Pf][Pc + 1].pisado) // Derecha
        return true;

    if (Pf > 0 && matriz[Pf - 1][Pc].habilitado && matriz[Pf - 1][Pc].pisado) // Arriba
        return true;

    if (Pf < cantFilas - 1 && matriz[Pf + 1][Pc].habilitado && matriz[Pf + 1][Pc].pisado) // Abajo
        return true;

    return false;
}

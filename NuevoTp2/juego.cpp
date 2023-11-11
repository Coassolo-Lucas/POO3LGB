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
    int dondeF,dondeC;
    char tipos[]={'N','M','H','V'};
    char auxT=tipos[tipoEstacion()];
    do{
        dondeF=(rand()%cantFilas)+1;
        dondeC=rand()%cantColumnas;
    }
    while(VerifPosStation(dondeC,dondeF,auxT));
    matriz[dondeF][dondeC].tipo=auxT;
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
    int Ntipo = rand() % 4; // Esto generará un número entre 1 y 4.
    return Ntipo;
}

bool Juego::VerifPosStation(int Pc, int Pf, char tipo){
    // Verificar si las celdas adyacentes están habilitadas o pisadas.
    if(matriz[Pf][Pc].pisado)
        return true;

    if(tipo=='V')
        if(Pf==0 || Pf==cantFilas-1) return true;

    if(tipo=='H')
        if(Pc==0 || Pc==cantColumnas-1) return true;

    if (Pc > 0 && (matriz[Pf][Pc - 1].habilitado || matriz[Pf][Pc - 1].pisado)) // Izquierda
        return true;

    if (Pc < cantColumnas - 1 && (matriz[Pf][Pc + 1].habilitado || matriz[Pf][Pc + 1].pisado)) // Derecha
        return true;

    if (Pf > 0 && (matriz[Pf - 1][Pc].habilitado || matriz[Pf - 1][Pc].pisado)) // Arriba
        return true;

    if (Pf < cantFilas - 1 && (matriz[Pf + 1][Pc].habilitado || matriz[Pf + 1][Pc].pisado)) // Abajo
        return true;

    return false;
}

Boton *Juego::crearboton(int posF, int posC){
    Boton *n_boton=NULL;
    switch (matriz[posF][posC].tipo) {
    case 'N':

        break;
    case 'M':

        break;
    case 'H':

        break;
    case 'V':

        break;
    }
    //n_boton->setColumna(posC);
    //n_boton->setFila(posF);
    return n_boton;
}

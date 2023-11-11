#ifndef MAPA_H
#define MAPA_H
#include "boton.h"
#include "juego.h"
class mapa{
private:
    Juego *tablero;
    Boton **interfaz;
    int cantFilas,cantColumnas;
public:
    mapa();
    mapa(int,int);
};

#endif // MAPA_H

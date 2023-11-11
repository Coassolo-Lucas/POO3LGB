#ifndef JUEGO_H
#define JUEGO_H
#include <ctime>
struct Celda{
    char tipo='C'; //T,N,M,H,V,C
    bool habilitado=false;
    bool pisado=false;
};
class Juego{
private:
    int cantFilas,cantColumnas;
    Celda **matriz;
public:
    Juego();
    int getCantFilas() const;
    void setCantFilas(int newCantFilas);
    int getCantColumnas() const;
    void setCantColumnas(int newCantColumnas);
    void GeneraTren();
    void GeneraEstacion();
    void iniciarT();
    int tipoEstacion();
    bool VerifPosStation(int,int);
    //..--..--..--..--..--..--..--

};

#endif // JUEGO_H

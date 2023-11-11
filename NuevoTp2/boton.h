#ifndef BOTON_H
#define BOTON_H
#include <QPushButton>

class Boton : public QPushButton{
private:
    int fila,columna;
public:
    Boton();
    int getFila() const;
    void setFila(int newFila);
    int getColumna() const;
    void setColumna(int newColumna);
    void on_pushButton_clicked(int&,int&);
};

#endif // BOTON_H

#ifndef MAPAN_H
#define MAPAN_H
#include "boton.h"
#include "juego.h"
#include <QMainWindow>

namespace Ui {
class mapaN;
}

class mapaN : public QMainWindow
{
    Q_OBJECT

public:
    explicit mapaN(QWidget *parent = nullptr);
    ~mapaN();
    mapaN();
    mapaN(int,int);
private:
    Ui::mapaN *ui;
    Juego *tablero;
    Boton **interfaz;
    int cantFilas,cantColumnas;
};

#endif // MAPAN_H

#ifndef LANZAMIENTO_H
#define LANZAMIENTO_H

#include <QTimer>
#include "proyectil.h"
#include<iostream>
#include<cmath>
using namespace std;

#define G 9.8
#define PI 3.14159265

class Lanzamiento
{
public:
    Lanzamiento();
    double altura;
    double Vinicial;
    double angulo;
    double time;

    double alturaMaxima;
    double TiempoTotal;
    double TiempoAlturaMax;
    double Alcance;

    void Calculos();

    double grad_Rad(double);

    void posX(Proyectil &);
    void posY(Proyectil &);

};

#endif // LANZAMIENTO_H

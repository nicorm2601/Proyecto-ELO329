#include "lanzamiento.h"

Lanzamiento::Lanzamiento()
{

}

double Lanzamiento::grad_Rad(double grad){
    return grad*PI/180;
}

void Lanzamiento::posX(Proyectil &p){
    p.posX =  Vinicial*cos(angulo)*time;
}

void Lanzamiento::posY(Proyectil &p){
    p.posY = Vinicial*sin(angulo)*time + 1/2*G*pow(time,2);
}

void Lanzamiento::Calculos(){
    alturaMaxima= (pow(Vinicial*sin(angulo),2))*(0.5*G)+ altura;
    TiempoAlturaMax=altura + Vinicial*sin(angulo)/G;
    TiempoTotal=2*TiempoAlturaMax;
    Alcance=Vinicial*cos(angulo)*TiempoTotal;
};


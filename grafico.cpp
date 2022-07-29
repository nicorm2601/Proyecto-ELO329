#include "grafico.h"
#include "ui_grafico.h"
#include <QDebug>

Grafico::Grafico(QWidget *parent) :
    QWidget(parent)
    , ui(new Ui::Grafico)
{
    ui->setupUi(this);
    ciclo = new QTimer(this);
    datos = new Lanzamiento();
    resultados = new Resultados;
    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);
    proyectil = new Proyectil(0.0 , 0.0);
    scene->addItem(proyectil);

    connect(ui->pushButton,SIGNAL(pressed()), this, SLOT(start()));

    connect(this,SIGNAL(showResults()),this,SLOT(newResult()));
}

Grafico::~Grafico()
{
    delete ui;
    delete scene;
    delete proyectil;
    delete ciclo;
    delete datos;
}

void Grafico::start(){
    datos->altura = ui->alturaSpinBox->text().toDouble();
    datos->Vinicial = ui->velSpinBox->text().toDouble();
    datos->angulo = datos->grad_Rad(ui->anguloSpinBox->text().toDouble());
    datos->time = 0;

    datos->Calculos();

    connect(ciclo,SIGNAL(timeout()),this,SLOT(sumTime()));
    connect(ciclo,SIGNAL(timeout()),scene,SLOT(advance()));

    ciclo->start(100); //Cada 100 milisegundos
}

void Grafico::sumTime(){
    datos->time += 0.1;
    datos->posX(*proyectil);
    datos->posY(*proyectil);

    if(datos->time >= datos->TiempoTotal){
        ciclo->stop();
        emit showResults();
    }
}

void Grafico::newResult(){
    resultados->setResultados(datos->alturaMaxima,datos->TiempoTotal,datos->Alcance,datos->TiempoAlturaMax);
    resultados->show();
}

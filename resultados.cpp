#include "resultados.h"
#include "ui_resultados.h"

Resultados::Resultados(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Resultados)
{
    ui->setupUi(this);
}

Resultados::~Resultados()
{
    delete ui;
}

void Resultados::setResultados(double altura, double tiempo,double alcance, double tAM){
    QString l1 = QString::number(alcance);
    ui->alcanceLabel->setText(l1);
    QString l2 = QString::number(tiempo);
    ui->tiepoLabel->setText(l2);
    QString l3 = QString::number(altura);
    ui->alturaLabel->setText(l3);
    QString l4 = QString::number(tAM);
    ui->tAlturaLabel->setText(l4);
}

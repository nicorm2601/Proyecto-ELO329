#ifndef GRAFICO_H
#define GRAFICO_H

#include <QWidget>
#include <QGraphicsScene>
#include <QTimer>
#include "proyectil.h"
#include "lanzamiento.h"
#include "resultados.h"

namespace Ui {
class Grafico;
}

class Grafico : public QWidget
{
    Q_OBJECT

public:
    explicit Grafico(QWidget *parent = nullptr);
    ~Grafico();

signals:
    void showResults();

private slots:
    void start();
    void sumTime();
    void newResult();

private:
    Ui::Grafico *ui;
    Lanzamiento *datos;
    QGraphicsScene *scene;
    Proyectil *proyectil;
    QTimer *ciclo;
    Resultados *resultados;


};

#endif // GRAFICO_H

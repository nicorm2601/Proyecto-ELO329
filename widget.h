#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "grafico.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_form_clicked();

private:
    Ui::Widget *ui;
    Grafico *ventana;

};
#endif // WIDGET_H

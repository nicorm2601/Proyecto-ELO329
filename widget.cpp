#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(on_form_clicked()));
}

Widget::~Widget()
{
    delete ui;
    delete ventana;
}

void Widget::on_form_clicked(){
    ventana = new Grafico;
    ventana->show();
}


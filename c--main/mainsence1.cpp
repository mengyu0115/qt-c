#include "mainsence1.h"
#include "ui_mainsence1.h"
#include "weight2.h"
#include "scene.h"
//#include ""
mainsence1::mainsence1(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::mainsence1)
{
    ui->setupUi(this);
    this->setWindowTitle("万里遐征");
}

mainsence1::~mainsence1()
{
    delete ui;
}

void mainsence1::on_pushButton_2_clicked()
{

    weight2 *in = new weight2();
    in->show();

}//进入操作指南界面


void mainsence1::on_pushButton_clicked()
{
    Scene *w = new Scene();
    w->show();
    this->close();
}//进入对话框界面


#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDialog>
#include <QDebug>
#include <QMessageBox>
#include <QColorDialog>
#include <QFileDialog>
#include <QFontDialog>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->actionnew,&QAction::triggered,this,[=](){
        // QDialog dia(this);
        // dia.resize(200,200);
        // dia.exec();
        // qDebug()<<"poped";

        // auto dig=new QDialog(this);
        // dig->show();
        // dig->setAttribute(Qt::WA_DeleteOnClose);
        // qDebug()<<"poped";

        // QMessageBox::critical(this,"critical","错误");

        // QMessageBox::information(this,"info","信息");

        // QMessageBox::question(this,"quest","提问",QMessageBox::Save|QMessageBox::Cancel,QMessageBox::Cancel);

        // auto color=QColorDialog::getColor(QColor(255,0,0));
        // qDebug()<<color.red()<<color.blue()<<color.green();

        // auto dir=QFileDialog::getOpenFileName(this,"open file","C:\\Users\\86157\\Desktop","(*.bat)");

        // bool flag;
        // auto Font=QFontDialog::getFont(&flag,QFont("仿宋",36));
        // qDebug()<<Font.family();
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

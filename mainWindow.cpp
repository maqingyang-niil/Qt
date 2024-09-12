//
// Created by 86157 on 24-9-11.
//

#include "mainWindow.h"

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent) {
    resize(400,600);
    auto bar=menuBar();
    setMenuBar(bar);
    auto doc=bar->addMenu("document");
    auto edi=bar->addMenu("edit");

    auto new_=doc->addAction("new");
    doc->addSeparator();
    auto open=doc->addAction("open");


    auto toolbar=new QToolBar(this);
    addToolBar(Qt::LeftToolBarArea,toolbar);
    toolbar->setAllowedAreas(Qt::LeftToolBarArea|Qt::RightToolBarArea);
    toolbar->setFloatable(false);
    toolbar->setMovable(true);
    toolbar->addAction(new_);
    toolbar->addSeparator();
    toolbar->addAction(open);
    QPushButton *btn=new QPushButton("set",this);
    toolbar->addWidget(btn);

    auto statusbar=statusBar();
    setStatusBar(statusbar);

    auto label=new QLabel("tip",this);
    auto label2=new QLabel("time",this);
    statusbar->addWidget(label);
    statusbar->addPermanentWidget(label2);

    auto dock=new QDockWidget("float",this);
    addDockWidget(Qt::BottomDockWidgetArea,dock);
    dock->setAllowedAreas(Qt::TopDockWidgetArea|Qt::BottomDockWidgetArea);

    auto edit=new QTextEdit(this);
    setCentralWidget(edit);



}


MainWindow::~MainWindow(){

};
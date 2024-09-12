//
// Created by 86157 on 24-9-11.
//

#ifndef DRAFT_MAINWINDOW_H
#define DRAFT_MAINWINDOW_H


#include <QMainWindow>
#include <QMenuBar>
#include <QToolBar>
#include <QPushButton>
#include <QStatusBar>
#include <QLabel>
#include <QDockWidget>
#include <QTextEdit>
class MainWindow : public QMainWindow
{
Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    // 在这里可以声明其他私有成员或方法
};


#endif //DRAFT_MAINWINDOW_H

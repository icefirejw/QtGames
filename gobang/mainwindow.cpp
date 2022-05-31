#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "gobang.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Gobang *goBang = new Gobang(64,64,false);
    goBang->PutPieceInChess(11,11);
    goBang->PutPieceInChess(5,3);
    goBang->PutPieceInChess(12,10);
    goBang->PutPieceInChess(7, 10);
    goBang->PutPieceInChess(13, 9);
    goBang->PutPieceInChess(19, 9);
    goBang->PutPieceInChess(14, 8);
    goBang->PutPieceInChess(1, 6);
    goBang->PutPieceInChess(16,7);

}

MainWindow::~MainWindow()
{
    delete ui;
}

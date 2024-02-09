#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ChessBoard.h"

#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    chessBoard = new ChessBoard();

    std::cout<<chessBoard->getPiece(0,0)->getColor()<<endl;
}

MainWindow::~MainWindow() {
    delete ui;
}

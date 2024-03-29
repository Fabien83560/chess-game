#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "ChessBoard.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT
private:
    ChessBoard* chessBoard;

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void updateInterface();

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H

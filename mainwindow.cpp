#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ChessBoard.h"

#include <QLabel>
#include <QHBoxLayout>
#include <QRgb>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    chessBoard = new ChessBoard();
    updateInterface();
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::updateInterface() {
    if (ui->board->layout() != nullptr) {
        QLayoutItem* item;
        while ((item = ui->board->layout()->takeAt(0)) != nullptr) {
            if (item->widget())
                delete item->widget();
            delete item;
        }
    }

    for (int i = 0; i < 8; i++) {
        QHBoxLayout* horizontalLayout = new QHBoxLayout();
        for (int j = 0; j < 8; j++) {
            QFrame* frame = new QFrame;
            frame->setFixedSize(100, 100);

            QColor backgroundColor = ((i + j) % 2 == 0) ? QColor(224,205,169) : QColor(89,117,53);
            frame->setStyleSheet(QString("background-color: %1;").arg(backgroundColor.name()));

            QVBoxLayout* frameLayout = new QVBoxLayout();
            frameLayout->setContentsMargins(5, 5, 5, 5);
            frameLayout->setSpacing(0);

            QLabel* label = new QLabel;
            label->setAlignment(Qt::AlignCenter);
            label->setFixedSize(80, 80);

            Piece* piece = chessBoard->getPiece(i, j);
            if (piece != nullptr) {
                QString imagePath = piece->getImgFile();
                QPixmap image(imagePath);
                label->setPixmap(image.scaled(80, 80, Qt::KeepAspectRatio, Qt::SmoothTransformation));
            }

            frameLayout->addWidget(label);
            frame->setLayout(frameLayout);
            horizontalLayout->addWidget(frame);
        }
        ui->board->addLayout(horizontalLayout);
    }
}

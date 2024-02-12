#ifndef QUEEN_H
#define QUEEN_H

#include "Piece.h"
#include <QString>

using namespace std;

class Queen : public Piece {
private:
    const QString name = "Queen";
    QString imgFile;

public:
    Queen(const QString& color);
    virtual ~Queen();

    inline QString getName() const { return name; }
    inline QString getImgFile() const override { return imgFile; }

    void move() override;
};

#endif // QUEEN_H

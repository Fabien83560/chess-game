#ifndef PAWN_H
#define PAWN_H

#include <QString>
#include "Piece.h"

using namespace std;

class Pawn : public Piece {
private:
    const QString name = "Pawn";
    QString imgFile;

public:
    Pawn(const QString& color);
    virtual ~Pawn();

    inline QString getName() const { return name; }
    inline QString getImgFile() const override { return imgFile; }

    void move() override;
};

#endif // PAWN_H

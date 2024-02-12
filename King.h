#ifndef KING_H
#define KING_H

#include <QString>
#include "Piece.h"

using namespace std;

class King : public Piece {
private:
    const QString name = "King";
    QString imgFile;

public:
    King(const QString& color);
    virtual ~King();

    inline QString getName() const { return name; }
    inline QString getImgFile() const override { return imgFile; }

    void move() override;
};

#endif // KING_H

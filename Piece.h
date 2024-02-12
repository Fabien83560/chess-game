#ifndef PIECE_H
#define PIECE_H

#include <QString>

using namespace std;

class Piece {
private:
    QString color;

public:
    Piece() = delete;
    Piece(const QString& pieceColor);
    virtual ~Piece();

    virtual QString getImgFile() const = 0;
    inline QString getColor() const { return color; }

    virtual void move() = 0;
};

#endif // PIECE_H

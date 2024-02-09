#ifndef PIECE_H
#define PIECE_H

#include <string>

using namespace std;

class Piece {
private:
    string color;

public:
    Piece() = delete;
    Piece(const string& pieceColor);
    virtual ~Piece();

    inline string getColor() const { return color; }

    virtual void move() = 0;
};

#endif // PIECE_H

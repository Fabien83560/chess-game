#ifndef PAWN_H
#define PAWN_H

#include <string>
#include "Piece.h"

using namespace std;

class Pawn : public Piece {
private:
    const string name = "Pawn";
    string imgFile;

public:
    Pawn(const string& color);
    virtual ~Pawn();
    void move() override;
};

#endif // PAWN_H

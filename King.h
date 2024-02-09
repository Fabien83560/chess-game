#ifndef KING_H
#define KING_H

#include <string>
#include "Piece.h"

using namespace std;

class King : public Piece {
private:
    const string name = "King";
    string imgFile;

public:
    King(const string& color);
    virtual ~King();
    void move() override;
};

#endif // KING_H

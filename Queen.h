#ifndef QUEEN_H
#define QUEEN_H

#include <string>
#include "Piece.h"

using namespace std;

class Queen : public Piece {
private:
    const string name = "Queen";
    string imgFile;

public:
    Queen(const string& color);
    virtual ~Queen();
    void move() override;
};

#endif // QUEEN_H

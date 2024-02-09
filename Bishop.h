#ifndef BISHOP_H
#define BISHOP_H

#include <string>
#include "Piece.h"

using namespace std;

class Bishop : public Piece {
private:
    const string name = "Bigshop";
    string imgFile;

public:
    Bishop(const string& color);
    virtual ~Bishop();
    void move() override;
};

#endif // BISHOP_H

#ifndef HORSE_H
#define HORSE_H

#include <string>
#include "Piece.h"

using namespace std;

class Horse : public Piece {
private:
    const string name = "Horse";
    string imgFile;

public:
    Horse(const string& color);
    virtual ~Horse();
    void move() override;
};

#endif // HORSE_H

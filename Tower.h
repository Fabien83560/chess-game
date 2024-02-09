#ifndef TOWER_H
#define TOWER_H

#include <string>
#include "Piece.h"

using namespace std;

class Tower : public Piece {
private:
    const string name = "Tower";
    string imgFile;

public:
    Tower(const string& color);
    virtual ~Tower();

    inline string getName() const { return name; }

    void move() override;
};

#endif // TOWER_H

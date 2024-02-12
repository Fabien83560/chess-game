#ifndef TOWER_H
#define TOWER_H

#include "Piece.h"
#include <QString>

using namespace std;

class Tower : public Piece {
private:
    const QString name = "Tower";
    QString imgFile;

public:
    Tower(const QString& color);
    virtual ~Tower();

    inline QString getName() const { return name; }
    inline QString getImgFile() const override { return imgFile; }

    void move() override;
};

#endif // TOWER_H

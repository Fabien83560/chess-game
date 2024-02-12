#ifndef HORSE_H
#define HORSE_H

#include <QString>
#include "Piece.h"

using namespace std;

class Horse : public Piece {
private:
    const QString name = "Horse";
    QString imgFile;

public:
    Horse(const QString& color);
    virtual ~Horse();

    inline QString getName() const { return name; }
    inline QString getImgFile() const override { return imgFile; }

    void move() override;
};

#endif // HORSE_H

#ifndef BISHOP_H
#define BISHOP_H

#include <QString>
#include "Piece.h"

using namespace std;

class Bishop : public Piece {
private:
    const QString name = "Bigshop";
    QString imgFile;

public:
    Bishop(const QString& color);
    virtual ~Bishop();

    inline QString getName() const { return name; }
    inline QString getImgFile() const override { return imgFile; }

    void move() override;
};

#endif // BISHOP_H

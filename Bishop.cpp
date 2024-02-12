#include "Bishop.h"

Bishop::Bishop(const QString& color) : Piece(color) {
    imgFile = ":/img/pieces/" + color + "/bishop.png";
}

Bishop::~Bishop() {
    // Destructeur
}

void Bishop::move() {
    // Implémentation de la fonction move() si nécessaire
}

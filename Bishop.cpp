#include "Bishop.h"

Bishop::Bishop(const std::string& color) : Piece(color) {
    imgFile = color + "/bishop.png";
}

Bishop::~Bishop() {
    // Destructeur
}

void Bishop::move() {
    // Implémentation de la fonction move() si nécessaire
}

#include "Queen.h"

Queen::Queen(const std::string& color) : Piece(color) {
    imgFile = color + "/queen.png";
}

Queen::~Queen() {
    // Destructeur
}

void Queen::move() {
    // Implémentation de la fonction move() si nécessaire
}

#include "King.h"

King::King(const std::string& color) : Piece(color) {
    imgFile = color + "/king.png";
}

King::~King() {
    // Destructeur
}

void King::move() {
    // Implémentation de la fonction move() si nécessaire
}

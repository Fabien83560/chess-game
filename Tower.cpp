#include "Tower.h"

Tower::Tower(const std::string& color) : Piece(color) {
    imgFile = color + "/tower.png";
}

Tower::~Tower() {
    // Destructeur
}

void Tower::move() {
    // Implémentation de la fonction move() si nécessaire
}

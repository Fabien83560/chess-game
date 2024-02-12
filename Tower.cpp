#include "Tower.h"

Tower::Tower(const QString& color) : Piece(color) {
    imgFile = ":/img/pieces/" + color + "/tower.png";
}

Tower::~Tower() {
    // Destructeur
}

void Tower::move() {
    // Implémentation de la fonction move() si nécessaire
}

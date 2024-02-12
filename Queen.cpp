#include "Queen.h"

Queen::Queen(const QString& color) : Piece(color) {
    imgFile = ":/img/pieces/" + color + "/queen.png";
}

Queen::~Queen() {
    // Destructeur
}

void Queen::move() {
    // Implémentation de la fonction move() si nécessaire
}

#include "King.h"

King::King(const QString& color) : Piece(color) {
    imgFile = ":/img/pieces/" + color + "/king.png";
}

King::~King() {
    // Destructeur
}

void King::move() {
    // Implémentation de la fonction move() si nécessaire
}

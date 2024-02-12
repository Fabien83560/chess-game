#include "Pawn.h"

Pawn::Pawn(const QString& color) : Piece(color) {
    imgFile = ":/img/pieces/" + color + "/pawn.png";
}

Pawn::~Pawn() {
    // Destructeur
}

void Pawn::move() {
    // Implémentation de la fonction move() si nécessaire
}

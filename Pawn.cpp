#include "Pawn.h"

Pawn::Pawn(const std::string& color) : Piece(color) {
    imgFile = color + "/pawn.png";
}

Pawn::~Pawn() {
    // Destructeur
}

void Pawn::move() {
    // Implémentation de la fonction move() si nécessaire
}

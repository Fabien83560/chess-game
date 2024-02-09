#include "Horse.h"

Horse::Horse(const std::string& color) : Piece(color) {
    imgFile = color + "/horse.png";
}

Horse::~Horse() {
    // Destructeur
}

void Horse::move() {
    // Implémentation de la fonction move() si nécessaire
}

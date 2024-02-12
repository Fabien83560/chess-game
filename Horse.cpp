#include "Horse.h"

Horse::Horse(const QString& color) : Piece(color) {
    imgFile = ":/img/pieces/" + color + "/horse.png";
}

Horse::~Horse() {
    // Destructeur
}

void Horse::move() {
    // Implémentation de la fonction move() si nécessaire
}

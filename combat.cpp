#include <cstdlib>
#include "combat.h"
//
// Created by danix on 9/24/2026.
//

int lancer_de(int faces) {
    int jet = std::rand() % faces + 1;
    return jet;
};


int calculer_degats(int attaque, int defense) {
    int degats = attaque + lancer_de(6) - defense;
    if (degats <= 0) {
        return 0;
    }
return degats;
}
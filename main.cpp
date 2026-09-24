#include <iostream>
#include <cstdlib>
#include <ctime>
#include <print>
#include "combat.h"
int main() {

    std::srand(static_cast<unsigned int>(std::time(nullptr)));

int faces = 6;
    for (int i = 0; i < 10; i++){

        std::println("{}", lancer_de(faces));
        std::println("degats : {}", calculer_degats(1, 5));
    }
    ;
    return 0;
}

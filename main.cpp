#include <iostream>
#include <cstdlib>
#include <ctime>
#include <print>
#include "de.h"
int main() {

    std::srand(static_cast<unsigned int>(std::time(nullptr)));

int faces = 6;
    for (int i = 0; i < 10; i++){
        std::println("Lancer de {}", faces);
        std::println("{}", lancer_de(faces));


    }
    return 0;
}

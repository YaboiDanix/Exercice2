#include <iostream>
#include <cstdlib>
#include <ctime>
#include <print>
#include "combat.h"
int main() {

    std::srand(static_cast<unsigned int>(std::time(nullptr)));


    int orc = 60;
    int troll = 80;
    int t = 0;
    while (orc >= 0 && troll >= 0) {
        int odegats = calculer_degats(14,6);

        ++t;
        std::println("tour {}",t);
        std::println("l'orc frappe le troll : {} degats", odegats);
        troll -= odegats;
        std::println("troll a {} PV", troll);
        int tdegats = calculer_degats(11,4);
        std::println("le troll frappe l'orc : {}", tdegats);
        orc -= tdegats;
        std::println("orc a {} PV", orc);

    }
    return 0;
}

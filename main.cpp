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
        if (t > 100) {
            std::println("match nul");
            break;
        }
        ++t;
        std::println("tour {}",t);

        int odegats = calculer_degats(14,6);
        switch (lancer_de(10)) {
            case 1:
                std::println("no damage");
                continue;
            case 10 :
                odegats = calculer_degats(14,6) * 2;
                std::println("l'orc frappe le troll : coup critique {} degats", odegats);
                troll -= odegats;
                break;
            default :
                odegats = calculer_degats(14,6);
                std::println("l'orc frappe le troll : {} degats", odegats);
                troll -= odegats;
                break;
        }

        if (troll <=0) {
            std::println("troll a 0 PV");
            std::println("l'orc gagne en {} tours",t);
            break;
        }
        std::println("troll a {} PV",troll);
        int tdegats = calculer_degats(11,4);
        switch (lancer_de(10)) {
            case 1:
                std::println("no damage");
                continue;
            case 10 :
                tdegats = calculer_degats(11,4) * 2;
                std::println("le troll frappe l'orc : coup critique {} degats", tdegats);
                orc -= tdegats;
                break;
            default :
                std::println("le troll frappe l'orc : {} degats", tdegats);
                orc -= tdegats;

                break;
        }
        if (orc <=0) {
            std::println("orc a 0 PV");
            std::println("le troll gagne en {} tours",t);
            break;
        }
        std::println("orc a {} PV", orc);
    }
    return 0;
}

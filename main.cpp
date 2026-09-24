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
        ++t;
        std::println("tour {}",t);
        int odegats = calculer_degats(14,6);
        switch (lancer_de(10)) {
            case 1:
                std::println("no damage");
                continue;
            case 2 :
                std::println("l'orc frappe le troll : {} degats", odegats);
                troll -= odegats;
                std::println("troll a {} PV", troll);
                break;
            case 3:
                std::println("l'orc frappe le troll : {} degats", odegats);
                troll -= odegats;
                std::println("troll a {} PV", troll);
                break;
            case 4 :
                std::println("l'orc frappe le troll : {} degats", odegats);
                troll -= odegats;
                std::println("troll a {} PV", troll);
                break;
            case 5:
                std::println("l'orc frappe le troll : {} degats", odegats);
                troll -= odegats;
                std::println("troll a {} PV", troll);
                break;
            case 6 :
                std::println("l'orc frappe le troll : {} degats", odegats);
                troll -= odegats;
                std::println("troll a {} PV", troll);
                break;
            case 7:
                std::println("l'orc frappe le troll : {} degats", odegats);
                troll -= odegats;
                std::println("troll a {} PV", troll);
                break;
            case 8 :
                std::println("l'orc frappe le troll : {} degats", odegats);
                troll -= odegats;
                std::println("troll a {} PV", troll);
                break;
            case 9:
                std::println("l'orc frappe le troll : {} degats", odegats);
                troll -= odegats;
                std::println("troll a {} PV", troll);
                break;
            case 10 :
                odegats = calculer_degats(14,6) * 2;
                std::println("l'orc frappe le troll : coup critique {} degats", odegats);
                troll -= odegats;
                std::println("troll a {} PV", troll);
                break;
            default :
                std::println("error");
                break;
        }
        int tdegats = calculer_degats(11,4);
        switch (lancer_de(10)) {
            case 1:
                std::println("no damage");
                continue;
            case 2 :
                std::println("le troll frappe l'orc : {} degats", tdegats);
                orc -= tdegats;
                std::println("orc a {} PV", orc);
                break;
            case 3 :
                std::println("le troll frappe l'orc : {} degats", tdegats);
                orc -= tdegats;
                std::println("orc a {} PV", orc);
                break;
            case 4 :
                std::println("le troll frappe l'orc : {} degats", tdegats);
                orc -= tdegats;
                std::println("orc a {} PV", orc);
                break;
            case 5 :
                std::println("le troll frappe l'orc : {} degats", tdegats);
                orc -= tdegats;
                std::println("orc a {} PV", orc);
                break;
            case 6 :
                std::println("le troll frappe l'orc : {} degats", tdegats);
                orc -= tdegats;
                std::println("orc a {} PV", orc);
                break;
            case 7 :
                std::println("le troll frappe l'orc : {} degats", tdegats);
                orc -= tdegats;
                std::println("orc a {} PV", orc);
                break;
            case 8 :
                std::println("le troll frappe l'orc : {} degats", tdegats);
                orc -= tdegats;
                std::println("orc a {} PV", orc);
                break;
            case 9 :
                std::println("le troll frappe l'orc : {} degats", tdegats);
                orc -= tdegats;
                std::println("orc a {} PV", orc);
                break;
            case 10 :
                tdegats = calculer_degats(11,4) * 2;
                std::println("le troll frappe l'orc : coup critique {} degats", tdegats);
                orc -= tdegats;
                std::println("orc a {} PV", orc);
                break;
            default :
                std::println("error");
        }

    }
    return 0;
}

#include <iostream>
#include "klasy_postaci.h"
#include <vector>
#include <memory>
#include <cstdlib>
#include "gra.h"

using namespace std;

string wybor_klasy;
vector<unique_ptr<Postac>> postacie;

void lista_postaci() {
    postacie.push_back(make_unique<Wojownik>("Misiek", 30, 100, 20));
    postacie.push_back(make_unique<Mag>("Krzychu", 50, 100));
    postacie.push_back(make_unique<Zlodziej>("Barlik", 60, 100));
    for (const auto &postac: postacie) {
        postac->pokaz_postac();
    }
}


int main() {
    while (true) {
        cout << "MISIEK RPG 1.0 " << endl;
        cout << "1. Graj" << endl;
        cout << "2. Wyjdz" << endl;
        int wybor;
        cin >> wybor;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cerr << "Nieprawidłowa wartość!" << endl;
        }
        switch (wybor) {
            case 1: {
                cout << endl;
                lista_postaci();
                cout << "Wybierz klasę postaci: ";
                cin >> wybor_klasy;
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    cout << "Nieprawidłowa wartość" << endl;
                }
                if (wybor_klasy == "Wojownik" || wybor_klasy == "wojownik") {
                    cout << "Wybrano klasę: Wojownik" << endl;
                    Game::game_wojownik();

                } else if (wybor_klasy == "Mag" || wybor_klasy == "mag") {
                    cout << "Wybrano klasę: Mag" << endl;
                    Game::game_mag();
                } else if (wybor_klasy == "Zlodziej" || wybor_klasy == "zlodziej") {
                    cout << "Wybrano klasę: Złodziej" << endl;
                    Game::game_zlodziej();
                } else {
                    cerr << "Niepoprawna klasa!" << endl;
                    break;
                }
            }
            case 2: {
                exit(0);
                break;
            }

        }
    }


    return 0;
}

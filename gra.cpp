#include <iostream>
#include "gra.h"
#include "klasy_postaci.h"
#include <chrono>
#include <thread>

using namespace std;

Postac *pointer;
Wojownik wojownik1;
Mag mag1;
Zlodziej zlodziej1;

Przeciwnik *enemy_pointer;



void Game::game_wojownik(){
    pointer = &wojownik1;
    cout << "Obudziłeś się w chatce niedaleko miasta..." << endl;
    cout << "Jak chcesz spędzić dzień? " << endl;
    cout << "1. Pojdź do karczmy" << endl;
    cout << "2. Idź na polowanie" << endl;
    int wybor_wojownik;
    cin >> wybor_wojownik;
    switch (wybor_wojownik) {
        case 1:{
            cout << "Wchodzisz do karczmy przepełnionej ludzmi.." << endl;
            chrono::seconds czas(2);
            this_thread::sleep_for(czas);
            cout << "Czas mija na dobrej zabawie, wypić więcej alkoholu?" << endl;
            string wybor_karczma_wojownik;
            cin >> wybor_karczma_wojownik;
            if (wybor_karczma_wojownik == "tak" || wybor_karczma_wojownik == "Tak"){
                cout << "Rzucasz kilka monet na blat i wypijasz haustem kolejny kufel piwa." << endl;
                this_thread::sleep_for(czas);
                cout << "Pijesz dalej, zagadując okolicznych mieszkańców..." << endl;
                this_thread::sleep_for(czas);
                cout << "Wdajesz się w bójkę z bandytą!" << endl;
                cout << endl;
                walka();
                wygrana_walka();
                cout << endl;
                cout << "Z obitą głową uznałeś, że czas wracać do domu..." << endl;





                }
            else if (wybor_karczma_wojownik == "nie" || wybor_karczma_wojownik == "Nie"){
                cout << "Uznałeś, że lepiej na dzisiaj już zbastować i wróciłeś do chaty." << endl;
            }
        }
        
    }
    
}

void Game::game_mag(){
    pointer = &mag1;
    cout << "Obudziłeś się w bibliotece na zamku..." << endl;
}

void Game::game_zlodziej(){
    pointer = &zlodziej1;
    cout << "Obudziłeś się w swoim namiocie w obocie..." << endl;
}


void Game::walka(){
    Bandyta bandyta1("Ziutek", 100, 20);
    enemy_pointer = &bandyta1;
    enemy_pointer ->pokaz_przeciwnika();
    chrono::seconds czas(2);
    this_thread::sleep_for(czas);
    cout << endl;
    cout << "Twoje statystyki: " << endl;
    pointer ->pokaz_postac();
    this_thread::sleep_for(czas);
    cout << endl;
    cout << "Walka trwa!" << endl;
    this_thread::sleep_for(czas);
    enemy_pointer ->odejmij_hp_bandyta();
};

void Game::wygrana_walka() {
    cout << "Udało Ci się wygrać walkę!" << endl;
    chrono::seconds czas(2);
    this_thread::sleep_for(czas);
    cout << "O to twoje statystyki po walce: " << endl;
    pointer ->pokaz_postac();
}
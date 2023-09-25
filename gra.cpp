#include <iostream>
#include "gra.h"
#include "klasy_postaci.h"
#include <chrono>
#include <thread>
#include <cstdlib>
#include <random>
#include <ctime>

using namespace std;

Postac *pointer;
Wojownik wojownik1;
Mag mag1;
Zlodziej zlodziej1;

Przeciwnik *enemy_pointer;



void Game::game_wojownik(){
    pointer = &wojownik1;
    cout << "Obudziłeś się w swojej chacie niedaleko miasta..." << endl;
    cout << "Jak chcesz spędzić dzień? " << endl;
    cout << "1. Pojdź do karczmy" << endl;
    cout << "2. Idź na polowanie" << endl;
    cout << "3. Wyjdź z gry" << endl;
    int wybor_wojownik;
    cin >> wybor_wojownik;
    if (cin.fail()){
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << "Nieprawidłowa wartość!" << endl;
        game_wojownik();
    }
    switch (wybor_wojownik) {
        case 1:{
            cout << "Wchodzisz do karczmy przepełnionej ludzmi..." << endl;
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
                game_wojownik();
                }
            else if (wybor_karczma_wojownik == "nie" || wybor_karczma_wojownik == "Nie"){
                cout << "Uznałeś, że lepiej na dzisiaj już przestać i wróciłeś do chaty." << endl;
                game_wojownik();
            }
            else {
                cout << "Nieprawidłowa wartość" << endl;
                game_wojownik();

            }

        }
        case 2:{
            cout << "Wychodzisz do lasu i szukasz zwierzyny..."<<endl;
            chrono::seconds czas(2);
            this_thread::sleep_for(czas);
            cout << "Stukot twojej potężnej zbroi nie ułatwia Ci tego zadania..." << endl;
            chrono::seconds czas_wojownik(5);
            this_thread::sleep_for(czas);
            cout << "..." << endl;
            polowanie();
            cout << "Zwierzę okazało się zbyt silne...jeleń porożem przebił Ci tętnice." << endl;
            cout << "Koniec gry." << endl;
        }
        case 3:{
            exit(0);
        }
        
    }
    
}

void Game::game_mag(){
    pointer = &mag1;
    cout << "Obudziłeś się w swoim pokoju w szkole magii...." << endl;
    cout << "Jak chcesz spędzić dzień?" << endl;
    cout << "1. Ucz się magii" << endl;
    cout << "2. Spróbuj włamać się do gabinetu Arcymaga" << endl;
    cout << "3. Wyjdź z gry" << endl;
    int wybor_mag;
    cin >> wybor_mag;
    if (cin.fail()){
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << "Nieprawidłowa wartość!" << endl;
        game_mag();
    }
    switch (wybor_mag) {
        case 1:{
            cout << "Zauważasz, że książki na których spałeś są całkiem przydatne" << endl;
            cout << "Aby nauczyć się zaklęcia powtórz sekwencje: " << endl;
            cout << "Ogień" << endl;
            string ogien;
            cin >> ogien;
            if (ogien == "ogień" || ogien == "Ogień" ){
                cout << "Woda" << endl;
                string woda;
                cin >> woda;
                if (woda == "woda" || woda == "Woda"){
                    cout << "Powietrze" << endl;
                    string powietrze;
                    cin >> powietrze;
                    if (powietrze == "powietrze" || "Powietrze"){
                        cout << "Gratulacje! Poznałeś nowe zaklęcie: Kula ognia." << endl;
                        chrono::seconds czas(2);
                        this_thread::sleep_for(czas);
                        cout << "Zmęczony uznałes, że wracasz do swojego pokoju i idziesz spać." << endl;
                        cout << "Koniec gry. " << endl;
                        cout << "RESETOWANIE DNIA" << endl;
                        this_thread::sleep_for(czas);
                        game_mag();

                    } else {
                        cout << "Nieprawidłowa wartość!" << endl;
                        game_mag();
                    }

                } else {
                    cout << "Nieprawidłowa wartość!" << endl;
                    game_mag();
                }
            } else {
                cout << "Nieprawidłowa wartość!" << endl;
                game_mag();
            }
        }
        case 2:{
            srand(static_cast<unsigned int>(std::time(nullptr)));
            int min = 1;
            int max = 6;
            int liczba_losowa = min + (rand() %
                    (max - min + 1));
            chrono::seconds czas(2);
            cout << "Zakradasz się do gabinetu Arcymaga..." << endl;
            this_thread::sleep_for(czas);
            cout << "Próbujesz otworzyć drzwi wytrychem..." << endl;
            this_thread::sleep_for(czas);
            if (liczba_losowa == 6){
                cout << "Udało Ci się włamać, znalazłeś tam sakiewkę ze złotem i zwoje magiczne!" << endl;
                cout << "Koniec gry." << endl;
                cout << "RESETOWANIE DNIA" << endl;
                this_thread::sleep_for(czas);
                game_mag();
            }
            else if (liczba_losowa < 6){
                cout << "Złamałeś wytrych i zostałeś złapany przez innego Maga!" << endl;
                cout << "Zostałeś wydalony ze szkoły magii i trafiłeś do lochu" << endl;
                cout << "Koniec gry." << endl;
                cout << "RESETOWANIE DNIA" << endl;
                this_thread::sleep_for(czas);
                game_mag();
            }

        }
        case 3:{
            exit(0);
        }

    }
}

void Game::game_zlodziej(){
    pointer = &zlodziej1;
    cout << "Obudziłeś się w swoim namiocie w obozie..." << endl;
    cout << "Jak chcesz spędzić dzień?" << endl;
    cout << "1. Ucz się otwierać zamki" << endl;
    cout << "2. Pójdź do miasta i spróbuj kogoś okraść" << endl;
    cout << "3. Wyjdź z gry" << endl;
    int wybor_zlodziej;
    cin >> wybor_zlodziej;
    if (cin.fail()){
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << "Nieprawidłowa wartość!" << endl;
        game_zlodziej();
    }
    switch (wybor_zlodziej) {
        case 1:{
            cout << "Spotykasz się ze swoim mistrzem przy jego namiocie..." << endl;
            cout << "Prosisz aby nauczył Cię lepiej otwierać zamki, mistrz się zgadza." << endl;
            cout << "Nacisnij przycisk Q aby przekręcić wytrychem w lewo i przycisk E aby przekręcić w prawo" << endl;
            char key;
            key = getchar();
            cin >> key;
            srand(static_cast<unsigned int>(std::time(nullptr)));
            int prawdopodobienstwo_min = 1;
            int prawdopodobienstwo_max = 6;
            int liczba_losowa = prawdopodobienstwo_min + (rand() % (prawdopodobienstwo_max - prawdopodobienstwo_min + 1));
            if (key == 'q'){
                cout << "Przekręcasz wytrych w lewo i czujesz, że jesteś blisko otworzenia skrzyni.." << endl;
                chrono::seconds czas(2);
                this_thread::sleep_for(czas);
                if (liczba_losowa <= 3) {
                    cout << "Było tak blisko, ale wytrych pękł pod wpływem siły.." << endl;
                    cout << "Mistrz zaczął z Ciebie drwić, zrezygnowany wróciłeś do namiotu... " << endl;
                    game_zlodziej();
                }
                if (liczba_losowa >= 4){
                    cout << "Udało Ci się otworzyć skrzynie!" << endl;
                    cout << "Mistrz jest z Ciebie bardzo dumny, wróciłeś do namiotu pełen optymizmu." << endl;
                    game_zlodziej();
                }
            }
            if (key == 'e'){
                cout << "Przekręcasz wytrych w prawo i czujesz, że jesteś blisko otworzenia skrzyni.." << endl;
                chrono::seconds czas(2);
                this_thread::sleep_for(czas);
                if (liczba_losowa <= 3) {
                    cout << "Było tak blisko, ale wytrych pękł pod wpływem siły.." << endl;
                    cout << "Mistrz zaczął z Ciebie drwić, zrezygnowany wróciłeś do namiotu... " << endl;
                    game_zlodziej();
                }
                if (liczba_losowa >= 4){
                    cout << "Udało Ci się otworzyć skrzynie!" << endl;
                    cout << "Mistrz jest z Ciebie bardzo dumny, wróciłeś do namiotu pełen optymizmu." << endl;
                    game_zlodziej();
                }
            }
            break;
        }
        case 2:{
            cout << "Ubierasz się i wyruszasz do miasta..." << endl;
            chrono::seconds czas(2);
            this_thread::sleep_for(czas);
            cout << "Po drodzę zaczepia Cię jakiś podejrzany człowiek." << endl;
            walka();
            this_thread::sleep_for(czas);
            wygrana_walka();
            cout << "Docierasz w końcu do miasta, czujesz się słaby po walce..." << endl;
            cout << "Wchodzisz do karczmy aby coś zjeść i odzyskać siły." << endl;
            pointer->ulecz();
            this_thread::sleep_for(czas);
            cout << "Zauważasz, że człowiekowi siedzącemu obok Ciebie wystaje z kieszeni sakiewka." << endl;
            cout << "Spróbować ją ukraść?" <<endl;
            string kradnij;
            cin >> kradnij;
            srand(static_cast<unsigned int>(std::time(nullptr)));
            int min = 1;
            int max = 6;
            int liczba_losowa = min + (rand() %
                                       (max - min + 1));
            this_thread::sleep_for(czas);
            if (kradnij == "tak" || kradnij == "tak"){
                if (liczba_losowa <= 3){
                    cout << "Zostałeś przyłapany na kradzieży!" << endl;
                    cout << "Mężczyzna odwrócił się i bardzo mocno uderzył Cię w twarz." << endl;
                    pointer->odejmij_hp();
                    cout << "Zostałeś wyrzucony z karczmy, zraniony padłeś nieprzytomny w drodze do obozu" <<endl;
                    cout << "Czujesz, że ktoś Cię przenosi" << endl;
                    game_zlodziej();
                }
                if (liczba_losowa >= 4){
                    cout << "Udało Ci się okraść mężczyzne w karczmie!" << endl;
                    this_thread::sleep_for(czas);
                    cout << "Wyszedłeś niepostrzeżenie z karczmy i wróciłeś do obozu" << endl;
                    cout << "Podzieliłeś się łupem z przyjaciólmi z obozu" << endl;
                    cout << "Widzisz jak twój mistrz kiwa głową wyznając aprobatę" << endl;
                    cout << "Zasypiasz w swoim namiocie." << endl;
                    game_zlodziej();
                }
            }
            if (kradnij == "nie" || kradnij == "Nie"){
                cout << "Wypiłeś jeszcze jeden kufel piwa i uznałeś, że pora wracać do obozu." << endl;
                cout << "Wróciłeś do obozu z pustymi rękami, twój Mistrz wyraził dezaprobatę." << endl;
                cout << "Zawiedziony kładziesz się spać w swoim namiocie." << endl;
                game_zlodziej();
            }
            else{
                cout << "Niepoprawna wartość!" << endl;
                game_zlodziej();
            }




        }
        case 3:{
            exit(0);
        }

    }
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
    pointer->odejmij_hp();
    enemy_pointer ->odejmij_hp_bandyta();
};

void Game::polowanie() {
    Bandyta zwierze("Jeleń", 100, 10, "Zwierzę");
    enemy_pointer = &zwierze;
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
    pointer->smierc();


}



void Game::wygrana_walka() {
    cout << "Udało Ci się wygrać walkę!" << endl;
    chrono::seconds czas(2);
    this_thread::sleep_for(czas);
    cout << "O to twoje statystyki po walce: " << endl;
    pointer ->pokaz_postac();
}
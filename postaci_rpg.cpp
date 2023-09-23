#include <iostream>
#include "klasy_postaci.h"


using namespace std;




void Wojownik::pokaz_postac() {
    cout << "Imie Wojownika: " << imie << endl;
    cout << "Pancerz: " << pancerz << endl;
    cout << "Życie: " << zycie << endl;
    cout << "Siła: " << sila << endl;
    cout << endl;
}

Wojownik::Wojownik(std::string t_name, int t_pancerz, int t_zycie, int t_sila) {
    imie = t_name;
    pancerz = t_pancerz;
    zycie = t_zycie;
    sila = t_sila;
}

void Mag::pokaz_postac() {
    cout << "Imie Maga: " << imie << endl;
    cout << "Mana: " << mana << endl;
    cout << endl;
}

Mag::Mag(std::string t_name, int t_wartosc, int t_zycie) {
    imie = t_name;
    mana = t_wartosc;
    zycie = t_zycie;
}

void Zlodziej::pokaz_postac() {
    cout << "Imie Złodzieja: " << imie << endl;
    cout << "Zręczność: " << zrecznosc << endl;
    cout << endl;
}

Zlodziej::Zlodziej(std::string t_name, int t_wartosc, int t_zycie) {
    imie = t_name;
    zrecznosc = t_wartosc;
    zycie = t_zycie;
}

Bandyta::Bandyta(std::string t_imie, int t_zycie, int t_sila) {
    imie = t_imie;
    zycie = t_zycie;
    sila = t_sila;

}

void Bandyta::pokaz_przeciwnika() {
    cout << "Spotykasz Bandytę!" << endl;
    cout << "Imie: " << imie << endl;
    cout << "Zycie: " << zycie << endl;
    cout << "Sila: " << sila << endl;
}

void Wojownik::odejmij_hp() {
    zycie -= 40;
    cout << "Zraniono cię!" << endl;
    cout << "Obecne życie: "<< zycie << endl;
}

void Mag::odejmij_hp() {
    zycie -= 60;
    cout << "Zraniono cię!" << endl;
    cout << "Obecne życie: "<< zycie << endl;
}

void Zlodziej::odejmij_hp() {
    zycie -= 50;
    cout << "Zraniono cię!" << endl;
    cout << "Obecne życie: "<< zycie << endl;
}

void Bandyta::odejmij_hp_bandyta() {
    zycie -= 100;
    cout << "Obecne życie bandyty: " << endl;
}
#include <iostream>
#include "klasy_postaci.h"


using namespace std;




void Wojownik::pokaz_postac() {
    cout << "Imie: " << imie << endl;
    cout << "Pancerz: " << pancerz << endl;
    cout << "Życie: " << zycie << endl;
    cout << "Siła: " << sila << endl;
    cout << "Klasa: " << klasa << endl;
    cout << endl;
}

Wojownik::Wojownik(std::string t_name, int t_pancerz, int t_zycie, int t_sila, string t_klasa) {
    imie = t_name;
    pancerz = t_pancerz;
    zycie = t_zycie;
    sila = t_sila;
    klasa = t_klasa;
}

void Mag::pokaz_postac() {
    cout << "Imie: " << imie << endl;
    cout << "Mana: " << mana << endl;
    cout << "Klasa: " << klasa << endl;
    cout << endl;
}


Mag::Mag(std::string t_name, int t_wartosc, int t_zycie, string t_klasa) {
    imie = t_name;
    mana = t_wartosc;
    zycie = t_zycie;
    klasa = t_klasa;
}

void Zlodziej::pokaz_postac() {
    cout << "Imie: " << imie << endl;
    cout << "Zręczność: " << zrecznosc << endl;
    cout << "Klasa: " << klasa << endl;
    cout << endl;
}

Zlodziej::Zlodziej(std::string t_name, int t_wartosc, int t_zycie, string t_klasa) {
    imie = t_name;
    zrecznosc = t_wartosc;
    zycie = t_zycie;
    klasa = t_klasa;
}

Bandyta::Bandyta(std::string t_imie, int t_zycie, int t_sila, string t_klasa) {
    imie = t_imie;
    zycie = t_zycie;
    sila = t_sila;
    klasa = t_klasa;


}

void Bandyta::pokaz_przeciwnika() {
    cout << "Spotykasz przeciwnika!" << endl;
    cout << "Imie: " << imie << endl;
    cout << "Zycie: " << zycie << endl;
    cout << "Sila: " << sila << endl;
    cout << "Klasa: " << klasa << endl;
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
    cout << "Obecne życie przeciwnika: " <<  zycie << endl;
}
void Wojownik::smierc() {
    zycie -= 100;
    cout << "Umierasz." << endl;
}

void Mag::smierc() {
    zycie -= 100;
    cout << "Umierasz." << endl;
}

void Zlodziej::smierc() {
    zycie -= 100;
    cout << "Umierasz." << endl;
}
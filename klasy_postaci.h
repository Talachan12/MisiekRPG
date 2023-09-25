#include <iostream>

using namespace std;


class Postac{
public:
    virtual void pokaz_postac() = 0;
    virtual void odejmij_hp()= 0;
    virtual void smierc()=0;
    virtual void ulecz()=0;



};

class Wojownik :public Postac{
protected:
    string imie;
    int pancerz;
    int zycie;
    int sila;
    string klasa;
public:
    Wojownik(string t_name = "Misiek", int t_pancerz = 30, int t_zycie = 100, int t_sila = 40, string t_klasa = "Wojownik");
    virtual void pokaz_postac();
    virtual void odejmij_hp();
    virtual void smierc();
    virtual void ulecz();
};

class Mag :public Postac{
    string imie;
    int mana;
    int zycie;
    string klasa;
public:
    Mag(string t_name = "Krzychu", int t_wartosc = 50, int t_zycie = 100, string t_klasa = "Mag");
    virtual void pokaz_postac();
    virtual void odejmij_hp();
    virtual void smierc();
    virtual void ulecz();

};

class Zlodziej: public Postac{
    string imie;
    int zrecznosc;
    int zycie;
    string klasa;
public:
    Zlodziej(string t_name = "Barlik", int t_wartosc = 60, int t_zycie = 100, string t_klasa = "Złodziej");
    virtual void pokaz_postac();
    virtual void odejmij_hp();
    virtual void smierc();
    virtual void ulecz();

};

class Przeciwnik{
public:
    virtual void pokaz_przeciwnika()=0;
    virtual void odejmij_hp_bandyta()=0;

};

class Bandyta : public Przeciwnik{
    string imie;
    int zycie;
    int sila;
    string klasa;
public:
    Bandyta(string t_imie, int t_zycie, int t_sila, string t_klasa = "Bandyta");
    virtual void pokaz_przeciwnika();
    virtual void odejmij_hp_bandyta();
};


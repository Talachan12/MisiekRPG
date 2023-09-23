#include <iostream>

using namespace std;


class Postac{
public:
    virtual void pokaz_postac() = 0;
    virtual void odejmij_hp()= 0;



};

class Wojownik :public Postac{
protected:
    string imie;
    int pancerz;
    int zycie;
    int sila;
public:
    Wojownik(string t_name = "Misiek", int t_pancerz = 30, int t_zycie = 100, int t_sila = 40);
    virtual void pokaz_postac();
    virtual void odejmij_hp();
};

class Mag :public Postac{
    string imie;
    int mana;
    int zycie;
public:
    Mag(string t_name = "Krzychu", int t_wartosc = 50, int t_zycie = 100);
    virtual void pokaz_postac();
    virtual void odejmij_hp();

};

class Zlodziej: public Postac{
    string imie;
    int zrecznosc;
    int zycie;
public:
    Zlodziej(string t_name = "Barlik", int t_wartosc = 60, int t_zycie = 100);
    virtual void pokaz_postac();
    virtual void odejmij_hp();

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
public:
    Bandyta(string t_imie, int t_zycie, int t_sila);
    virtual void pokaz_przeciwnika();
    virtual void odejmij_hp_bandyta();
};


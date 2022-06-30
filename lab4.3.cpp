#include <iostream>
#include <string>
using namespace std;
#include <array>



class Osoba {
private:
    string ime ;
    string prezime;

public:
    Osoba(string Ime , string Prezime) : ime(Ime),prezime(Prezime){};
    string getIme() {
        return ime;
    }
    string getPrezime() {
        return prezime;
    }
};

class BankovniRacun {
private:
    float stanje;
    Osoba osoba ;

public:
    BankovniRacun(string ime, string prezime) : osoba(ime, prezime) {
        stanje = 0.0;
    }
    void ispis () {
        cout << "Ime: " << osoba.getIme() << endl;
        cout << "Prezime: " <<osoba.getPrezime() << endl;
        cout << "Stanje na racunu: "<< stanje<< endl;
    }

    void uplati(float uplata) {
        stanje=+ uplata;
    }

    void isplati(float isplata) {
        stanje=stanje-isplata;
    }


};

int main() {
    BankovniRacun primjer {"Marin ", "Zolota"};
    primjer.ispis();
    primjer.uplati(5000);
    primjer.ispis();
    primjer.isplati(2000);
    primjer.ispis();





    return 0;
}

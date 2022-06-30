#include <iostream>
using namespace std;
#include <string>

class Osoba {
private:
    string ime;
    string prezime;

public:
    string getIme(){
        return ime;
    }

    string getPrezime(){
        return prezime;
    }

    void setIme(string ime) {
        this->ime=ime;
    }

    void setPrezime(string prezime) {
        this->prezime=prezime;
    }

    void prikaz() {
        cout << "Ime :" << ime << endl;
        cout << "Prezime:" << prezime << endl;
    }


    Osoba(string ime , string prezime) : ime(ime),prezime(prezime) {};

    bool operator ==( const Osoba & osoba ) {
        if ( ime == osoba . ime && prezime== osoba . prezime) {
            return true;
        }
        return false ;
    }

};

class Film {
private:
    string naziv;
    Osoba producent;
    Osoba recenzent;
    int ocjena;

public:
    Film(string naziv , Osoba producent , Osoba recenzent , int ocjena) : naziv(naziv), producent(producent),recenzent(recenzent),ocjena(ocjena) {};

    void ispis() {
        cout << "naziv filma:" << naziv << endl;
        cout << "Producent:" << producent.getIme() << producent.getPrezime() << endl;
        cout << "Recenzent:" << recenzent.getIme() << recenzent.getPrezime() << endl;
        cout << ocjena << ocjena << endl;
    }
};


int main() {
    /*
    Osoba x1 { "Marko ","Marulic"};
    Osoba x2 {"Marko","Mariulic"};

    cout << " prve dvije osobe:" << endl;
    x1.prikaz() ;
    x2.prikaz();
    */












    return 0;
}

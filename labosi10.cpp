#include <iostream>
#include <string>
using namespace std;
#include <array>
#include <vector>


class Racun {
protected:
    float stanje;
    string valuta;
    vector<double> transakcije;

public:
    Racun() {
        stanje = 0;
        valuta = "kn";
    }

    Racun(float stanje) {
        this->stanje = stanje;
        this->valuta = "kn";
    }

    Racun(float stanje, string valuta) {
        this->stanje = stanje;
        this->valuta = valuta;
    }

    void prikaziTransakcije() {
        for (auto transakcija : transakcije) {
            cout << transakcija << valuta << endl;
        } }

        float dohvatiStanje() {
            return stanje;
        }
        string dohvatiValutu() {
            return  valuta; }
        };

class UplatniRacun : public Racun {
public:
    void uplati(float iznos) {
        transakcije.push_back(iznos);
        stanje = stanje + iznos;
    }

};

class IsplatniRacun : public Racun {
public:
    IsplatniRacun(float stanje) : Racun(stanje) {
    }
    bool isplati(float iznos) {
        if (stanje >= iznos) {
            stanje = stanje - iznos;
            transakcije.push_back(-1 * iznos);
            return true;
        }
        return false;
    }
};

class DevizniRacun : public Racun {
public:
    DevizniRacun(double stanje, string valuta, double tecaj) : Racun(stanje, valuta) {
        this->tecaj = tecaj;
    }
    void kupi(double iznos) {
        iznos = iznos / tecaj;
        stanje = stanje + iznos;
        transakcije.push_back(iznos);
    }
private:
    double tecaj;
};





int main() {

    UplatniRacun uplatni;
    uplatni.uplati(120);
    uplatni.uplati(50);
    cout << "Transakcije uplatnog racuna:" << endl;
    uplatni.prikaziTransakcije();

    IsplatniRacun isplatni(300);
    if (isplatni.isplati(100)) {
        cout << "Isplaceno 100KN" << endl;
    } else {
        cout << "Nije isplaceno 100KN" << endl;
    }
    if (isplatni.isplati(74.23)) {
        cout << "Isplaceno 74.23KN" << endl;
    }
    else {
        cout << "Nije isplaceno 74.23KN" << endl;
    }
    if (isplatni.isplati(350)) {
        cout << "Isplaceno 350KN" << endl;
    } else {
        cout << "Nije isplaceno 350KN" << endl;
    }
    cout << "Transakcije isplatnog racuna:" << endl;
    isplatni.prikaziTransakcije();

    DevizniRacun devizni(150, "EUR", 7.45);
    devizni.kupi(300);
    devizni.kupi(150);
    cout << "Transakcije deviznog racuna:" << endl;
    devizni.prikaziTransakcije();

    return 0;
}
#include <iostream>
using namespace std;
#include <vector>
#include <string>



class Racun {
protected:
    float minus;
    float stanje;
    string valuta;
    vector<float>transakcije;

    void uplati(float iznos){
        transakcije.push_back(iznos);
        stanje=stanje+iznos;
        Racun::BrojTransakcija++;
    }
    bool isplati(float iznos) {
        if ( stanje-iznos>=minus) {
            transakcije.push_back(iznos*-1);
            stanje=stanje-iznos;
            Racun::BrojTransakcija++;
            return true;
        }
        return false;
    }


public:
    Racun() {
        stanje=0;
        valuta="Kn";
        minus=0;
    }
    static int BrojTransakcija;
    Racun(float stanje , string valuta,float minus ) {
        this->stanje=stanje;
        this->valuta=valuta;
        this->minus=minus;
    }

    float dohvatiStanje() {
        return stanje;
    }

    string dohvatiStanjeTekst() {
        return to_string(stanje) + valuta;
    }




    void ispis() {
        for(int i =0 ; i < transakcije.size();i++) {
            cout <<  transakcije[i] << endl;
        }
    }

};
int Racun::BrojTransakcija=0;


class UplatniRacun:public Racun {
public:
    void uplati(float iznos){
        transakcije.push_back(iznos);
        stanje=stanje+iznos;
        Racun::BrojTransakcija++;
    }
};

class IsplatniRacun:public Racun {
public:
    IsplatniRacun(float stanje) {

        this->stanje=stanje;
    }

    bool isplati(float iznos) {
        if (stanje >= iznos) {
        transakcije.push_back(iznos*-1);
        stanje=stanje-iznos;
        Racun::BrojTransakcija++;
        return true;
        }
        return false;
    }

};


class DevizniRacun:public Racun {
private:
    float tecaj;
public:
    DevizniRacun(float stanje , string valuta,float tecaj) {
        this->stanje=stanje;
        this->valuta=valuta;
        this->tecaj=tecaj;
    }

    void kupi(float tecaj) {
        cout << stanje*tecaj;
    }

    void uplati(float iznos) {
        Racun::uplati(iznos * tecaj);
    }


};

class TekuciRacun:public Racun {
public:
    void prebaci(TekuciRacun racun2,float iznos) {
        racun2.isplati(iznos);
        uplati(iznos);


    }

};

int main() {

    IsplatniRacun primjer (500);
    cout << primjer.dohvatiStanjeTekst();




    return 0;
}

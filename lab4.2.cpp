#include <iostream>
#include <string>
using namespace std;
#include <array>

class Valuta {
private:
    string naziv;
    float tecaj;

public:
    Valuta(string Naziv): naziv(Naziv){};
    Valuta(string naziv , float tecaj): naziv(naziv),tecaj(tecaj) {};

    float Kupi(int kune) {
        float pretvorba = kune / tecaj;
        return pretvorba;
    }


    void ispis () {
        cout << naziv << ":" << tecaj << endl ;
    }

    void setTecaj (float postavi) {
        tecaj=postavi;
    }

    void ispis2() {
        cout << "Tecaj je:" << tecaj << endl;
    }


};



int main() {

   Valuta primjer ("Euro",7.60);
   primjer.ispis();
   cout <<"Kupljeno Eura:" << primjer.Kupi(350) << endl;
   cout << "Nakon promjene tecaja:" << endl;
   primjer.setTecaj(5);
   primjer.ispis();



    return 0;
}

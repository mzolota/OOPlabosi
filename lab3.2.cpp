#include <iostream>
#include <string>
using namespace std;
#include <array>


class Motocikl {
private:
    string proizvodac ;
    string model ;
    int zapremnina ;



public:

    Motocikl() {
        proizvodac= "";
        model = "";
        zapremnina=0;
    }

    Motocikl(string Proizvodac , string Model) {
        proizvodac=Proizvodac;
        model=Model;
        zapremnina=0;


    }
    Motocikl(string proizvodac, string model , int zapremnina) {
        this->proizvodac=proizvodac;
        this->model=model;
        this->zapremnina=zapremnina;

    }

    void prikazi () {
        cout <<"Proizvodac: " << proizvodac << endl;
        cout <<"Model: " << model << endl;
        cout << "Zapremnina: " << zapremnina  << endl;
    }



};



int main() {

Motocikl primjer {"kavasaki","z300",300};
primjer.prikazi();


    return 0;
}

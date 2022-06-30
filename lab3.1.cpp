#include <iostream>
using namespace std;




struct KompleksniBroj {
    float Realni ;
    float Imaginarni ;



};

void prikazi(KompleksniBroj primjer) {
    cout << "Realni : " << primjer.Realni << endl;
    cout << "Imaginarni : " << primjer.Imaginarni << endl;

};


KompleksniBroj zbrojiKompleksneBrojeve (KompleksniBroj jedan , KompleksniBroj dva) {
    KompleksniBroj rezultat;
    rezultat.Imaginarni = jedan.Imaginarni + dva.Imaginarni;
    rezultat.Realni = jedan.Realni + dva.Realni;



    return rezultat;

}




int main () {

    KompleksniBroj primjer { 2.24,5.27};
    KompleksniBroj primjer2 { 3.52,5.22};
    prikazi(primjer);
    zbrojiKompleksneBrojeve(primjer,primjer2);






}

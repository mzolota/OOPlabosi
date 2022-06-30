#include <iostream>
#include <string>
using namespace std;
#include <array>
#include <vector>

template <typename T1 ,typename T2>
T1 maksimum(T1 a , T2 b) {
    if (a > b) {
        cout << "Veci je: " << a << endl;
        return a;
    }
    else {
        cout << "Veci je: " << b << endl;
        return b;
    }

}


template < class T >
class Vektor {
private:
        T elementi[100];
        int velicinaPolja;
public:
        Vektor() : velicinaPolja(0) {};

        T pocetak(){
            return elementi[0];
        }
        T kraj() {
            return elementi[velicinaPolja-1];
        }
    T & operator []( const int index ) {
        return elementi [ index ];
    }
    T na (int index ) {
        return elementi [ index ];
    }

    int velicina () {
        return velicinaPolja ;
    }
    void dodajNaKraj ( T vrijednost ) {
        elementi [ velicinaPolja ++] = vrijednost ;
    }
    T skiniSKraja () {
        return elementi [ - - velicinaPolja ];
    }


};


int main() {

      maksimum(2.2,13);

    Vektor <int > v ;
    v . dodajNaKraj (42);
    std :: cout << v . kraj () << std :: endl ;


    return 0;
}

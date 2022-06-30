#include <iostream>
#include <string>
using namespace std;
#include <array>
#include <vector>
#include <bitset>
#include <stdexcept>

class logic_error : public exception {
public:
    explicit logic_error (const string& what_arg);
    explicit logic_error (const char* what_arg);
};

float pretvori(float kune , float tecaj) {
    if (tecaj <= 0 ) {
        throw std::invalid_argument("tecaj ne moze biti nula");
    }
    else if(tecaj > 100 || kune < 1) {
        throw std::logic_error("tecaj ne moze biti veci od 100 a valuta manja od 1");

    }
    return kune/tecaj;

}



int main() {



    try {
        cout << pretvori(350 , 101);

    }
    catch ( const char * msg ) {
        std :: cout << msg << std :: endl ;
    }

    


    return 0;
}
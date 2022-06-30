#include <iostream>
#include <string>
using namespace std;
#include <array>
#include <vector>
#include <bitset>
#include <stdexcept>

class iznimka {
public:
    string opis;
    iznimka ( string s ) : opis ( s ) {}

    string getIznimka() {
        return opis;
    }
};

class LosArgument:public iznimka{
public:

    LosArgument(string s) : iznimka(  s) {};

};

class LogickaIznimka:public iznimka{
public:

    LogickaIznimka(string s) : iznimka(  s) {};

};



int main() {


    LosArgument primjer("iznimka");
    cout << primjer.opis;




    return 0;
}

#include <string>
using namespace std;
class Imenik {
private:
    string ime;
    string prezime;
    int broj;

public:
    Imenik(const Imenik& i);
    Imenik();
    Imenik(string ime , string prezime , int broj) ;
    Imenik(string ime , int broj);
    void ispis();
    int getBroj();
    void setBroj(int broj);

    bool  operator==(const Imenik &i);

    Imenik& operator=(const Imenik &i);

};
#include <string>
#include "Imenik.h"
using namespace std;
#include <iostream>


Imenik::Imenik() {
    ime="";
    prezime="";
    broj=0;
}

Imenik::Imenik(string ime , string prezime , int broj) : ime(ime),prezime(prezime),broj(broj) {};

Imenik::Imenik(string ime, int broj) {
    this->ime=ime;
    this->broj=broj;
}

void Imenik::ispis() {
    cout << ime << " " << prezime << " 0" << broj << endl;
}


int Imenik::getBroj() {
    return broj;
}

void Imenik::setBroj(int Broj) {
    this->broj=Broj;
}

Imenik::Imenik(const Imenik &i) {
    ime=i.ime;
    prezime=i.prezime;
    broj=i.broj;
}

bool Imenik::operator==(const Imenik &i) {
    if (broj == i.broj) {
        return true;
    }
    else {
        return false;
    }
}

Imenik& Imenik::operator=(const Imenik &i) {
    ime=i.ime;
    prezime=i.prezime;
    broj=i.broj;
}

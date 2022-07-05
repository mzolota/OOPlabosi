#include <iostream>
#include <string>
using namespace std;
#include "Imenik.h"

int main() {

Imenik primjer("Marin","Zolota",998525);
Imenik primjer2=primjer;
if (primjer==primjer2) {
    cout << "Jednaki su" << endl;
}

Imenik primjer3;
primjer3=primjer2;


    return 0;
}

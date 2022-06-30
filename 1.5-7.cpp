#include <iostream>
#include <string>
using namespace std;
#include <array>


void  funkcija( int *polje, int n ) {
for ( int i = 0 ; i < n ; i++) {
    cout << polje[i];
    for (int j = i -1 ; j < i  ; j++) {
        cout << ",";
    }
}
cout << endl;


}


void funkcija(float polje[], int n) {
    for (int i = 0; i < n ; i++) {
        cout << polje[i];

        for (int j = i - 1; j < i; j++) {
            cout << ",";
        }
    }
}




int main() {

int n = 5 ;

int polje [5] { 22 , 33 ,55 ,66 ,11  };
float polje2 [5] { 2.2,3.3,4.4,5.5,6.6};


funkcija (polje , n);
funkcija (polje2,n);







    return 0;
}
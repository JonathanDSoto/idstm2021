#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;

int main() {

    int arreglo[10];
    int suma = 0, j=0; 

    for (int i = 0; i < 10; ++i) {
        arreglo[i] = (i+1) * 4;
    }

    while ( j < 10 ){
        cout << "["<< arreglo[j] <<"] ";
        suma += arreglo[j];
        j++;
    }
    cout << endl;
    cout << suma << endl;

    /*arreglo[0] = 1;
    arreglo[1] = 12;
    arreglo[2] = 8;
    arreglo[3] = 14;
    arreglo[4] = 31;
    arreglo[5] = 221;
    arreglo[6] = 196;
    arreglo[7] = 14;
    arreglo[8] = 171;
    arreglo[9] = 741;

    suma = arreglo[0] + arreglo[1] + arreglo[2] + arreglo[3] + arreglo[4] +
            arreglo[5] + arreglo[6] + arreglo[7] + arreglo[8] + arreglo[9];

    cout << suma << endl;*/

    return 0;
}
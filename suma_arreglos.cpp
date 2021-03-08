#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;

int main() {

    int arregloA[10] = {0}, arregloB[10] = {0}, arregloC[10] = {0};

    srand (time(NULL));

    for (int i = 0; i < 10; ++i) {
        arregloA[i] = rand() % 10 + 10;
        arregloB[i] = rand() % 30 + 10;
    }

    for (int i = 0; i < 10; ++i) {
        arregloC[i] = arregloA[i]+arregloB[i];
    }

    for (int i = 0; i < 10; ++i) {
        cout << "["<<arregloA[i]<<"]";
    }
    cout << endl;
    for (int i = 0; i < 10; ++i) {
        cout << "["<<arregloB[i]<<"]";
    }
    cout << endl;
    for (int i = 0; i < 10; ++i) {
        cout << "["<<arregloC[i]<<"]";
    }
    cout << endl;


    return 0;
}
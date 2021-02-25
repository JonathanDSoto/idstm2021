#include <iostream>
using namespace std;

int main() {

    int nUno=0, nDos=1, nTres=0, target = 0;

    cout << "¿Hasta qué número desea llegar?";
    cin >> target;


    cout << "0, 1, ";

    for (int i = 0; i < target-2; ++i) {

        nTres = nUno + nDos;

        cout << nTres<<", ";

        nUno = nDos;
        nDos = nTres;

    }

    return 0;
}
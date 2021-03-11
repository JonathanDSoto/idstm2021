#include <iostream>
using namespace std;

int main() {

    int numeros[10] = {0};
    int tmp = 0;
    double suma=0,resta=0,multi=1,divi=1;

    for (int i = 0; i < 10; ++i){
        cout << "Ingrese el número :" << i+1 << endl;
        cin >> tmp;

        numeros[i] = tmp;
    }

    for (int i = 0; i < 10; ++i) {
        suma += numeros[i];
        resta -= numeros[i];
        multi *= numeros[i];
        divi /= numeros[i];
    }

    cout << "Suma: " << suma << endl;
    cout << "Resta: " << resta << endl;
    cout << "Multiplicacion: " << multi << endl;
    cout << "Division: " << divi << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {

    int numeros[6] = {0};
    int tmp=0, x = 5;

    for(int i=0; i<6; ++i){
        cout << "Ingrese numero"<<endl;
        cin >> numeros[i];
    }

    for(int i=0; i<6; ++i){
        cout << "["<<numeros[i]<<"]";
    }
    cout << endl;

    for(int i=0; i<3; ++i){

        tmp = numeros[i];
        numeros[i] = numeros[x];
        numeros[x] = tmp;
        x--;
    }
    /*
    tmp = numeros[0];
    numeros[0] = numeros[5];
    numeros[5] = tmp;

    tmp = numeros[1];
    numeros[1] = numeros[4];
    numeros[4] = tmp;

    tmp = numeros[2];
    numeros[2] = numeros[3];
    numeros[3] = tmp;*/

    for(int i=0; i<6; ++i){
        cout << "["<<numeros[i]<<"]";
    }
    cout << endl;

    return 0;
}
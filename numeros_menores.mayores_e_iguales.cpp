#include <iostream>
using namespace std;

int main() {

    int cantidad=0, number=0, x=0;
    int cMenor=0, cMayor=0, cIgual=0;

    cout << "¿Cuántas cantidades desea capturar?"<<endl;
    cin >> cantidad;

    while( x < cantidad ){

        cout << "Ingrese la cantidad "<< (x + 1) << endl;
        cin >> number;

        if(number<0){ cMenor++; }
        if(number>0){ cMayor++; }
        if(number==0){ cIgual++; }

        x++;
    }

    cout << "Cantidades menores a 0:"<< cMenor<<endl;
    cout << "Cantidades mayores a 0:"<< cMayor << endl;
    cout << "Cantidades iguales a 0:" << cIgual << endl;

    return 0;
}
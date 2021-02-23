#include <iostream>
using namespace std;

int main() {

    float pasajeros=0,kilometros=0,costo=0,result=0;
    char autobus;

    cout << "¿Qué categoría de Autobús tomarán?"<<endl;
    cin >> autobus;

    cout << "Ingrese por favor el número de pasajeros"<<endl;
    cin >> pasajeros;

    cout << "¿Cuántos kilómetros recorrerá?"<< endl;
    cin >> kilometros;

    if( autobus == 'A' or autobus == 'a' ){
        costo = 2;
    }
    if( autobus == 'B' or autobus == 'b' ){
        costo = 2.50;
    }
    if( autobus == 'C' or autobus == 'c' ){
        costo = 3;
    }

    if(pasajeros<20){
        pasajeros = 20;
    }

    result = ((costo * kilometros) * pasajeros);

    cout << "El costo del viaje y autobús son de: $"<< result << endl;

    return 0;
}
#include <iostream>
#include <math.h>
using namespace std;

int main() {

    int quantity = 0;
    char type;
    float subtotal = 0;

    cout << "¿Cuántas hamburguesas quiere?"<<endl;
    cin >> quantity;

    for (int i = 0; i < quantity; ++i) {

        cout << "Ingrese el tipo de la hamburguesa " << i+1 << ":"<<endl;
        cout << "sencillas (S), dobles (D) y triples (T)"<<endl;

        cin >> type;

        if(type == 's' or type == 'S'){
            subtotal += 20;
        }
        if(type == 'd' or type == 'D'){
            subtotal += 25;
        }
        if(type == 't' or type == 'T'){
            subtotal += 28;
        }
    }

    cout << "El total sin el cargo de la tarjeta es de: $"<<subtotal << ".00"<<endl;
    cout << "El total con el cargo de la tarjeta es de: $"<< subtotal + (subtotal*0.05) << endl;
    return 0;
}
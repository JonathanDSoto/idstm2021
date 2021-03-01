#include <iostream>
#include <math.h>
using namespace std;

int main() {

    int quantity=0, control=0, number = 0;

    cout << "¿Cuántos números desea capturar?"<<endl;
    cin >> quantity;

    while(control < quantity){

        cout << "Ingrese el número a operar:"<<endl;
        cin >> number;

        number = pow(number, 3);

        cout << number << endl;

        control++;
    }

    return 0;
}
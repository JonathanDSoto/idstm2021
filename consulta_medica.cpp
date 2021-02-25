#include <iostream>
using namespace std;

int main() {

    float date_number=0, rate=0, result=0;

    cout << "¿Cuál es el número de su cita?"<<endl;
    cin >> date_number;

    if(date_number <= 3){
        rate = 200;
        result = date_number * 200;
    }
    if(date_number >= 4 && date_number <=5 ){
        rate = 150;

        result = ( 3 * 200 ) + ( (date_number-3) * 150 );
    }
    if(date_number >= 6 && date_number <= 8){
        rate = 100;

        result = ( 3 * 200 ) + ( 2 * 150 ) + ( (date_number-5) * 100 );
    }
    if( date_number >= 9 ){
        rate = 50;

        result = ( 3 * 200 ) + ( 2 * 150 ) + ( 3 * 100 ) + ( (date_number-8) * 50 );
    }

    cout << "El costo de su cita es de: $"<< rate <<".00 MXN"<<endl;
    cout << "El costo de su tratamiento ha sido de: $"<< result <<".00 MXN"<<endl;

    return 0;
}
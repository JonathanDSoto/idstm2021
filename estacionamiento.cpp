#include <iostream>
using namespace std;

const int hrsDsc=4;
int main() {

    float result=0,horas=0,tarifa=0;
    int descuento=0;

    cout << "Ingrese la cantidad de horas"<<endl;
    cin >> horas;

    cout << "Ingrese la tarifa por hora"<<endl;
    cin >> tarifa;

    result = horas * tarifa;

    if( horas > 8 ){

        descuento = ((4 * tarifa) * 0.10);
        result = (result - descuento);

    }


    cout << "El total es de $"<< result << endl;

    return 0;
}
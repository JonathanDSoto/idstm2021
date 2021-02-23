#include <iostream>
using namespace std;

int main() {

    float kw=0, temporada=0, base_cost = 0, aumento=0, descuento=0;

    cout << "¿Cuál es el consumo total de kilowatts?"<<endl;
    cin >> kw;

    cout << "Ingrese por favor el número de temporada"<<endl;

    cout << "1.- Primavera: 1 marzo hasta 31 mayo" << endl;
    cout << "2.- Verano: 1 junio hasta 31 agosto" << endl;
    cout << "3.- Otoño: 1 septiembre hasta 30 noviembre" << endl;
    cout << "4.- Invierno: 1 diciembre hasta 28 febrero" << endl;

    cin >> temporada;

    if(kw<=75){
        base_cost = 0.793 * kw; // el total de los kilowats
    }

    if(kw>75){
        base_cost = (0.793 * 75); // solo los primeros 75
        kw = kw - 75;

        if(kw<=65){
            base_cost = (base_cost + (kw * 0.956)); // los siguientes N <= 65
        }

        if(kw>65){
            base_cost = (base_cost + (65 * 0.956)); // cada uno de los siguientes 65
            kw = kw - 65;

            base_cost = (base_cost + (kw * 2.802)); // el resto de los kw
        }
    }

    cout << "El costo base es de: $"<<base_cost<<endl;

    if(temporada == 2 || temporada == 4 ){
        aumento = (base_cost * 0.25);
        base_cost = base_cost + aumento;

        cout << "El costo con el aumento de temporada es de: $"<<  base_cost << endl;
    }else{
        cout << "No hay aumento por temporada "<<endl;
    }

    descuento = ( base_cost * 0.60 );
    base_cost = base_cost - descuento;

    cout <<"El costo con el apoyo del subsidio es de: $" << base_cost << endl;

    return 0;
}
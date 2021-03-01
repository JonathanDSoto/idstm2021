#include <iostream>
using namespace std;

int main() {

    int articles = 0;
    double price = 0, total=0;

    cout << "Ingrese número de artículos:"<<endl;
    cin >> articles;

    for (int i = 0; i < articles; ++i) {

        cout << "Precio por articulo "<< (i+1) << ":"<<endl;
        cin >> price;

        if(price >= 200){
            cout << "Descuento 15%" << endl;
            price = price - ( price * 0.15 );
        }else{
            if( price >= 100 && price < 200 ){
                cout << "Descuento 12%"<<endl;
                price = price - (price * 0.12);
            }else{
                if(price < 100){
                    cout << "Descuento 10%" << endl;
                    price = price - (price * 0.10);
                }
            }

        }

        total += price;
        cout << "Precio con descuento: $"<< price <<".00"<<endl;

    }

    cout << "Total a pagar: $"<< total << endl;

    return 0;
}
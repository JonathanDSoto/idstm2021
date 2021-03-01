#include <iostream>
using namespace std;

int main() {

    double ahorro=0.03, total = 0;

    for (int i = 0; i < 365; ++i) {
        cout << "Ahorro del día "<< i +1 << ":"<< ahorro << endl;

        total = ahorro;
        ahorro = ahorro + ( ahorro * 3 );
    }

    cout << "total ahorrado en el año: $" << total << endl;

    return 0;
}
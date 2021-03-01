#include <iostream>
#include <math.h>
using namespace std;

int main() {

    double salary=1500;

    for (int i = 0; i < 6; ++i) {
        cout << "El salario del año "<< i+1 <<" es de:"<< endl;
        cout << salary * 12 << endl;

        salary += (salary * 0.10);
    }

    cout << "El salario pasando los 6 años es de: $" << salary << endl;

    return 0;
}
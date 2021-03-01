#include <iostream>
#include <math.h>
using namespace std;

int main() {

    double target = 0, result=1, exp=0, factorial=1;

    cout << "Exponente de la función:"<<endl;
    cin >> target;

    for (int i = 1; i < target+1; ++i) {

        exp = pow(target,i);

        factorial=1;
        for (int j = 1; j < (i)+1; ++j) {
            factorial *= j;
        }

        result += exp / factorial;

    }

    cout << "Resultado de la funcion: " << result << endl;

    return 0;
}
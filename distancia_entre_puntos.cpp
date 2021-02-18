#include <iostream>
#include <math.h>
using namespace std;

int main() {

    float result=0, x1=0, y1=0, x2=0, y2=0;
    float xR =0, yR=0;

    cout << "Ingrese los valores de la coordenada 1:"<<endl;
    cout << "Ingrese el valor de X:"<<endl;
    cin >> x1;

    cout << "Ingrese el valor de Y:"<<endl;
    cin >> y1;

    cout << "Ingrese los valores de la coordenada 2:"<<endl;
    cout << "Ingrese el valor de X:"<<endl;
    cin >> x2;

    cout << "Ingrese el valor de Y:"<<endl;
    cin >> y2;

    xR = (x2 - x1);
    yR = (y2 - y1);

    result = sqrt( ((xR*xR) + (yR*yR)) );

    cout << "El resultado es: "<< result << endl;
    return 0;
}
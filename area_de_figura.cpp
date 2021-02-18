#include <iostream>
using namespace std;

int main() {

    float result=0, ladoA=0,ladoB=0,ladoC=0,ladoD=0, areaRec=0,areaTri=0;

    cout << "Ingrese el valor del lado A:" << endl;
    cin >> ladoA;

    cout << "Ingrese el valor del lado B:" << endl;
    cin >> ladoB;

    cout << "Ingrese el valor del lado C:" << endl;
    cin >> ladoC;

    areaRec = ladoB * ladoC;

    ladoD = ladoA - ladoC;

    areaTri = (ladoD * ladoB) / 2;

    result = areaRec + areaTri;

    cout << "El resultado es: "<< result << endl;

    return 0;
}
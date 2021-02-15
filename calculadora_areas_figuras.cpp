#include <iostream>
using namespace std;
#define PI2 3.1416;
const float PI = 3.1416;
int main() {

   int op=0;
   float num1=0,num2=0,result=0;

   cout << "====MENÚ===="<< endl;
   cout << "1.- Cuadrado" << endl;
   cout << "2.- Rectángulo" << endl;
   cout << "3.- Triangulo " << endl;
   cout << "4.- Círculo" << endl;

   cout << "Selecciona la opción a operar"<< endl;
   cin >> op;

   if( op == 1){ // caudrado
        cout << "Ingrese el valor de un lado"<<endl;
        cin >> num1;

        result = num1 * num1;
   }

   if( op == 2){ // rectangulo
       cout << "Ingrese el valor del primer lado"<<endl;
       cin >> num1;

       cout << "Ingrese el valor del segundo lado"<<endl;
       cin >> num2;

       result = num1 * num2;
   }

   if( op == 3) // triangulo
   {
       cout << "Ingrese el valor de la base: "<<endl;
       cin >> num1;

       cout << "Ingrese el valor de la altura: "<< endl;
       cin >> num2;

       result = (num1 * num2) / 2;
   }

   if( op == 4){ //

       cout << "Ingrese el valor del radio:" << endl;
       cin >> num1;

       result = PI * (num1 * num1);
   }

    cout << "El resultado es: "<< result << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main() {

    string nombres[5] = {" Pablo  "," Juan   "," Andres "," Miguel ","Ignacio "};
    int horas[5][6] = {{5,2,6,7,7,3},
                       {8,8,4,2,3,1},
                       {7,2,6,1,3,5},
                       {3,5,2,8,7,4},
                       {5,1,7,3,3,1}};
    int sueldos[5] = { 23,34,45,21,50};
    int hora = 0, nomina = 0, pos=0, mayorHoras = horas[0][0];

    cout << "[ Nombre ],[L],[M],[M],[J],[V],[S],[$$]" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "[" << nombres[i] << "] " ;
        for (int j = 0; j < 6; ++j) {
            cout << "[" << horas[i][j] << "] ";
        }
        cout << "[" << sueldos[i] << "]";
        cout << endl;
    }

    cout << endl << "---Horas trabajadas---" << endl;
    for(int i=0; i<5; i++){
        cout << "[" << nombres[i] << "]: ";
        for(int j=0; j < 6; j++){
            hora += horas[i][j];
        }
        cout << hora << " horas"<< endl;
        hora = 0;
    }

    cout <<endl <<  "---Sueldo semanal---" << endl;
    for(int i=0; i<5; i++){
        cout << "[" << nombres[i] << "]:" ;
        for(int j=0; j<6; j++){
            hora += horas[i][j];
        }
        cout << "$" << (hora*sueldos[i]) << ".00" << endl;
        nomina += (hora*sueldos[i]);
        hora = 0;
    }

    cout << endl << "---Total a pagar de la empresa---" << endl;
    cout << "Total: $" << nomina << ".00" << endl;

    cout << endl << "---Trabajador mas activo el dia lunes---" << endl;
    for(int i = 0; i<5; i++){
        for(int j=0; j<1; j++){
            if(horas[i][j]>mayorHoras){
                mayorHoras = horas[i][j];
                pos = i;
            }
        }
    }
    cout << "Nombre: " << nombres[pos]<<endl;
    cout << "Horas trabajadas: " << horas[pos][0] <<endl;

    return 0;
}


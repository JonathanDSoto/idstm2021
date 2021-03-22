#include <iostream>
using namespace std;

int horasSemanales(int matriz[5][6], int p){
    int hora = 0;
    for(int j=0; j < 6; j++){
        hora += matriz[p][j];
    }
    return hora;
}

void pintarTablero(string names[5],int hrs[5][6],int salary[5]){
    cout << "[ Nombre ],[L],[M],[M],[J],[V],[S],[$$]" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "[" << names[i] << "] " ;
        for (int j = 0; j < 6; ++j) {
            cout << "[" << hrs[i][j] << "] ";
        }
        cout << "[" << salary[i] << "]";
        cout << endl;
    }
}

int main() {

    string nombres[5] = {" Pablo  "," Juan   "," Andres "," Miguel ","Ignacio "};
    int horas[5][6] = {{5,2,6,7,7,3},
                       {8,8,4,2,3,1},
                       {7,2,6,1,3,5},
                       {3,5,2,8,7,4},
                       {5,1,7,3,3,1}};
    int sueldos[5] = { 23,34,45,21,50};
    int nomina = 0, pos=0, mayorHoras = horas[0][0];

    pintarTablero(nombres,horas,sueldos);

    cout << endl << "---Horas trabajadas---" << endl;
    for(int i=0; i<5; i++){
        cout << "[" << nombres[i] << "]: ";
        cout << horasSemanales(horas, i) << " horas"<< endl;
    }

    cout <<endl <<  "---Sueldo semanal---" << endl;
    for(int i=0; i<5; i++){
        cout << "[" << nombres[i] << "]:" ;
        cout << "$" << (horasSemanales(horas, i)*sueldos[i]) << ".00" << endl;
        nomina += (horasSemanales(horas, i)*sueldos[i]);
    }

    cout << endl << "---Total a pagar de la empresa---" << endl;
    cout << "Total: $" << nomina << ".00" << endl;

    cout << endl << "---Trabajador mas activo el dia lunes---" << endl;
    for(int i = 0; i<5; i++){
        if(horas[i][0]>mayorHoras){
            mayorHoras = horas[i][0];
            pos = i;
        }
    }
    cout << "Nombre: " << nombres[pos]<<endl;
    cout << "Horas trabajadas: " << horas[pos][0] <<endl;

    return 0;
}


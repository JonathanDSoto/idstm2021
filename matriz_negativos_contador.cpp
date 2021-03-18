#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;

int main() {

    srand (time(NULL));
    int matriz[15][12] = {{0,1,2,3,4,5,6,7,8,9,10,11},
                            {1,2,3,4,5,6,7,8,9,10,11,12},
                            {1,2,3,4,5,6,7,8,9,10,11,12},
                            {1,2,3,4,5,6,7,8,9,10,11,12},
                            {1,2,3,4,5,6,7,8,9,10,11,12},
                            {1,2,3,4,5,-6,7,-8,9,10,11,12},
                            {1,2,3,4,5,6,7,8,9,10,11,12},
                            {1,2,3,4,-5,6,7,8,9,10,11,12},
                            {1,2,3,4,5,6,7,8,9,-10,11,12},
                            {1,2,3,4,5,6,7,8,9,10,11,12},
                            {1,2,3,4,5,6,7,8,9,10,11,12},
                            {1,2,3,4,5,6,7,8,9,10,11,12},
                            {1,2,3,4,5,6,7,8,9,10,11,12},
                            {1,2,3,4,5,6,7,8,9,10,11,12},
                            {1,2,3,4,5,6,7,8,9,10,11,12}};
    int menor, suma = 0, negativos=0;

    /*for (int i = 0; i < 15; ++i) {
        for (int j = 0; j < 12; ++j) {
            matriz[i][j] = rand() % 9 - 3;
        }
    }*/
    menor = matriz[0][0];

    for (int i = 0; i < 15; ++i) {
        for (int j = 0; j < 12; ++j) {
            cout << "[" << matriz[i][j] << "]" ;
            if(matriz[i][j] < menor){ menor = matriz[i][j]; }
            if(i>=0 and i<=4){ suma += matriz[i][j]; }
            if(j>=4 and j<=8 and matriz[i][j]<0){ negativos++; }
        }
        cout << endl;
    }

    cout << " Elemento menor: "<< menor << endl;
    cout << "Suma de la 5 primeras filas: " << suma << endl;
    cout << "Total de números negativos entre la columna 5 y 9: "<< negativos << endl;
    return 0;
}
#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;

int main() {

    int arreglo[10] = {0};
    int tmp = 0, x = 0;
    srand (time(NULL));

    for (int i = 0; i < 10; ++i) {
        tmp = rand() % 100 + 1;
        arreglo[i] = tmp;
    }

    tmp = 0;
    while (x < 10){

        cout << "[" << arreglo[x]<<"] ";
        tmp= tmp + arreglo[x];

        x++;
    }
    cout << endl << tmp<<endl;

    return 0;
}
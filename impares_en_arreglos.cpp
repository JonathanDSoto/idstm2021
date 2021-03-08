#include <iostream>
using namespace std;

int main() {
    int x = 49, y = 0;
    int arreglo[50] = {0};

    for (int i = 0; i < 100; ++i) {

        if( (i+1)%2 != 0 ){
            arreglo[y] = (i+1);
            y++;
        }
    }

    while (x >= 0){

        cout << "[" << arreglo[x] << "]";

        x--;
    }

    return 0;
}
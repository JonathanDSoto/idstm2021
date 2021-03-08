#include <iostream>
using namespace std;

int main() {
    int x = 0, y = 0;
    int arreglo[50] = {0};

    while(x < 100){

        if( (x+1)%2==0 ){
            arreglo[y] = (x + 1);
            y++;
        }

        x++;
    }

    for (int i = 0; i < 50; ++i) {
        cout << "[" << arreglo[i] << "]";
    }

    return 0;
}
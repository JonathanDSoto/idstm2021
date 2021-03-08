#include <iostream>
using namespace std;

int main() {

    int primos[27]={0};
    int div=0, y = 0, x = 25;

    for (int i = 0; i < 100; ++i) {

        div=0;
        for (int j = 1; j <= (i+1); ++j) {
            if( (i+1) % j == 0 ){
                div++;
            }
        }

        if(div <= 2){
            primos[y] = (i+1);
            y++;
        }
    }

    while(x >= 0){

        cout << "[" <<  primos[x] << "]";
        x--;
    }

    return 0;
}
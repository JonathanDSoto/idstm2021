#include <iostream>
using namespace std;

int main() {

    char letras[10];
    int vocales = 0;

    for(int i=0; i<10; ++i){
        cout << "Ingrese la letra: "<< i+1 <<endl;
        cin >> letras[i];

        if(letras[i]=='a' or letras[i]=='A'){  vocales++; }
        if(letras[i]=='e' or letras[i]=='E'){  vocales++; }
        if(letras[i]=='i' or letras[i]=='I'){  vocales++; }
        if(letras[i]=='o' or letras[i]=='O'){  vocales++; }
        if(letras[i]=='u' or letras[i]=='U'){  vocales++; }
    }


    cout << letras<<endl;
    cout << "Contiene " << vocales << "vocales" << endl;

    return 0;
}
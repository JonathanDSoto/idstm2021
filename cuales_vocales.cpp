#include <iostream>
using namespace std;

int main() {

    char letras[10];

    for(int i=0; i<10; ++i){
        cout << "Ingrese la letra: "<< i+1 <<endl;
        cin >> letras[i];
    }

    cout << letras<<endl;

    cout << "Vocales: ";
    for(int i=0; i<10; ++i){
        if(letras[i]=='a' or letras[i]=='A'){  cout << letras[i]<<", "; }
        if(letras[i]=='e' or letras[i]=='E'){  cout << letras[i]<<", "; }
        if(letras[i]=='i' or letras[i]=='I'){  cout << letras[i]<<", "; }
        if(letras[i]=='o' or letras[i]=='O'){  cout << letras[i]<<", "; }
        if(letras[i]=='u' or letras[i]=='U'){  cout << letras[i]<<", "; }
    }


    return 0;
}
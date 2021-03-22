#include <iostream>
using namespace std;

void pintarTablero(char cadena[100], char copia[100], int vidas){

    for(int i=0; i<strlen(cadena); i++){
        cout << "[" << copia[i] << "]";
    }
    cout << " - " << "vidas: " << vidas;
    cout << endl;
}

bool compararCadenas(char cadena[100], char copia[100]){

    for(int i=0; i<strlen(cadena); i++){
        if(copia[i]!=cadena[i]){
            return false;
        }
    }
    return true;
}

int main() {

    int vidas = 8;
    bool win = false, loose = false, find = false, same=false;
    char cadenaOriginal[100], cadenaCopia[100], letra;

    cout << "Ingresde la palabra a encontrar"<<endl;
    cin >> cadenaOriginal;

    /*COPIAR LA CADENA*/
    for(int i=0; i < strlen(cadenaOriginal); i++){
        cadenaCopia[i] = '?';
    }

    while(win == false and loose == false){

        /*MOSTRAR CADENA*/
        pintarTablero(cadenaOriginal, cadenaCopia, vidas);

        cin >> letra;

        /*COMPROBAR*/
        find = false;
        for(int i=0; i<strlen(cadenaOriginal); i++){
            if(letra == cadenaOriginal[i]){
                cadenaCopia[i] = letra;
                find = true;
            }
        }
        if(find==false){
            vidas--;
        }

        win = compararCadenas(cadenaOriginal,cadenaCopia);


        if(vidas == 0){
            loose = true;
        }

    }

    cout  << cadenaOriginal << endl;
    if(win){
        cout << "FELICIDADES"<<endl;
    }else{
        cout << "LOSSER" << endl;
    }

    return 0;
}


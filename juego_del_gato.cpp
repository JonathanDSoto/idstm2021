#include <iostream>
using namespace std;

void pintarTablero(char matriz[3][3]){

   cout << "   0    1    2"<<endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if(j==0){ cout << i << " "; }else{ cout << "  "; }
            cout << "[" << matriz[i][j] << "]";
        }
        cout << endl;
    }

}

bool validar(int a,int b, char matriz[3][3]){
    if(a>=0 && a<=2 && b>=0 && b<=2){
        if(matriz[a][b]==' '){
            return true;
        }
    }
    return false;
}

bool comprobar(char tablero[3][3]){
    if(tablero[0][0]==tablero[0][1] && tablero[0][1]==tablero[0][2] && tablero[0][0]!=' '){
        pintarTablero(tablero);
        return false;
    }
    if(tablero[1][0]==tablero[1][1] && tablero[1][1]==tablero[1][2] && tablero[1][0]!=' '){
        pintarTablero(tablero);
        return false;
    }
    if(tablero[2][0]==tablero[2][1] && tablero[2][1]==tablero[2][2] && tablero[2][0]!=' '){
        pintarTablero(tablero);
        return false;
    }

    if(tablero[0][0]==tablero[1][0] && tablero[1][0]==tablero[2][0] && tablero[0][0]!=' '){
        pintarTablero(tablero);
        return false;
    }
    if(tablero[0][1]==tablero[1][1] && tablero[1][1]==tablero[2][1] && tablero[0][1]!=' '){
        pintarTablero(tablero);
        return false;
    }
    if(tablero[0][2]==tablero[1][2] && tablero[1][2]==tablero[2][2] && tablero[0][2]!=' '){
        pintarTablero(tablero);
        return false;
    }
    if(tablero[0][0]==tablero[1][1] && tablero[1][1]==tablero[2][2] && tablero[0][0]!=' '){
        pintarTablero(tablero);
        return false;
    }
    if(tablero[0][2]==tablero[1][1] && tablero[1][1]==tablero[2][0] && tablero[0][2]!=' '){
        pintarTablero(tablero);
        return false;
    }

    return true;
}

int main() {

    bool game = true, turno = true, empate = false;
    char tablero[3][3] = { { ' ',' ',' ' }, { ' ',' ',' ' }, { ' ',' ',' ' } };
    int x=0, y=0, tiros = 0;

    while(game){

        //1.- Pintar tablero
        pintarTablero(tablero);

        //2.- Pedir casilla
        cout << "X: "<<endl;
        cin >> x;

        cout << "Y: "<<endl;
        cin >> y;

        //3.- Validar 1- no ocupado, 2- que sea valida
        if(validar(x,y,tablero)){
            //4.- Dar los turnos
            if(turno == true){
                tablero[x][y] = 'X';
                turno = false;
            }else{
                tablero[x][y] = 'O';
                turno = true;
            }
            tiros++;
        }

        //5.- Verificar si alguien gano o empato
        game = comprobar(tablero);

        if(game && tiros ==9){
            cout << "EMPATE"<<endl;
            game = false;
            empate = true;
            pintarTablero(tablero);
        }

        //6.- Finalizar el juego

    }

    if(empate==false){
        cout << "GANADOR"<<endl;
        if(turno==true){
            cout << "  O"<<endl;
        }else{
            cout << "  X "<<endl;
        }
    }
    return 0;
}
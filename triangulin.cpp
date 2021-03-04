#include <iostream>
using namespace std;

int main() {
    int x =0;

    cout << "Ingrese la altura de la figura"<<endl;
    cin >> x;

    for (int i = 1; i <= x; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "* " ;
        }
        cout << endl;
    }

    for (int i = x-1; i > 0; --i) {
        for (int j = 1; j <= i; ++j) {
            cout << "* " ;
        }
        cout << endl;
    }

    return 0;
}
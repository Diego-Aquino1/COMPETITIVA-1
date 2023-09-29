#include <iostream>
#include <string>
using namespace std;

int main(){
    string entrada;
    int contador = 0;

    cout << "Ingrese: ";
    cin >> entrada;

    if (entrada.length() > 50) {
        cout << "La cadena ingresada es demasiado larga" << endl;
        return 1;
    }

    for (int i = 0; i < entrada.length(); i++) {
        char caracter = entrada[i];

        if (caracter != 'B') {
            if (i == 0 || entrada[i - 1] != 'B') {
                if (i == entrada.length() - 1 || i == entrada.length() - 2 || entrada[i + 1] != 'B') {
                    if ((i == 0 || entrada[i - 1] != 'S') && (i == entrada.length() - 1 || entrada[i + 1] != 'S')) {
                        contador++;
                    }
                }
            }
        }
    }

    cout << "Disponibles: " << contador << endl;

    return 0;
}

#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ifstream archivo("calificaciones.txt");

    if (archivo.is_open()) {
        float nota, suma = 0;
        int contador=0;

        while (archivo >> nota) {
            suma += nota;
            contador++;
        }

        archivo.close();

        if (contador > 0) {
            cout << "Promedio: " << (suma / contador) << endl;
        }
    }

    return 0;
}
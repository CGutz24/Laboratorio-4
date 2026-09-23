#include <iostream>
using namespace std;

int main() {
    int  numero=0;

    cout<<"ingresar numero"<<endl;
    cin >>numero;

    if(numero>=1 && numero<=100) {
        cout <<"Si, esta en el rango 1 a 100." <<endl;
    }

    else if(numero<1) {
        cout <<"Si, esta fuera del rango por debajo de 1"<<endl;
    }

    else {
        cout <<"Fuera de rango" <<numero<<endl;
    }

    return 0;
    


}
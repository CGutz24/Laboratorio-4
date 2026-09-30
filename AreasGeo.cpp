#include <iostream>
using namespace std;

int main() {
    int opcion=0;
    float lado=0 ,radio=0, base=0, altura=0, area=0;


    cout <<"Eliga una opcion: 1.Circulo, 2. Cuadrado, 3. Triangulo. " <<endl;
    cin >>opcion;

    switch(opcion) {
        case 1:
        cout <<"Ingresar radio del circulo "<<endl;
        cin >>radio;
        area= 3.1416*radio*radio;
        cout <<"El area del circulo es: " <<area <<radio;
        break;

        case 2:
        cout <<"Ingresar lado del cuadrado: " <<endl;
        cin >>lado;
        area= lado*lado;
        cout <<"El area del cuadrado es: " <<area <<endl;
        break;

        case 3:
        cout <<"Ingresar base del triangulo: "<<endl;
        cin>>base;

        cout <<"Ingresar altura del triangulo: "<<endl;
        cin >>altura;
        area= (base*altura)/2;
        cout <<"El area del triangulo es: "<<area <<endl;
        break;

        default:
        cout <<"Salir" <<endl;
        break;
    }



    return 0;
}
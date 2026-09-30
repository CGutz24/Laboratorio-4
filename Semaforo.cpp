#include <iostream>
using namespace std;

int main() {

    char R,A,V;
    char opcion;

    cout<<"Ingrese un caracter: R,A,V "<<endl;
    cin>>opcion;

    switch(opcion){
        case 'R':
        cout<<"Alto "<<endl;
        break;

        case 'A':
        cout<<"Precaucion "<<endl;
        break;

        case 'V':
        cout<<"Avance " <<endl;
        break;

        default:
        cout<<"Salir" <<endl;
        break;


    }










    return 0;
}
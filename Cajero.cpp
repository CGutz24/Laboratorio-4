#include <iostream>
using namespace std;

int main() {
    int opcion=0;
    float Cantidad1=0, Cantidad2=0;

    cout <<"1. Retirar dinero "<<endl;
    cout<<"2. Depositar dinero " <<endl;
    cin >>opcion;

    switch(opcion) {
        
        case 1:
        cout <<"Cantidad a retirar: "<<endl;
        cin >>Cantidad1;

        if(Cantidad1>0) {
            cout<<"Retiro completado. "<<Cantidad1 <<endl;
            
        } else {
            cout<<"No se retirar esa cantidad. "<<endl;
        }
        break;

        case 2:
        cout <<"Cantidad a depositar: " <<endl;
        cin >>Cantidad2;
        
        if(Cantidad2>0){
            cout<<"Deposito completado "<<Cantidad2 <<endl;

        }else{
            cout<<"No se puede depositar esa cantidad. "<<endl;
        }
        break;


    }

    return 0;
}
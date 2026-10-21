#include<iostream>
using namespace std;

int main (){
    int i=1,R=0,saldo=1000,m=0, deposito=0, retiro=0;
    
    do{
        cout<<"--Menu--"<<endl;
        cout<<"1. Depositar dinero. "<<endl;
        cout<<"2. Retirar dinero. "<<endl;
        cout<<"3. Salir. "<<endl;
        cin>>m;
        

        switch(m){

            case 1:
            cout<<"Ingrese la cantidad a depositar: "<<endl;
            cin>>deposito;
        
            if(deposito>0){
            cout<<"Deposito exitoso."<<endl;
            }
            else{
            cout<<"Ingrese un deposito valido. "<<deposito<<endl;
            }
            break;

            case 2:
            cout<<"Ingrese la cantidad a retirar: "<<endl;
            cin>>retiro;

            if(retiro>saldo){
            cout<<"No se puede retirar mas de la cantidad disponible en su cuenta. "<<endl;
            }
            else if(retiro<1){
                cout<<"Retiro no puede ser negativo. "<<endl;
            }
            else{
                R=saldo-retiro;
                cout<<"Su retiro se completo con exito, su nuevo saldo es: "<<R<<endl;
            }
            break;

            case 3:
            cout<<"Salir. "<<endl;
            break;
        }
        
    } while (m != 3);
    
    
    return 0;
}
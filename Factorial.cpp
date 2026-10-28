#include<iostream>
using namespace std;

int factorial(int numero){
    int suma=1;
    for(int i=1; i<=numero; i++){
        suma=suma*i;

    }
    return suma;
}

void mostrarFactoriales(int limite){
    
   for(int i=1;i<=limite;i++){
    int numero = factorial(i);
    cout<<"El factorial de "<<i<<"es: "<<numero<<endl;
   }

}


int main(){
    int numero=0;

    cout<<"Ingrese un numero."<<endl;
    cin>>numero;

    
    mostrarFactoriales(numero);

    return 0;
}



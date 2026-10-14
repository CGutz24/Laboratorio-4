# include <iostream>
using namespace std;

int main(){
    int numero=0,contador=0,suma=0;
    cout<<"Ingrese un numero: "<<endl;
    cin>>numero;

    for(int i = 1; i<=numero; i+=2){
        suma+=i;
        contador++;
    }

    cout<<"Cantidad de impares:  "<<contador<<endl;
    cout<<"Suma de los impares: "<<suma<<endl;






    return 0;
}
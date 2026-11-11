#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){
    int numero=0;

    ofstream archivo("numeros.txt");
    if(!archivo.is_open()){
        cout<<"Error no se pudo abrir numeros.txt. "<<endl;
        return 1;
    }

    for(int i=1;i<6;i++){
        cout<<"Ingrese el numero: "<<i<<": "<<endl;
        cin>>numero;
        archivo<<numero<<endl;
    }
    archivo.close();
    cout<<"Se guardaron los numeros. "<<endl;

    ifstream leer("numeros.txt");
    if(!leer.is_open()){
        cout<<"No se pudo abrir el archivo. "<<endl;
        return 1;
    }
    int Suma=0;
    while(leer>>numero){
        Suma+=numero;
    }
    leer.close();

    cout<<"La suma es: "<<Suma<<endl;



    
return 0;
}
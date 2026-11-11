#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){
    string NombreArchivo;

    cout<<"Ingresa el nombre del archivo: "<<endl;
    getline(cin,NombreArchivo);

    ifstream archivo(NombreArchivo);

    if(archivo.is_open()){
        cout<<"Error" <<NombreArchivo<<"No existe. "<<endl;
    }
    string linea;
    int ContadorLineas=0;

    while(getline(archivo, linea)){
        ContadorLineas++;
    }
    archivo.close();

    cout<<"El archivo tiene "<< ContadorLineas <<" lineas."<<endl;

    return 0;
}
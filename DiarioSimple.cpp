#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){
    string frase;

    cout<<"Ingresa una frase: "<<endl;
    getline(cin, frase);

    ofstream archivo("Diario.txt",ios::app);

    if(!archivo.is_open()){
        cout<<"Error no se pudo abrir."<<endl;
        return 1;
    }
    archivo<<frase<<endl;
    archivo.close();
    cout<<"Se guardo la frase. "<<endl;

    ifstream lectura("Diario.txt");

    if(!lectura.is_open()){
        cout<<"Error no se puede leer. "<<endl;
        return 1;
    }
    else{
        cout<<"\nDiario:\n:"<<endl;
        string linea;
        while(getline(lectura,linea)){
            cout<<linea<<endl;
        }
        lectura.close();

    }

    return 0;
}
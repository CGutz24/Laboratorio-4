#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){
    int opcion=0;
    string producto;
    string linea;
    float monto=0;
    ofstream archivo;
    ifstream leer;

    do{
        cout<<"--- Registro de ventas ---"<<endl;
        cout<<"1. Registrar venta. "<<endl;
        cout<<"2. Mostrar ventas. "<<endl;
        cout<<"3. Salir. "<<endl;
        cin>>opcion;

        switch(opcion){

            case 1:
                cin.ignore();
                cout<<"Ingresar el producto: "<<endl;
                getline(cin, producto);

                cout<<"Ingresa el monto: "<<endl;
                cin>>monto;

                archivo.open("ventas.txt", ios::app);

                if(!archivo.is_open()){
                    cout<<"Error: no se pudo abrir el archivo. "<<endl;
                }
                else{
                    archivo<<producto<<" - $"<<monto<<endl;
                    archivo.close();
                    cout<<"Venta guardada. "<<endl;
                }
                break;

            case 2:
                leer.open("ventas.txt");

                if(!leer.is_open()){
                    cout<<"No se han ingresado ventas. "<<endl;
                }
                else{
                    cout<<"--Ventas Registradas--"<<endl;
                    while(getline(leer, linea)){
                        cout<<linea<<endl;
                    }
                    leer.close();
                }
                break;

            case 3:
                cout<<"Saliendo..."<<endl;
                break;

            default:
                cout<<"Error"<<endl;
     
     
            }
    }
    while(opcion!=3);

    return 0;
}
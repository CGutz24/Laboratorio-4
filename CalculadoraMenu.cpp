#include<iostream>
using namespace std;

float sumar(float a,float b){
    return a+b;
}

float restar(float a, float b){
    return a-b;
}

float multiplicar(float a, float b){
    return a*b;
}

float dividir(float a, float b){
    return a/b;    

}

int main(){
    float numero1=0, numero2=0;
    int opcion=0, resultado=0;

    cout<<"  Menu Calculadora  "<<endl;
    cout<<"1. Sumar."<<endl;
    cout<<"2. Restar."<<endl;
    cout<<"3. Multiplicar."<<endl;
    cout<<"4. Dividir."<<endl;
    cout<<"5. Salir"<<endl;
    cin>>opcion;

    switch(opcion){
        case 1:
        cout<<"Ingresa el primer numero:"<<endl;
        cin>>numero1;
        cout<<"Ingresa el segundo numero:"<<endl;
        cin>>numero2;

        resultado=sumar(numero1,numero2);
        cout<<"El resultado de la suma es:"<<resultado<<endl;
        break;

        case 2:
        cout<<"Ingresa el primer numero:"<<endl;
        cin>>numero1;
        cout<<"Ingresa el segundo numero:"<<endl;
        cin>>numero2;

        resultado=restar(numero1,numero2);
        cout<<"El resultado de la resta es:"<<resultado<<endl;
        break;

        case 3:
        cout<<"Ingresa el primer numero:"<<endl;
        cin>>numero1;
        cout<<"Ingresa el segundo numero:"<<endl;
        cin>>numero2;

        resultado=multiplicar(numero1,numero2);
        cout<<"El resultado de la multiplicacion es:"<<resultado<<endl;
        break;

        case 4:
        cout<<"Ingresa el primer numero:"<<endl;
        cin>>numero1;
        cout<<"Ingresa el segundo numero:"<<endl;
        cin>>numero2;

        resultado=dividir(numero1,numero2);
        if(numero2==0){
            cout<<"No se puede dividir entre 0, ingrese un numero valido."<<endl;
        }
        else{
            cout<<"El resultado de la division es:"<<resultado<<endl;
        }
        break;
        

        case 5:
        cout<<"Salir."<<endl;
        break;

        default:
        cout<<"Numero incorrecto.";

    }


    return 0;
}
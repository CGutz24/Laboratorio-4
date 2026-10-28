#include <iostream>
using namespace std;

int mayor(int a, int b, int c){
    if(a>b && a>c){
        return a;
    }
    else if(b>a && b>c){
        return b;
    }
    else if(c>a && c>b){
        return c;
    }
}

int main(){
    int numero1=0, numero2=0, numero3=0,Mayor=0;
    
    cout<<"Ingrese el primer numero"<<endl;
    cin>>numero1;
    
    cout<<"Ingrese el segundo numero."<<endl;
    cin>>numero2;

    cout<<"Ingrese el tercer numero."<<endl;
    cin>>numero3;

    Mayor=mayor(numero1,numero2,numero3);

    cout<<"El numero mas grande es:"<<Mayor<<endl;

    
    return 0;
}
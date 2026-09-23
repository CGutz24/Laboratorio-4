#include <iostream>
using namespace std;

int main(){
    int edad=0;

    cout<<"Ingresar edad de la persona:"<<endl;
    cin >>edad;

    if(edad>=18) {
        cout <<"Eres mayor de edad." <<endl;
    }
    
    else {
        cout <<"Eres menor de edad." <<endl;
    }

    return 0; 

}
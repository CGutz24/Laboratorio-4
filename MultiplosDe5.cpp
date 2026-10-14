#include <iostream> 
using namespace std;


int main(){
    int numero=0;
    cout<<"Ingrese hasta que numero desea mostrar: "<<endl;
    cin>>numero;
    
    
    for(int i = 5; i <= numero; i+=5){
	    cout<<i<<endl;
    }


    return 0;
}
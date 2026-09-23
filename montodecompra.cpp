#include <iostream>
using namespace std;

int main() {
    float compra=0;
    float descuento=0;
    float total=0;

    cout <<"Ingresa el monto de compra"<<endl;
    cin >>compra;

    if(compra>=100 && compra<=200){
        descuento= compra*0.10;
        total= compra-descuento;

        cout<<"Aplica 10% de decuento:"<<total<<endl;
    }

    else if(compra >=200){
        descuento= compra*0.20;
        total= compra-descuento;

        cout <<"Aplica 20% de cuento:" <<total<<endl;
    }

    else{
        cout <<"Sin descuento:"<<compra<<endl;
    }

    return 0;

}
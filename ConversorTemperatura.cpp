#include<iostream>
using namespace std;

float CelsiusaFarenheit(float celsius){
return (celsius * 9 / 5 + 32);

}


int main(){
    float celsius=0, conversion=0;

    cout<<"Ingrese el valor de la temperatura."<<endl;
    cin>>celsius;

    conversion= CelsiusaFarenheit(celsius);
    cout<<"La temperatura en Farenheit es: "<<conversion<<endl;







    return 0;
}
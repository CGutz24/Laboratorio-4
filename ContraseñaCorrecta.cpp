#include<iostream>
using namespace std;


int main(){
int password=1234;
 do
    {
        cout << "Ingrese la Password" << endl;
        cin >> password;
        if (password != 1234)
        {
            cout << "Password incorrecta, vuelva a ingresarla." << endl;
        }

    } while (password != 1234);

    cout << "Password correcta" << endl;

    return 0;



}
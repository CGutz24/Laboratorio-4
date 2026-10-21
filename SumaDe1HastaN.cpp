#include <iostream>
using namespace std;
int main()
{
    int n = 0, suma = 0;
    int i = 1;
    cout << "Ingrese un numero" << endl;
    cin >> n;

    while (i <= n)
    {
        suma += i;
        i++;
    }
    cout << "La suma desde 1 hasta " << n << " es : " << suma << endl;

    return 0;
}
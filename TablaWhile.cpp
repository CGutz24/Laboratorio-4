#include <iostream>
using namespace std;
int main()
{
    int n = 0, r = 0;
    int i = 1;
    cout << "Ingrese un numero" << endl;
    cin >> n;
    while (i <= 10)
    {
        ;
        r = n * i;
        cout << n << "x" << i << "=" << r << endl;
        i++;
    }
    return 0;
}
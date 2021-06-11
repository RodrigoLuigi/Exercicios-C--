#include <iostream>
using namespace std;
int main (){
    int x, i, d1, d2;
    cout << "Usuario informe um numero: ";
    cin >> x;
    cout << "Usuario informe um numero: ";
    cin >> i;
    d1= x/i;
    d2= i/x;
    cout << x << "/" << i << "=" << d1 << "\n";
    cout << i << "/" << x << "=" << d2;
}


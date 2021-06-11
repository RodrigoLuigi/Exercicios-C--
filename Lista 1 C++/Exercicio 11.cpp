//11) Crie um programa que calcule o valor de n! para um n informado pelo usuário.



#include <iostream>
using namespace std;
int main(){
   int n,f=1;
    cout << "Informe um numero: ";
    cin >> n;
    for (int i=1 ; i<=n ; i++){
            f=i*f;
            }
            cout << "\nFatorial de " << n << " e: "<< f;
}


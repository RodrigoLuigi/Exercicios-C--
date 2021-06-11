//9) Crie um programa que receba do usuário um número e imprima na tela se tal número é par ou se impar.


#include <iostream>
using namespace std;
int main(){
  int n;
   while(1){
    cout << "\nDigite um numero: ";
    cin >> n;
    if (n%2==0){
        cout << "O numero e par.";
    }
    else{
        cout << "O numero e impar.";
    }
    }
}

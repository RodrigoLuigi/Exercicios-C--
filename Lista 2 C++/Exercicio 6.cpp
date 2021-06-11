//6) Crie um programa onde o usuário informa um número e o programa imprime
//na tela se o número é maior que 10, igual a 10 ou menor que 10.

#include <iostream>
using namespace std;
int main(){
    while (1){
    int n;
    cout << " \nDigite um numero:";
    cin >>n;
    if (n>10){
        cout << n<< " -- Maior que 10.";
    }
    else if(n==10){
        cout << n <<" -- Igual a 10.";
    }
    else if(n<10){
        cout << n <<" -- Menor que 10.";
    }
    }
}

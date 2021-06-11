//12) Escreva um programa que receba como entrada um ano (número inteiro) e retorne se ele é bissexto ou não.
//Um ano bissexto é aquele que é divisível por 4, mas não por 100. Um ano também é bissexto ser for divisível por 400. Exemplos: 1000 não é bissexto e 800 é bissexto.


#include <iostream>
using namespace std;
int main(){
    while(1){
    int ano;
    cout << "\nDigite o ano: ";
    cin >> ano;
    if (ano % 4 == 0 && (ano % 400 == 0 || ano % 100 != 0)) {
            cout << "Ano bissexto!";
    }
    else{
        cout <<"Ano nao bissexto!";
    }
    }
}

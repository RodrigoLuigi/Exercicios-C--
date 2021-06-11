//Crie um programa que imprima a média aritmética entre 4 números informados pelo usuário.

#include <iostream>
using namespace std;
int main (){
    float n,soma=0;
    for (int i=1; i<=4 ;i++){
    cout << "\nInforme um numero: ";
    cin >>n;
    soma=soma+n;
    }
    cout <<"Soma:" << soma ;
    cout <<"\nA media e: " << soma/4;
}

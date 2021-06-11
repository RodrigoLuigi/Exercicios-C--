/*2) Crie um programa que lê do usuário um número inteiro e imprimir na tela o sucessor e o antecessor des/te número*/



#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Digite um numero: ";
    cin >> n;
    cout <<"O antecessor de "<< n << " e : " << n-1 << " \nO sucessor e: " << n+1;
}

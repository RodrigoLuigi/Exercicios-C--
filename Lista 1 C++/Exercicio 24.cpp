/*24) Crie um programa que receba 10 número inteiros e retorne o maior entre eles.*/


#include <iostream>
using namespace std;
int main (){
    int n,maior;
    cout << "Informe um numero: ";
    cin >>n;
    maior=n;
        for (int i=1 ; i<10 ; i++){
            cout << "\nInforme um numero: ";
            cin >> n;
                if (n > maior){
                maior=n;
                }
                else if (i==9){
            cout << "\nO maior numero e: "<< maior;
                }
        }
}






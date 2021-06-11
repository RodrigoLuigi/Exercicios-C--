/*2) Crie um programa com um vetor de inteiros com 15 posições.
Tal vetor deve ser preenchido por números fornecidos pelo usuário.
Ao final, imprima todos os números que são divisíveis por 3 e estão dentro do vetor.*/




#include <iostream>
using namespace std;
int main(){
int t[15];
    for(int i=0 ; i<15 ; i++){
        cout << "Digite um numero inteiro: ";
        cin >> t[i];
    }
    cout << "\n";
        for (int i=0 ; i<15 ; i++){
            if (t[i]%3==0){
                cout << " |" <<t[i] << " ";
            }
        }
}


/*5) Crie um programa onde o usuário forneça os quinze valores inteiros de um vetor,
logo após tal programa deve pedir um número ao usuário e multiplicar todos os valores deste vetor pelo
número fornecido pelo usuário.  Ao final, o vetor deve ser exibido na tela.*/



#include <iostream>
using namespace std;
int main(){
    int v[15],x;
        for(int i=0 ; i<15 ; i++){
            cout << "Digite um numero inteiro: ";
            cin >> v[i];
        }
        cout << "Digite um numero para multiplicar.";
        cin >> x;
        for(int i=0 ; i<15 ; i++){
            v[i]=v[i]*x;
            cout << v[i] << " ";
        }
}


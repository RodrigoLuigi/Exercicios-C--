/*9) Crie um programa com dois vetores, um de 15 e outro de 3 posições. O primeiro deve ser preenchido no momento de sua criação,
o segundo deve receber valores do usuário. Tal programa deve verificar se o segundo vetor está contido dentro do primeiro.
Ex:
 Primeiro vetor: 3  4  3  5  3  6  3  2  5  7  8  2  1  5
 Segundo vetor: 2  5  7

O segundo vetor está contido dentro do primeiro a partir da posição de índice 7*/



#include <iostream>
using namespace std;
int main(){
    int v[]{2,3,8,5,5,3,2,1,1,4,3,7,2,1,3},t[3];
    for(int i=0 ; i<3 ; i++){
    cout << "\nDigite um numero: ";
    cin >> t[i]
    }
    for (int u=0 ; u < 15 ; u++){
        for(int i=0 ; i<3 ; i++){
            if (t[i]!=v[u]){

            }
        }
    }
    cout << "\nPrimeiro Vetor: " << v[i];
    cout <<"\nSegunto Vetor: " << t[i];
    cout << "O segun"


/*7) Faça um programa que possui um vetor (10 posições) e que seus valores são passados para ele no momento de sua criação.
 Tal programa deve pedir para que o usuário tente adivinha um dos números que estão no vetor e
 imprimir uma mensagem de êxito ou fracasso.
O usuário deve ter somente 5 chances para acertar.*/




#include <iostream>
using namespace std;
int main(){
    int mat[]={8,6,10,2,5,3,9,7,4,1};
    int num , aux=0;
        cout << "Adivinhe um numero: ";
        cin >> num;
            for (int i=0 ; i<5 ; i++){
                if (mat[i]==num){
                cout << "Acertou !";
                aux = 1;
                break;
                }
            }
            if(aux == 0){
                cout << "Voce errou.!";
            }
}

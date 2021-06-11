/*30) Entrar com números positivos e imprimir a média dos números digitados.
O usuário deve informar um número negativo para informar o final da sequência dos números.*/





#include <iostream>
using namespace std;
int main(){
    float media;
    int n,s=0,c=0;
   while (1){
        cout << "Digite um numero: ";
        cin >> n;
        s=s+n;
        c=c+1;
    if (n<=0){
        c--;
        media=s/c;
        break;
    }
    }
    cout <<"A media dos numeros digitado e: " << media ;
}

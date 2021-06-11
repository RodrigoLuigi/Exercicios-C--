/*29) Entrar com números enquanto forem positivos e imprimir quantos números foram digitados.*/


#include <iostream>
using namespace std;
int main(){
    int n,c=0;
   while(1){
    cout <<"\nDigite um numero: ";
    cin >> n;
    if(n>=0){
        c++;
    }
       if (n<=0){
            --c;
            break;
       }
   }
   cout << "Foram digitados : "<< c << " numeros.";
}







/*32) Ler vários números e informar quantos números entre 100 e 200 foram digitados.
Terminar o programa quando o valor 0 for lido.*/



#include <iostream>
using namespace std;
int main(){
    int n,c=0;
    while(1){
          cout << "Digite um numero: ";
          cin >> n;
      if(n>100 && n<200){
          c++;
      }
      if (n==0){
        break;
      }
    }
    cout << "Foram digitados "<< c << " numeros entre 100 e 200.";
}







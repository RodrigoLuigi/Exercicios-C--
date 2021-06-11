/*22) Entrar com um número e imprimir todos os seus divisores*/


#include <iostream>
using namespace std;
int main(){
    int n,c,i,resultado;
        cout << " Digite um numero: ";
        cin >> n;
        cout << "Os Numeros diviziveis por "<< n <<" sao:\n";
        c=0;
        for (i=1; i<=n ; i++){
            c=c+1;
            resultado= n % c;
          if (resultado==0){
            cout <<"\n " << c;
        }
        }
}


/*34) Entrar com vários números inteiros, um de cada vez,
e imprimir se cada número é primo ou não. O algoritmo acaba quando se digita 0.*/





#include <iostream>
using namespace std;
int main(){
        int n,c;
        n=1;
        c=0;
        while (n!=0){
        cout << "\nDigite um numero: ";
        cin >> n;
        for (int i=2 ; i<=n/2 ; i++){
              if (n%i==0){
                    c++;
        }
        }
        if(c==0){
            cout <<"\n"<< n << " e primo.";
        }
        else if (c!=0){
            cout <<"\n"<< n << " nao e primo. ";
        }
        c=0;
        }
}









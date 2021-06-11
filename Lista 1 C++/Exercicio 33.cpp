/*33) Entrar com vários números inteiros e imprimir o maior entre eles. O algoritmo acaba quando se digita –999.*/





#include <iostream>
using namespace std;
int main(){
    int n,c;
    c=0;
    while(1){
    cout << "Digite um numero: ";
    cin >> n;
    if(n>c){
        c=n;
    }
    if(n==-999){
            break;
    }
    }
    cout << "O maior numero e: "<< c;
}



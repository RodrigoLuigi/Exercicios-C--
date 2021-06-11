/*25) Faça um algoritmo que imprima os números pares no intervalo de 1 a 600.
A verificação se o numero é par ou não deverá ser feita através de uma função.
A impressão do numero deverá ser feita pelo programa principal.*/





#include <iostream>
using namespace std;
int pares(int i){
    int num;
    if (i%2==0){
        num=i;
        return num;
    }
}
int main(){
    int i,op;
    for (i=1 ; i<=600 ; i++){
        op=pares(i);
        cout << op << "\n";
    }
}






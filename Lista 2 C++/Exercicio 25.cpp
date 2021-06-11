/*25) Criar um algoritmo que imprima os 10 primeiros termos da série de Fibonacci.*/



#include <iostream>
using namespace std;
int main(){
    int x,y,r;
    x=0;
    y=1;
    cout << x << " + " << y << " = 1";
    for(int i=1 ; i<=9 ; i++){
        r=x+y;
        cout <<"\n"<< y << " + " << r << " = " << r;
        x=y;
        y=r;
    }
}



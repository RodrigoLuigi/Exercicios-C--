/*18) Faça um algoritmo que entre com 3 números, passa tais números como parâmetro de uma função,
recebe o maior deles como retorno e exibe na tela tal número.*/



#include <iostream>
using namespace std;
int maior(int x, int y, int z){
        if((x>=y)&&(x>=z)){
            return x;
        }
        else if((y>=x)&&(y>=z)){
            return y;
        }
        else{
            return z;
        }
}
int main(){
    int a,b,c,m;
    cout << "Digite 3 numeros: ";
    cin >> a >> b >> c ;
    m=maior(a,b,c);
    cout << "\nO maior e : "<< m << "\n";
}

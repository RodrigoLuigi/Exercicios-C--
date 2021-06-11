/*19) Dados um inteiro x e um inteiro não-negativo n, calcular xn.*/




#include <iostream>
using namespace std;
int main(){
    int x,n,p,s,c;
    cout <<"-Digite um numero : ";
    cin >> n;
    cout << "-Digite um expoente positivo: ";
    cin >> p;
    c=p;
    x=n;
        while (p>1){
            x=x*n;
            p--;

        if(p==1){
            cout<<n << " elevado a " << c << " = "<<x;
        }
        }
}









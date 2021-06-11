/*26) A série de RICCI difere da série de FIBONACCI  porque os dois primeiros termos da série
são fornecidos pelo usuário. Os demais termos são gerados da mesma forma que a série de Fibonacci.
Criar um algoritmo que pede para que o usuário digite os dois primeiros termos e
depois a quantidade de termos que ele deseja imprimir da série de RICCI.*/




#include <iostream>
using namespace std;
int main(){
   int x,y,r,n;
    cout << "Digite um numero: ";
    cin >> x;
    cout << "Digite um numero: ";
    cin >> y;
    cout << "Digite a quantidade de termos: ";
    cin >> n;
   cout << "x + y = 5" << "\nx + y = 10";
    cout << "\n" << x << " + " << y << " = " << 15;
    for(int i=2 ; i<=n ; i++){
        r=x+y;
        cout <<"\n"<< y << " + " << r << " = " << r;
        x=y;
        y=r;
    }
}

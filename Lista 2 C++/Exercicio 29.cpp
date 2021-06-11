/*28) Entrar com números e imprimir o triplo de cada número digitado. O algoritmo acaba quando entrar o numero –999.*/





#include <iostream>
using namespace std;
int main(){
    int i,n;
        while(1){
                cout <<"\ndigite um numero: ";
                cin >> n;
                i=3*n;
                cout << i;
            if(n>=999){
                break;
            }
        }
}

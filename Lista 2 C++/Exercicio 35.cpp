/*35) Escreva um programa peça para o usuário um número e que imprima na tela a seguinte seqüência de "*"
utilizando a instrução for. No exemplo abaixo, o usuário informou o número 6, ou seja, a última linha contém 6 "*".*/


#include <iostream>
using namespace std;
int main(){
    int n,i,y;
    cout << "Iforme um numero: ";
    cin >> n;
    for (i=1 ; i<=n ; i++){
        for (y=1 ; y<=i ; y++){
            cout << "*";
    }
    cout << "\n";
    }
}

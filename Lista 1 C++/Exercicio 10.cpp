//10) Modifique o programa anterior de forma que o usuário insira 5 números e para
//cada um o programa imprima na tela se ele é par ou se é impar. Use o comando for.


#include <iostream>
using namespace std;
int main(){
    int n;
    for (int i=1 ; i<=5 ; i++){
    cout << "\nDigite um numero: ";
    cin >> n;
    if (n%2==0){
        cout << "O numero e par.";
    }
    else{
        cout << "O numero e impar.";
    }
    }
}

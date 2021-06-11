//Fazer um programa no qual o usuário entra com o saldo de uma aplicação e o juros
//e o programa imprima o novo saldo. Considere que os juros são informados no formato 10%

#include <iostream>
using namespace std;
int main(){
    int s,y;
    float j,x;
    cout << "Digite o Saldo: " ;
    cin >>s;
    cout <<" Digite o Juros; ";
    cin >> j;
    y=s*j;
    x=s+y;
    cout <<"Novo saldo: " << x;
}

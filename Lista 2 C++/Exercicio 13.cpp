//13) A prefeitura de Cafundodojudas abriu uma linha de credito para os funcionários estatutários.
//O valor máximo da prestação não poderá ultrapassar 30% do salário bruto.
//Fazer um algoritmo onde o usuário informa seu salário bruto e o valor da prestação e o programa exibe na tela
//se o empréstimo pode ou não ser concedido.

#include <iostream>
using namespace std;
int main(){
   float s,p,j;
    cout << "LINHA DE CREDITO CAFUNDODOJUDAS\n";
    cout << "\nInforme seu salario: ";
    cin >> s;
    cout << "Valor da prestacao: ";
    cin >> p;
    j=0.3*s;
    if (p<=j){
        cout << "O EMPRESTIMO FOI EFETIVADO. ";
    }
    else if (p>j){
        cout << "O EMPRESTIMO NAO FOI EFETIVADO";
    }
}


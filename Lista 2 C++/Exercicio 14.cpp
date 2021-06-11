/*14) Faça um programa que receba do usuário dois números reais (a e b). Após isso, o programa deve exibir na tela o seguinte menu:

	Digite 1 para somar.
	Digite 2 para subtrair.
	Digite 3 para multiplicar.
	Digite 4 para dividir.
	Digite 5 para sair.
De acordo com a opção do usuário, o programa vai imprimir na tela o resultado de a+b, a-b, a*b ou a/b.

Importante: após a exibição do resultado, somente o menu deverá aparecer novamente. A entrada de a e b ocorre uma única vez, no início do programa.*/


#include <iostream>
using namespace std;
int main(){
    float a,b,op;
    cout << "Digite um numero: ";
    cin >> a;
    cout << "Digite um numero: ";
    cin >> b;
    while(1){
    cout << "\nDigite 1 para subtrair. \nDigite 2 para subtrair. \nDigite 3 para multiplicar. \nDigite 4 para dividir. \nDigite 5 para sair.\n--> ";
    cin >>op;
    if (op==1){
        cout << a+b;
    }
    else if (op==2){
        cout << a-b;
    }
    else if (op==3){
        cout << a*b;
    }
    else if (op==4){
        cout << a/b;
    }
    else if (op==5){
        break;
    }
    else{
        cout <<" Opcao invalida";
    }
}
}

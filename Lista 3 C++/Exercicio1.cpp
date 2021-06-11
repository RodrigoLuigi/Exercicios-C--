/*1) Crie um programa que  recebe do usuário uma string. Ao final,imprima todos os caracteres da string na ordem inversa.
 Exemplo: se o usuário inserir "ufsj" deve ser impresso "jsfu".*/


 #include <iostream>
 using namespace std;
 int main(){
    string t;
    cout << "Digite um nome:";
    cin >> t;
    for (int i=t.size() ; i>=0 ; i--){
        cout <<t[i];
    }
 }



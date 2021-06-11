/*13) Crie um programa que receba do usuário um endereço de e-mail e verifique ser ele é válido ou não.
Para ser válido ele deve ter pelo menos um caractere @ e um ponto (.).*/



#include <iostream>
using namespace std;
int main(){
   char c=@
    string mail;
    cout << "Digite seu e-mail: ";
    cin >> mail;
    for(int i=0 ; i<mail.size() ; i++){
        if(mail[i]== @ ){
                break;
        }
    }
        cout << "Email valido";
    else{
        cout << "Email invalido";
    }
}

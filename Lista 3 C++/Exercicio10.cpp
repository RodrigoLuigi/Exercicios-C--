/*10) Crie um programa que armazena os nomes e as notas de 20 alunos de uma determinada turma em dois vetores,
 um de string e outro de float, respectivamente. Faça o usuário preencher esses vetores.
  Ao final imprima ordenadamente os nomes e as notas de todos os alunos.
Exiba também, os nomes e as notas dos alunos que tiram a menor e a maior nota.*/




#include <iostream>
using namespace std;
int main(){
    int t=20;
    float notas[t];
    string nomes[t];
    for(int i=0 ; i<t ; i++){
        cout << "\nNome: ";
        getline(cin , nomes[i]);
        cout << "\nNotas: ";
        cin >> notas[i];
    }
   for(int i=0 ; i<t ; i++){
    cout <<"\n"<< nomes[i] << notas[i];
   }
}

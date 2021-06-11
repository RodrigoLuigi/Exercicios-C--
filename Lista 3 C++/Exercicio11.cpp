/*11) Faça um programa para armazenar 10 nomes em um vetor e imprimir uma listagem numerada contendo os nomes em ordem alfabética.*/




#include <iostream>
using namespace std;
int main(){
    int t=10;
    string nome[t],aux;
    for(int i=0 ; i<t ; i++){
        cout << "Digite um nome: ";
        getline(cin,nome[i]);
    }
    for(int i=0 ; i<t-1 ; i++){
        for(int u=i+1 ; u<t ; u++){
            if(nome[i]>nome[u]){
                    aux=nome[i];
                    nome[i]=nome[u];
                    nome[u]=aux;

            }
        }
    }
    for(int i=0 ; i<t ; i++){
    cout << "\n"<< i <<" - "<< nome[i];
    }
}


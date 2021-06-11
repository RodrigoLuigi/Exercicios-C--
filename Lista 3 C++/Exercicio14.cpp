/*14) Crie um programa onde o usuário digita o nome completo de todos os convidados de uma festa e o
 programa exibe tal lista em ordem alfabética.*/



 #include <iostream>
 using namespace std;
 int main(){
     int t=5;
     string nome[t];
    for(int i=0 ; i<t ; i++){
     cout << "Digite o nome completo do convidado: ";
     getline(cin,nome[i]);
    }
    for(int i=0 ; i<t-1 ; i++){
        for(int u=i+1 ; u<t ; u++){
            if(nome[i]>nome[u]){
            string aux;
            aux=nome[i];
            nome[i]=nome[u];
            nome[u]= aux;
            }
        }
    }
    for(int i=0 ; i<t ; i++){
    cout <<"\n"<< nome[i] ;
    }
 }




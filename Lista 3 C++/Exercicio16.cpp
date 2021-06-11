/*16) Criar um algoritmo que leia os elementos de uma matriz inteira 4 x 4 e escreva todos os elementos,
 exceto os elementos da diagonal principal.*/




 #include <iostream>
 using namespace std;
 int main(){
     int mat[4][4];
     for(int i=0 ; i<4 ; i++){
            for(int u=0 ; u<4 ; u++){
     cout <<"\nDigite um numero: ";
     cin >> mat[i][u];
            }
     }
     for(int i=0 ; i<4 ; i++){
            for(int u=0 ; u<4 ; u++){
     if(i==u){
        mat[i][u]= 0;
     }
     cout << mat[i][u] << " ";
            }
            cout << "\n";
     }
 }



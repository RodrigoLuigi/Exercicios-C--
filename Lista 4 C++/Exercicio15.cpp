/*15) Criar um algoritmo que leia os elementos de uma matriz inteira 4 x 4.
Tal programa deve primeiramente escrever somente os elementos acima da diagonal principal.
Após isso ele deve exibir os números que estão abaixo da diagonal princial.*/



#include <iostream>
using namespace std;
int main(){
    int mat[4][4],enter;
        for(int i=0 ; i<4 ; i++){
            for(int u=0 ; u<4 ; u++){
                cout <<"\nDigite um numero: ";
                cin >> mat[i][u];
            }
        }
        for(int i=0 ; i<4 ; i++){
            for(int u=0 ; u<4 ; u++){
        cout << mat[i][u] << " ";
            }
            cout << "\n";
        }
        cout << mat[0][1] << " " << mat[0][2] << " " << mat[0][3] << "\n" << " " << " " << mat[1][2] << " " << mat[1][3];
        cout <<"\nEnter para mostrar numeros abaixo da diagonal principal";
        cin >>enter;
        cout << mat[2][0] << " " << mat[2][1] << "\n" << mat[3][0] << " " << mat[3][1] << " " << mat[3][2];
}

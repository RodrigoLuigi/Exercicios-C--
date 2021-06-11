/*17) Criar um programa onde o usuário insere os elementos de duas matrizes 3 x 3 e exiba a soma dessas matrizes. Exemplo:
1  2  3		7  4  1                          8    6   4
4  5  6	    +	8  5  2          =              12  10  8
7  8  9		9  6  3                          16  14  12*/



#include <iostream>
using namespace std;
int main(){
    int mat1[3][3],mat2[3][3];
    cout << "    Matriz 1";
    for(int i=0 ; i<3 ; i++){
            for(int u=0 ; u<3 ; u++){
                cout << "\nDigite um numero: ";
                cin >> mat1[i][u];
            }
    }
    cout << "   Matriz 2";
    for(int i=0 ; i<3 ; i++){
        for(int u=0 ; u<3 ; u++){
            cout << "\nDigite um numero: ";
            cin >> mat2[i][u];
        }
    }
    for(int i=0 ; i<3 ; i++){
            for(int u=0 ; u<3 ; u++){
                cout << mat1[i][u]+mat2[i][u] << " ";
            }
            cout << "\n";
    }
}



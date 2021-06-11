/*19) Faça um algoritmo que leia dois números inteiros e calcule através de funções distintas:
•	A soma entre eles.
•	A subtração entre eles.
•	A multiplicação entre eles.
•	O modulo entre eles.
A impressão dos resultados deverá ser feita pelo programa principal, os cálculos nas funções.*/



#include <iostream>
using namespace std;
int calcsoma(int a , int b){
    int calcsoma=a+b;
    return calcsoma;
}
int calcsub(int a , int b){
    int calcsub;
    calcsub=a-b;
    return calcsub;
}
int calcmult(int a , int b){
    int calcmult;
    calcmult=a*b;
    return calcmult;
}
int main(){
    int a,b,soma,subtrai,multiplica;
    cout << "Digite 2 numeros inteiros: ";
    cin >> a >> b ;
    soma=calcsoma(a,b);
    subtrai=calcsub(a,b);
    multiplica=calcmult(a,b);
    cout <<"\nSoma = "<< soma << "\nSubtracao = " << subtrai << "\nMultiplicacao = " << multiplica ;
}




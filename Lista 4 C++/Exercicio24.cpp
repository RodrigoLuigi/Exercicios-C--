/*24) Faça um algoritmo que imprima o quadrado dos números de 1 até 20.
 O calculo do quadrado de cada numero deverá ser feito através de uma função e a impressão do resultado
 deverá ser feita pelo programa principal. Ou seja, a função deve receber um número e retornar o quadrado dele.*/


 #include <iostream>
 using namespace std;
 int quadrado(int i){
    int quad;
    quad=i*i;
    return quad;
}
int main(){
    int i,op;
    for(i=1 ; i<=20 ; i++){
        op=quadrado(i);
        cout << op << " ";
    }
}

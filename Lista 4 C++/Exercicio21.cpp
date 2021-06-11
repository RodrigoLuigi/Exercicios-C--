
/*21) Faça um algoritmo que leia uma temperatura em graus centígrados e apresente-a convertida em graus Fahrenheit.
 A conversão deverá ser feita através de uma função. A impressão dos resultados deverá ser feita pelo programa principal. */



 #include <iostream>
 using namespace std;
 float fahr(float c){
    float fahr;
    fahr=(c*1.8)+32;
    return fahr;
}
 int main(){
     float c,f;
     cout << "Informe a temperatura em graus celsius: ";
     cin >> c;
     f=fahr(c);
     cout << "O valor convertido de graus celsius para fahrenheit e de : "<< f;
 }

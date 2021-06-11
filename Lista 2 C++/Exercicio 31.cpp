/*31) Chico tem 1,50m e cresce 1 cm por ano, enquanto Juca tem 1,10m e cresce 4 cm por ano.
Construir um algoritmo que calcule e imprima quantos anos serão necessários para que Juca seja maior que Chico.
Mostre também as alturas de Juca e Chico quando isso acontecer.*/




#include <iostream>
using namespace std;
int main(){
    float a=0,c=1.5,j=1.10;
    while (j<c){
        j=j+0.04;
        c=c+0.01;
        a++;
        if(j>c){
            cout << "Levara " << a << " anos para que juca seja maior que Chico. ";
            cout << "\n Juca tera " << j << " m" << " quando isso acontecer. " << "\n E Chico tera " << c << " m";
        }
    }
}

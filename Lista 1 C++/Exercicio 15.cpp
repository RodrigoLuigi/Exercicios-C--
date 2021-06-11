/*15) Em um cercado, há vários patos e coelhos. Escreva um programa que solicite ao usuário o total de cabeças
e o total de pés e exiba na tela quantos patos e quantos coelhos encontram-se nesse cercado.*/


#include <iostream>
using namespace std;
int main(){
    int pato,pa=2,coelho,co=4,p,c;
    cout << "Total de cabecas: ";
    cin >> c;
    cout << "Total de pes: ";
    cin >> p;
    coelho=p/2-2*c/2;
    pato=c-coelho;
    cout << "Numero de patos: " << pato << "\nNumero de coelhos: "<< coelho;
}


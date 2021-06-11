/*16)  Crie um programa que imprima um caractere por linha e na frente de cada um imprima o código
ASC correspondente. Considere somente os caracteres que sejam letras ou números. Observação:
os algarismos estão no intervalor 48 a 57 (inclusive), as letras maiúsculas estão no intervalo 65 a 90 (inclusive)
e as letras minúsculas estão no intervalor 97 a 122 (inclusive)*/


#include <iostream>
using namespace std;
int main(){
    int x,y,z;
    for (x = 48 ; x <= 57 ; x++){
        char a = x;
        cout << a << " = " << x << "\n";
    }
    for (y = 65 ; y <= 90 ; y++){
        char b = y;
        cout << b << " = " << y << "\n";
    }
    for (z = 97 ; z <= 122 ; z++){
        char c = z;
        cout << c << " = " << z << "\n";
    }
}

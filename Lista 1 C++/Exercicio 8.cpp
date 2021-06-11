//8) Crie um programa onde o usuário entra com a base e a altura de um retângulo e o programa imprime o perímetro e sua área.
//Sabe-se que perímetro = 2*(base + altura)  e a area = base *altura.


#include <iostream>
using namespace std;
int main(){
    int b,a;
    float p,r;
    cout << "Digite a base: ";
    cin >> b;
    cout << "Digite a altura: ";
    cin >> a;
    p=2*b+2*a;
    r=b*a;
    cout <<"O perimetro do retangulo e:" << p << "\nE sua area e:" << r;
}

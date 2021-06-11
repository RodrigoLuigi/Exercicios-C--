/*20)Criar um algoritmo que imprima a soma dos números pares em um intervalo fornecido pelo usuário.*/



/*#include <iostream>
using namespace std;
int main(){
    int i,b=2,x=0,soma,c=0;
    cout << "Digite o intervalo: ";
    cin >> i;
    while (c<=i){
        if (c%2==0){
            x=x+c;
            c=c+2;
                }
                else if (c%2!=0){
                c=c+1;
                }
                if(c>=i)
                    cout << x;

    }
}
*/


#include <iostream>
using namespace std;
int main(){
    int n,c=0,x=0;
    cout << "Digite o intervalo; ";
    cin >> n;
    while (c<=n){
        if (c%2==0){
            x=x+c;
            c=c+2;
        }
        if (c>=n){
    cout << x;
    }
}
}





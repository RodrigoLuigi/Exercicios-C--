#include <iostream>
using namespace std;
int main(){
    int a,b,c,x;
    cout <<" digite um numero: ";
    cin >> a;
    cout <<" digite um numero: ";
    cin >> b;
    cout <<" digite um numero: ";
    cin >> c;
    for (int i=1 ; i<=5 ; i++){
        cout << "Digite um numero: ";
        cin >> x;
        if (x==a || x==b || x==c){
            cout << "voce acertou ";
            break;
        }

    }
}



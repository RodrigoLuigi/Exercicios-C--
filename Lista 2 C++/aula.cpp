#include <iostream>
using namespace std;
int main(){
    float n,c;
    c=0;
    for (int i=1 ; i<=3 ; i++){
    cout << "Digite um numero decimal: ";
    cin >> n;
    if(n>c){
        c=n;
    }
    }
    cout << "O maior numero e: "<< c;
}


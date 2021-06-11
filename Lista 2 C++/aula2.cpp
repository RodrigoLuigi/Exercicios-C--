#include <iostream>
using namespace std;
int main(){
    int li,ls,n,x;
    cout << "Entre com um numero: " ;
    cin >> n;
    cout << "Entre com o limite inferior: ";
    cin >> li;
    cout << "Entre com o limite superior: ";
    cin >> ls;
    for (x=li ; x<=ls ; x++){
        if (x%n==0){
            cout << x;
        }
    }
}

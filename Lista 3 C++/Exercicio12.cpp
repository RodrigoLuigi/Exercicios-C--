/*12) Crie um programa onde o usuário insere uma string, podendo conter espaços nela. Após isso,
o programa deve pedir para o usuário fornecer um caractere e exibir na tela quantos desse caractere se encontram
na string informada. Exemplo:
O usuário informou a string "Conselheiro Lafaiete" e o caractere.
 O programa deve imprimir: existem 4 caracteres e na string informada.*/




 #include <iostream>
 using namespace std;
 int main(){
    int cont=0;
    char c;
    string texto;
        cout << "Digite um texto: ";
        getline(cin,texto);
        cout << "Digite uma letra: ";
        cin >> c;
            for(int i=0 ; i<texto.size() ; i++){
                if(c==texto[i]){
                cont++;
                }
            }
            cout << "\nExistem " << cont << " caracteres -> "<< c << " <- no texto informado.\n";
 }


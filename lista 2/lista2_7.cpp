#include <iostream>
#include <locale.h>

using namespace std;

bool ehPerfeito(int num){
    int soma = 0;
    for(int i=1; i<num; i++){
        if(num%i == 0){
            soma += i;
        }
    }
    return soma == num;
}

int main(){
    setlocale(LC_ALL, "portuguese");
    int n;
    cout << "Digite um número inteiro: ";
    cin >> n;
    cout << "Números perfeitos menores ou iguais a " << n << ":" << endl;
    for(int i=1; i<=n; i++){
        if(ehPerfeito(i)){
            cout << i << endl;
        }
    }
    return 0;
}


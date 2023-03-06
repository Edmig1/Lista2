#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int numero, limite;

    cout << "Digite um número para ser multiplicado: ";
    cin >> numero;

    cout << "Digite o limite da multiplicação: ";
    cin >> limite;

    for(int i = 1; i <= limite; i++) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }

    return 0;
}


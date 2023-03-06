#include <iostream>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese");

    int num;

    cout << "Digite um número inteiro: ";
    cin >> num;

    cout << "Números primos menores ou iguais a " << num << ": ";

    for (int i = 2; i <= num; i++) {
        bool ehPrimo = true;

        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                ehPrimo = false;
                break;
            }
        }

        if (ehPrimo) {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}


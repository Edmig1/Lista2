#include <iostream>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese");

    int num, i, fator;

    cout << "Digite um número inteiro positivo: ";
    cin >> num;

    cout << "Fatores primos de " << num << " são: ";

    for (i = 2; i <= num; i++) {
        if (num % i == 0) {
            fator = i;

            while (num % fator == 0) {
                cout << fator << " ";
                num /= fator;
            }
        }
    }

    cout << endl;

    return 0;
}


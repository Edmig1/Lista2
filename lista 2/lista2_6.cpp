#include <iostream>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese");

    int n, i, t1 = 0, t2 = 1, nextTerm;

    cout << "Digite o número de termos que deseja exibir na sequência de Fibonacci: ";
    cin >> n;

    cout << "Sequência de Fibonacci até o " << n << "º termo:" << endl;

    for (i = 1; i <= n; ++i) {
        cout << t1 << " ";

        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    return 0;
}


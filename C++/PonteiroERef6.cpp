#include <iostream>

using namespace std;

void trocar (int& a, int& b) {
    int aux;

    aux = a;
    a = b;
    b = aux;
}

int main () {

    int a = 10, b = 20;

    cout << "Antes da troca: " << a << " " <<  b << endl;
    trocar(a,b);
    cout << "Depois da troca: " << a << " " <<  b << endl;

    return 0;
}
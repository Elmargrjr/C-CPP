#include <iostream>

using namespace std;

int quadrado (int n) {
    return n * n;
}

void mostrarSaudacao (string nome, int idade) {
    cout << "Olá " << nome << ", você tem " << idade << " anos." << endl;
}

void triplicar (int x) {
    cout << "X triplicado: " << (3*x) << endl;
}

bool ehPar (int n) {
    bool estado;

    if (n%2 == 0) {
        estado = true;
    } else if (n%2 != 0) {
        estado = false;
    }

    return estado;
}


int main () {

    cout << "Quadrado de 2: " << quadrado(2) << endl;
    cout << "Quadrado de 3: " << quadrado(3) << endl;
    cout << "Quadrado de 4: " << quadrado(4) << endl;

    mostrarSaudacao("Neymar", 30);
    cout << endl;

    int x = 5;

    triplicar(x);
    cout << "X fora da função: " << x << endl;

    for (int i = 1; i <= 10; i++ ) {
        cout << "\nTeste de paridade do número:" << i << " Resultado: "<< boolalpha << ehPar(i);
    }

    return 0;
}
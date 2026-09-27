#include <iostream>

using namespace std;

void triplicarPorPonteiro(int* x) {
    *x *= 3;
}

int main () {

    int numero = 5;

    int* ptr = &numero;

    //Aqui em baixo poderia ser ptr também funciona.
    triplicarPorPonteiro(&numero); //quando desreferenciamos um endereço de ponteiro acessamos seu valor.
    cout << numero << endl;

    return 0;
}
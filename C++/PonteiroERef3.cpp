#include <iostream>

using namespace std;

void triplicarPorReferencia(int& x) {
    x *= 3;
}

int main () {

    int numero = 5;

    
    int* ptr = nullptr;
    
    cout << ptr << endl; //se desreferenciar ele crasha, segmention fault, estamos tentando desreferenciar o nada.
    
    //Boa prática
    if (ptr != nullptr) {
        cout << *ptr << endl;
    } else {
        cout << "nullptr não podemos desreferenciar!";
    }
    
    cout << endl;
    triplicarPorReferencia(numero);
    cout << numero << endl;
    cout << endl;
    
    int numeros[3] = {10, 20, 30};

    cout << numeros << endl; //Imprime um endereço, o nome do array é um ponteiro para o primeiro elemento.
    cout << *numeros << endl; //desreferencia o primeiro endereço do primeiro elemento e da o 10.
    cout << *(numeros + 1) << endl; //atirmética de ponteiro.
    cout <<  numeros[1] << endl;
    
    return 0;
}
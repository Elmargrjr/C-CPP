#include <iostream>

using namespace std;

void imprimirArray (int arr[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main () {

    int numeros[5] = {1, 2, 3, 4, 5};

    imprimirArray(numeros, 5);

    return 0;
}
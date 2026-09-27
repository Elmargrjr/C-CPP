#include <iostream>

using namespace std;

int somaArray(int arr[], int tamanho) {
    int aux = 0;

    for (int i = 0; i < tamanho; i++) {
        aux += arr[i];
    }

    return aux;
}

int main () {

    int array[5] = {1, 2, 3, 4, 5};

    cout << "A soma de todos os componentes internos do vetor é: " << somaArray(array, 5) << endl;

    return 0;
}
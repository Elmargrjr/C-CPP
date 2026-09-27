#include <iostream>

using namespace std;

int main () {

    int numeros[5] = {10, 20, 30, 40, 50};

    cout << numeros[0] << endl;
    cout << numeros[4] << endl;
    cout << endl;

    numeros[2] = 99; //Pode alterar elemento
    cout << numeros[2] << endl;
    cout << endl;


    //Range-based, quando não preciso do índice em si
    for (int n : numeros) {
        cout << n << endl;
    }
    cout << endl;

    cout << sizeof(numeros) << endl;
    cout << endl;

    cout << (sizeof(numeros)/sizeof(int)) << endl; //truque para descobrir o tamanho do vetor
    cout << endl;


    //Undefined Behavior
    cout << numeros[10] << endl; //lê lixo de memória, como não tem a posição 10.

    return 0;
}
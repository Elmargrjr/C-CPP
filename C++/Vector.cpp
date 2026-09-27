#include <iostream>
#include <vector>

using namespace std;

int main () {

    vector<int> numeros = {1, 2, 3, 4, 5};

    cout << "Tamanho do vector: " << numeros.size() << endl;

    cout << numeros[100] << endl; //Acessa e não ta nem ai, até que o SO diga que não é território dele.

    cout << numeros.at(100) << endl; //Crasha o programa, mas diagnostica o erro.

    return 0;
}
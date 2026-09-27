#include <iostream>

using namespace std;

int somar (int a, int b); //Declaração (Protótipo)

int main () {

    int resultado = somar(5,3);
    cout << "Soma: " << resultado << endl;

    return 0;
}

//Definição (o corpo de verdade)
int somar (int a, int b) {
    return a + b;
}
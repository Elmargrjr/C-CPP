#include <iostream>

using namespace std;

int main () {

    int idade = 30;

    cout << "Valor de idade: " << idade << endl; //Aqui a gente acessa a variável idade cru.
    cout << "Endereço de idade: " << &idade << endl; //Aqui a gente acessa o endereço de memória da variável idade.

    int* ptr = &idade;

    cout << "Valor de ptr: " << ptr << endl; //aqui acessamos o ptr, que contém o endereço da idade
    cout << "Valor apontado: " << *ptr << endl; //* desreferenciamos o ponteiro, com isso ele acessa o valor de idade.
    cout << endl;

    *ptr = 40;
    cout << idade << endl;

    return 0;
}
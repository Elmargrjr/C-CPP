#include <iostream>

using namespace std;

int main () {

    int idade = 25;

    int* ptr = &idade;

    cout << "Acessando valor pelo ponteiro: " << *ptr << endl;

    *ptr = 26;

    cout << "Provando que a idade mudou: " << idade;

    return 0;
}
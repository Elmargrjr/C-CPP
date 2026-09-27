#include <iostream>

using namespace std;

int main() {

    int idade = 25;
    float altura = 1.75f; //float é para quando nao precisa muito de desempenho 32 bits
    double salario = 3500.50; //double é mais preciso 64 bits
    char inicial = 'N';
    bool ativo = true;
    bool falso = false;

    cout << "Idade: " << idade << endl;
    cout << "Altura: " << altura << endl;
    cout << "Salario: " << salario << endl;
    cout << "inicial: " << inicial << endl;
    cout << "desativado: " << false << endl;
    cout << "ativo: " << boolalpha << ativo << endl; //boolaplha "converte" 1 e 0 do bool para verdadeiro e falso.
    cout << "ativo: " << ativo << endl; //tudo oque vier depois dele ficara como true e false.

    return 0;
}
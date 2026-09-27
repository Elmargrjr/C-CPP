#include <iostream>

using namespace std;

int main () {

    int a,b,c,i,f,r;
    a = 10;
    b = 3;
    c = 5;
    i = 5;
    f = 17;
    r = 5;
    
    bool x, y;
    x = true, y = false;

    cout << (a + b) << endl; //13 soma
    cout << (a - b) << endl; //7 subtração
    cout << (a * b) << endl; //30 multiplicação
    cout << (a / b) << endl; //3 divisão inteira
    cout << (a % b) << endl; //1 módulo

    cout << (double)a / b << endl; //3.333, pelo menos um double, nos dá um double.

    cout << (a == b) << endl; //Resposta 0, a não é estritamente igual a b, == comparação = atribuição
    cout << (a != b) << endl; //Resposta 1, a é diferente de b
    cout << (a > b) << endl; //Resposta 1, a maior que b
    cout << (a < b) << endl; //Resposta 0, a não é menor que b
    cout << (a >= b) << endl; //1 a maior que b, maior ou igual, maior verdadeiro
    cout << (a <= b) << endl; //0 nenhuma das duas menor ou igual satisfaz
    
    cout << boolalpha <<(x && y) << endl;
    cout << (x || y) << endl;
    cout << (!x) << endl;

    c += 3; //equivalente a c = c + 3
    c -= 3; //equivalente a c = c - 3
    c *= 3; //equivalente a c = c * 3
    c /= 3; //equivalente a c = c / 3

    cout << i++ << endl;
    cout << ++i << endl;

    cout << "Resultado f/r cru: " << f/r << endl; //trunca para inteiro
    cout << "Resultado usando double: " << (double)f/r << endl;
    cout << "Resto da divisão: " << f%r << endl;

    bool maior = f > r;

    cout << "Booleano comparativo f > r?: " << maior << endl;

    cout << "f++: " << f++ << " ++f: " << ++f << endl;

    return 0;
}
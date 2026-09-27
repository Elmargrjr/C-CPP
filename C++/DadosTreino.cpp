#include <iostream>

using namespace std;

int main() {

    int idade = 27;
    double altura = 1.90;
    double preco = 19.99;
    bool confirmacao = true;

    cout << "idade/altura: " << (idade/altura) << endl;
    cout << "preço convertido com static_cast: " << static_cast<int>(preco) << endl; //trunca não arredonda
    cout << "Confirmou?: " << boolalpha << confirmacao << endl;

    return 0;
}
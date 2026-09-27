#include <iostream>
#include <vector>

using namespace std;

int main () {

    vector<int> numero = {1, 2, 3, 4, 5};

    try {
        cout << numero.at(100) << endl;
    } catch (const out_of_range& erro) {
        cout << "Erro capturado: " << erro.what() << endl; //Aqui a gente captura o erro e o programa continua rodando.
        cout << "Programa continua rodando normalmente!" << endl; //Analogia servidor as 3 da manha que tratou erro continua ao invés de cair.
    }

    cout << "Fim do programa." << endl; 
    return 0;
}
#include <iostream>

using namespace std;

int main () {

    int matriz[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    cout << matriz[0][2] << endl;
    cout << matriz[1][0] << endl;

    cout << endl;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    char nomeEstiloC[20] = "Neymar"; //Em C string é um array de char, caracteres
    string nomeEstiloCpp = "Neymar"; // Em C++ tem a classe string

    return 0;
}
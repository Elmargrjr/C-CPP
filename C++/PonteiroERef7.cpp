#include <iostream>

using namespace std;

int main () {

    int* ptr = nullptr;

    if ( ptr != nullptr) {
        cout << "Não é nulo!" << endl;
    } else {
        cout << "É nulo!" << endl;
    }

    return 0;
}
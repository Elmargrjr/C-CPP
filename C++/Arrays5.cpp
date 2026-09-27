#include <iostream>

using namespace std;

int main () {

    int array[6], aux;

    for (int i = 0; i < 6; i++) {
        array[i] = 0;
    }
    
    cout << "Digite 6 valores para entrarem no array: " << endl;

    for (int i = 0; i < 6; i++) {
    cin >> aux;

    array[i] = aux;

    }

    for (int n : array) {
        cout << "\t" << n << endl;
    }

    return 0;
}
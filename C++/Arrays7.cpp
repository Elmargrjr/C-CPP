#include <iostream>

using namespace std;

int main () {

    int matriz[3][3] {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0}
    };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "\t" << matriz[i][j];
        }
        cout << endl;
        cout << endl;
    }

    return 0;
}
#include <iostream>

using namespace std;

int main() {

    int nota = 75;

    if (nota >= 90) {
        cout << "Conceito A" << endl;
    } else if (nota >= 70) {
        cout << "Conceito B" << endl;
    } else if (nota >= 50) {
        cout << "Conceito C" << endl;
    } else {
        cout << "Reprovado" << endl;
    }

    int diaSemana = 3;

    switch (diaSemana) {
        case 1:
            cout << "Domingo" << endl;
            break; //CRUCIAL
        case 2:
            cout << "Segunda" << endl;
            break;
        case 3:
            cout << "Terça" << endl;
            break;
        default:
            cout << "Dia inválido" << endl;
            break;
    }

    for (int i = 0; i < 5; i++) {
        cout << "Iteração: " << i << endl;
    }

    cout << endl;

    int contador = 0;

    while (contador < 5) {
        cout << contador << endl;
        contador++;
    }

    cout << endl;

    int x = 0;

    do {
        cout << x << endl;
        x++;
    } while (x < 5);

    cout << endl;

    for (int i = 0; i < 10; i++) {
        if (i == 5) break;
        if (i % 2 == 0) continue;
        cout << i << endl;
    }

    cout << endl;

    for (int i = 1; i <= 20; i++) {
        if (i % 3 == 0) {
            cout << i << endl;
        } else {
            continue;
        }
    }

    int y = 1;

    switch(y){
        case 1:
            cout << "Verão" << endl;
            break;
        case 2:
            cout << "outono" << endl;
            break;
        case 3:
            cout << "inverno" << endl;
            break;
        case 4:
            cout << "primavera" << endl;
            break;
        default:
            cout << "número inválido" << endl;
            break;
    }

    cout << endl;

    int opcao;

    do {
        cout << "MENU" << endl;
        cout << "1 - Opções" << endl;
        cout << "2 - SAC" << endl;
        cout << "0 - Sair" << endl;
    
        cout << "Digite uma opção: " << endl;
        cin >> opcao;

    } while (opcao != 0);

    return 0;
}
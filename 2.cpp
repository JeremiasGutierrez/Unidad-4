#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numeros = {10, 20, 30, 40, 50};

    cout << "Contenido usando Iterador: ";
    // a. Implementar un Vector con un Iterador para mostrar su contenido.
    for (vector<int>::iterator it = numeros.begin(); it != numeros.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
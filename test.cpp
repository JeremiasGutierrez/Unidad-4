#include <iostream>
#include <vector>
#include <algorithm> // Necesario para usar std::find()

using namespace std;

int main() {
    // a. Escribe un programa que defina un vector de enteros.
    vector<int> numeros;

    // b. Inserte elementos en un vector.
    numeros.push_back(10);
    numeros.push_back(20);
    numeros.push_back(30);
    numeros.push_back(40);
    numeros.push_back(50);

    // c. Imprima el contenido vectorial utilizando el bucle basado en rangos.
    cout << "Contenido inicial (c): ";
    for (int num : numeros) {
        cout << num << " ";
    }
    cout << endl;

    // d. Borre el segundo elemento del vector.
    numeros.erase(numeros.begin() + 1);

    // e. Imprima el contenido vectorial utilizando el bucle basado en rangos.
    cout << "Despues de borrar el 2do elemento (e): ";
    for (int num : numeros) {
        cout << num << " ";
    }
    cout << endl;

    // f. Borre el rango de 3 elementos a partir del principio del vector.
    numeros.erase(numeros.begin(), numeros.begin() + 3);

    // g. Imprima el contenido vectorial utilizando el bucle basado en rangos.
    cout << "Despues de borrar 3 elementos (g): ";
    for (int num : numeros) {
        cout << num << " ";
    }
    cout << endl;

    // h. Busque un elemento vectorial utilizando std::find().
    int numero_a_buscar = 50; 
    auto it = std::find(numeros.begin(), numeros.end(), numero_a_buscar);

    // i. Si se ha encontrado el elemento, elimínelo.
    if (it != numeros.end()) {
        numeros.erase(it);
        cout << "Elemento " << numero_a_buscar << " encontrado y eliminado (i)." << endl;
    } else {
        cout << "El elemento no fue encontrado." << endl;
    }

    // j. Imprima el contenido vectorial.
    cout << "Contenido final (j): ";
    for (int num : numeros) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
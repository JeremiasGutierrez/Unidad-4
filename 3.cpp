#include <iostream>
#include <map>

using namespace std;

int main() {
    // a. contenedor de mapa vacío
    map<int, string> map1;

    // b. insertar elementos en orden aleatorio
    map1.insert({7, "Siete"});
    map1.insert({2, "Dos"});
    map1.insert({5, "Cinco"});
    map1.insert({3, "Tres"});
    map1.insert({4, "Cuatro"});
    map1.insert({1, "Uno"});

    // c. imprimiendo mapa Map1 (se ordenará solo automáticamente por la clave)
    cout << "c. Map1: \n";
    for (const auto& par : map1) {
        cout << par.first << " -> " << par.second << "\n";
    }

    // d. asignando los elementos de Map1 a Map2
    map<int, string> map2 = map1;

    // e. imprimir todos los elementos del mapa Map2
    cout << "\ne. Map2 (copia): \n";
    for (const auto& par : map2) {
        cout << par.first << " -> " << par.second << "\n";
    }

    // f y g. eliminar todos los elementos hasta el elemento con clave=3 en Map2
    map2.erase(map2.begin(), map2.find(3));

    // h. eliminar todos los elementos con clave = 4
    map2.erase(4);

    cout << "\nDespues de borrar (f, g, h) Map2: \n";
    for (const auto& par : map2) {
        cout << par.first << " -> " << par.second << "\n"; // Quedarán el 3, 5 y 7
    }

    // i. límite inferior (lower_bound) y límite superior (upper_bound) para Map1 clave = 5
    auto lb = map1.lower_bound(5); // Devuelve iterador al elemento >= 5
    auto ub = map1.upper_bound(5); // Devuelve iterador al elemento > 5

    cout << "\ni. Limites para clave=5 en Map1:\n";
    if (lb != map1.end()) cout << "lower_bound(5): " << lb->first << " -> " << lb->second << "\n";
    if (ub != map1.end()) cout << "upper_bound(5): " << ub->first << " -> " << ub->second << "\n";

    return 0;
}
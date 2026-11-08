#include <iostream>
#include <unordered_map>
#include <sstream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string frase = "Existen dos tipos de lenguajes de programación: por un lado, aquellos de los que la gente se queja todo el rato; por otro, los que nadie utiliza. Bjarne Stroustrup";
    
    for (char &c : frase) {
        if (ispunct(c)) {
            c = ' ';
        }
    }

    // Usamos stringstream para extraer palabra por palabra
    stringstream ss(frase);
    string palabra;
    
    // Contenedor no ordenado para almacenar la frecuencia
    unordered_map<string, int> conteo_palabras;

    // Extraemos e insertamos en el mapa
    while (ss >> palabra) {
        conteo_palabras[palabra]++;
    }

    cout << "Conteo de palabras (unordered_map):\n";
    cout << "---------------------------------\n";
    for (const auto& par : conteo_palabras) {
        cout << par.first << ": " << par.second << "\n";
    }

    return 0;
}
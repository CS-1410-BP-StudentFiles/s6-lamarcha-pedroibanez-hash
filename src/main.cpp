#include <iostream>
#include <vector>
#include <cctype>
#include "letras.h"

using namespace std;

int main() {
    // 1. Vector con al menos 10 caracteres de la frase "La marcha de las letras".
    vector<char> letras = {'L', 'A', 'M', 'A', 'R', 'C', 'H', 'A', 'D', 'E'};

    // 2. Impresion tradicional en orden original usando indices y .size().
    cout << "Original: ";
    for (size_t i = 0; i < letras.size(); i++) {
        cout << letras[i] << ' ';
    }
    cout << endl;

    // 3. Impresion en orden inverso usando indices.
    cout << "Inverso: ";
    for (size_t i = letras.size(); i > 0; i--) {
        cout << letras[i - 1] << ' ';
    }
    cout << endl;

    // 4 y 5. Contar vocales con la funcion proporcionada.
    int totalVocales = contarVocales(letras);
    cout << "Numero de vocales: " << totalVocales << endl;

    // 6. Convertir todas las letras a minusculas usando range-based for loop.
    for (char& letra : letras) {
        letra = static_cast<char>(tolower(letra));
    }

    // 8. Impresion moderna usando range-based for loop.
    cout << "Vector en minusculas: ";
    for (char letra : letras) {
        cout << letra << ' ';
    }
    cout << endl;

    // 9. Agregar el resto de la frase usando push_back(), caracter por caracter.
    letras.push_back('l');
    letras.push_back('a');
    letras.push_back('s');
    letras.push_back('l');
    letras.push_back('e');
    letras.push_back('t');
    letras.push_back('r');
    letras.push_back('a');
    letras.push_back('s');

    // 10. Imprimir el vector extendido.
    cout << "Vector extendido: ";
    for (char letra : letras) {
        cout << letra << ' ';
    }
    cout << endl;

    // 11. Contar vocales otra vez con el vector completo.
    int totalVocalesExtendido = contarVocales(letras);
    cout << "Numero de vocales en el vector extendido: " << totalVocalesExtendido << endl;

    return 0;
}

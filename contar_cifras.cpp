// Fecha: 19/06/2024
// Autor: Ronald Elian Hurtado Jama
// Tema: Contar Cifras
#include <iostream>
using namespace std;

// Función recursiva para contar cifras
int contarCifras(int numero) {
    if (numero == 0) return 0;
    return 1 + contarCifras(numero / 10);
}

int main() {
    int numero;
    cout << "Ingrese un número entero: ";
    cin >> numero;
    cout << "El número tiene " << contarCifras(numero) << " cifras." << std::endl;
    return 0;
}

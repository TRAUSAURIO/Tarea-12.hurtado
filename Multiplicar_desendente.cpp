// Fecha: 19/06/2024
// Autor: Ronald Elian Hurtado Jama
// Tema: Tabla de Multiplicar Descendente
#include <iostream>
using namespace std;

// Función recursiva para imprimir la tabla de multiplicar en orden descendente
void imprimirTablaDescendente(int tabla, int limite) {
    if (limite == 0) return;
    cout << tabla << " x " << limite << " = " << tabla * limite << std::endl;
    imprimirTablaDescendente(tabla, limite - 1);
}

int main() {
    int tabla;
    cout << "Ingrese la tabla de multiplicar: ";
    cin >> tabla;
    imprimirTablaDescendente(tabla, 10);
    return 0;
}

// Fecha: 19/06/2024
// Autor: Ronald Elian Hurtado Jama
// Tema: Tabla de Multiplicar
#include <iostream>
using namespace std;

// Función recursiva para imprimir la tabla de multiplicar
void imprimirTabla(int tabla, int limite) {
    if (limite == 0) return;
    imprimirTabla(tabla, limite - 1);
    cout << tabla << " x " << limite << " = " << tabla * limite << std::endl;
}

int main() {
    int tabla, limite;
    cout << "Ingrese la tabla de multiplicar: ";
    cin >> tabla;
    cout << "Ingrese el límite superior de la tabla: ";
    cin >> limite;
    imprimirTabla(tabla, limite);
    return 0;
}

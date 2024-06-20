// Fecha: 19/06/2024
// Autor: Ronald Elian Hurtado Jama
// Tema: Sumatoria Alternada
#include <iostream>
using namespace std;

// Función recursiva para la sumatoria alternada
int sumatoriaAlternada(int n) {
    if (n == 1) return 1;
    return (n % 2 == 0 ? -n : n) + sumatoriaAlternada(n - 1);
}

int main() {
    int n;
    cout << "Ingrese el límite de la serie: ";
    cin >> n;
    cout << "La sumatoria alternada es: " << sumatoriaAlternada(n) <<endl;
    return 0;
}

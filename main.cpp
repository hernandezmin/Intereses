#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int opcion;
    double P, r, t, n, SI, CI;

    cout << "Bienvenido a la calculadora de intereses.\n";
    cout << "Seleccione una opción:\n";
    cout << "1. Calcular el interés simple\n";
    cout << "2. Calcular el interés compuesto\n";
    cin >> opcion;

    cout << "Ingrese el monto principal (P): ";
    cin >> P;
    cout << "Ingrese la tasa de interés anual (r) en porcentaje: ";
    cin >> r;
    cout << "Ingrese el tiempo (t) en años: ";
    cin >> t;

    r = r / 100; // Convertir la tasa de interés de porcentaje a decimal

    if (opcion == 1) {
        SI = P * r * t;
        cout << "El interés simple es: " << SI << endl;
    } else if (opcion == 2) {
        cout << "Ingrese el número de veces que se capitaliza el interés por año (n): ";
        cin >> n;
        CI = P * pow((1 + r / n), n * t);
        cout << "El interés compuesto es: " << CI << endl;
    } else {
        cout << "Opción no válida." << endl;
    }

    return 0;
}


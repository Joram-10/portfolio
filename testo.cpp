#include <iostream>

using namespace std;

// Función que realiza la operación indicada entre dos números
// y devuelve el resultado
double calcular(double a, char operacion, double b) {
  if (operacion == '+') {
    return a + b;
  } else if (operacion == '-') {
    return a - b;
  } else if (operacion == '*') {
    return a * b;
  } else if (operacion == '/') {
    return a / b;
  } else {
    return 0;
  }
}

int main() {
  while (true) {
    // Pedir al usuario que ingrese los operandos y la operación
    cout << "Ingresa dos números y una operación (+, -, * o /): ";
    double a, b;
    char operacion;
    cin >> a >> operacion >> b;

    // Realizar la operación y mostrar el resultado
    cout << "Resultado: " << calcular(a, operacion, b) << endl;
  }

  return 0;

#include <iostream>
using namespace std;

double calcularArea(double lado) {
    return lado * lado;
}

double calcularPerimetro(double lado) {
    return 4 * lado;
}

int main() {
    double lado;
    
    cout << "Ingresa el valor del lado del cuadrado: ";
    cin >> lado;
    
    double area = calcularArea(lado);
    double perimetro = calcularPerimetro(lado);
    
    cout << "¿que valor deseas ver en pantalla, area o perimetro? ";
    string opcion;
    cin >> opcion;
    
    if (opcion == "area") {
        cout << "El area del cuadrado es: " << area << " unidades cuadradas." << endl;
    } else if (opcion == "perimetro") {
        cout << "El perimetro del cuadrado es: " << perimetro << " unidades." << endl;
    } else {
        cout << "Opcion invalida. Debes elegir 'area' o 'perimetro'." << endl;
    }
    
    return 0;
}


#include <iostream>
using namespace std;

struct Estudiante {
string nombre, codigo;
};

void agregarEstudiante(Estudiante alumno[], int & contador) {
cout << "Ingrese el nombre del estudiante: ";
cin >> alumno[contador].nombre;

cout << "Ingrese el código del estudiante: ";
cin >> alumno[contador].codigo;

contador++;
}

int main() {
const int MAX_ESTUDIANTES = 100;
Estudiante alumnos[MAX_ESTUDIANTES];
int contador = 0;
char opcion;

do {
agregarEstudiante(alumnos, contador);

cout << "¿Desea agregar otro estudiante? (s/n): ";
cin >> opcion;

} while (opcion == 's' || opcion == 'S');

for (int i = 0; i < contador; i++) {
if (alumnos[i].nombre.empty() || alumnos[i].codigo.empty()) {
cout << "Hay un campo vacío para el estudiante " << i + 1 << endl;
} else {
cout << "Los campos están llenos para el estudiante " << i + 1 << endl;
}
}
cout<<"los alumos registrados fueron"<<contador;
return 0;
}

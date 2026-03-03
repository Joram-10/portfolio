#include <iostream>
#include <string>

using namespace std;

struct Estudiante {
    string nombre, codigo;
};

int main() {
    Estudiante alumno[2];

    alumno[0].nombre = "Pablo";
    alumno[0].codigo = "1234";
    alumno[1].nombre = "Roberto";  
    alumno[1].codigo = "";   

    for (int i = 0; i < 2; i++) {
        if (alumno[i].codigo.empty() || alumno[i].nombre.empty()) {
            cout << "Hay un campo vacio para el estudiante " << i + 1 << endl;
        } else {
            cout << "Los campos estan llenos para el estudiante " << i + 1 << endl;
        }
    }

    return 0;
}


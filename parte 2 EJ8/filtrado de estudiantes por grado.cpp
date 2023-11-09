#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Estudiante {
public:
    string nombre;
    int edad;
    string grado;

};

// Funcion para filtrar estudiantes por grado
vector<Estudiante> filtrarEstudiantes(vector<Estudiante> estudiantes, string grado) {
    vector<Estudiante> estudiantesFiltrados;

    for (int i = 0; i < estudiantes.size(); i++) {
        if (estudiantes[i].grado == grado) {
            estudiantesFiltrados.push_back(estudiantes[i]);
        }
    }

    return estudiantesFiltrados;
}

int main() {

    vector<Estudiante> lista_estudiantes = {
    {"Zoe", 18, "B"},
    {"Sebas", 20, "C"},
    {"Nerea", 18, "A"},
    {"Adriana", 18, "B"},
    {"Cintia", 19, "C"}

    };

    // filtrar estudiantes por grado "B"
    vector<Estudiante> estudiantes_filtrados = filtrarEstudiantes(lista_estudiantes, "B");

    // Imprimir resultado
    for (int i = 0; i < estudiantes_filtrados.size(); i++) {
        cout << estudiantes_filtrados[i].nombre << endl;
    }

    // filtrar estudiantes por grado "A"
    vector<Estudiante> estudiantes_filtrados_A = filtrarEstudiantes(lista_estudiantes, "A");

    // Imprimir resultado
    for (int i = 0; i < estudiantes_filtrados_A.size(); i++) {
        cout << estudiantes_filtrados_A[i].nombre << endl;
    }

    // filtrar estudiantes por grado "C"
    vector<Estudiante> estudiantes_filtrados_C = filtrarEstudiantes(lista_estudiantes, "C");

    // Imprimir resultado
    for (int i = 0; i < estudiantes_filtrados_C.size(); i++) {
        cout << estudiantes_filtrados_C[i].nombre << endl;
    }

    return 0;

}


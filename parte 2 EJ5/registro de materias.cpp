#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Estudiante {
public:
    //propiedades
    string nombre;
    int edad;
    vector<string> materias; //materias que cursa el estudiante

    //funcion para agregar materias
    void agregarMateria(string materia) {
        materias.push_back(materia);
        cout << "Materia agregada" << endl;
    }


    //funcion para mostrar materias agregadas
    void mostrarMaterias() {
        cout << "Materias registradas para " << nombre << ":" << endl;
        for (int i = 0; i < materias.size(); i++) {
            cout << materias[i] << endl;
        }
    }
};

int main() {
    //crear objeto de la clase estudiante
    Estudiante estudiante;

    //asignar valores a las propiedades
    estudiante.nombre = "Zoe";
    estudiante.edad = 18;

    //agregar materias
    estudiante.agregarMateria("Matematicas");
    estudiante.agregarMateria("Programacion");
    estudiante.agregarMateria("Ingles");

    //mostrar materias agregadas
    estudiante.mostrarMaterias();

    return 0;
}

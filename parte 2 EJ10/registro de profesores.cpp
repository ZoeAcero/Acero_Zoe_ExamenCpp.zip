#include <iostream>
#include <string>

using namespace std;

class Profesor {
public:
    //propiedades
    string nombre;
    int edad;
    string materia;
    int años_experiencia;

    //funcion para mostrar la informacion del profesor
    void mostrar_informacion() {
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
        cout << "Materia que imparte: " << materia << endl;
        cout << "Años de experiencia: " << años_experiencia << endl;
    }
};


int main() {
    //creando un objeto de la clase profesor
    Profesor profesor;

    //asignando valores a las propiedades
    profesor.nombre = "Ruben";
    profesor.edad = 30;
    profesor.materia = "Programacion";
    profesor.años_experiencia = 10;

    //llamando a la funcion mostrar_informacion
    profesor.mostrar_informacion();


    return 0;
}
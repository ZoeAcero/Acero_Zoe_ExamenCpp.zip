#include <iostream>
#include <string>

using namespace std;

class Estudiante{
    public:
    //propiedades
    string nombre;
    int edad;
    string grado;

    //funcion miembro para mostrar la información del estudiante
    void mostrarInfo(){
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
        cout << "Grado: " << grado << endl;
    }
};

int main(){
    //creamos un objeto de la clase Estudiante
    Estudiante estudiante;

    //asignamos valores a las propiedades del objeto
    estudiante.nombre = "Zoe";
    estudiante.edad = 18;
    estudiante.grado = "Ingenieria";

    //llamamos a la función miembro del objeto
    estudiante.mostrarInfo();

    return 0;
}


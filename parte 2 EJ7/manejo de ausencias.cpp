#include <iostream>
#include <string>

using namespace std;

class RegistroAsistencia {
public:
    //propiedades
    string fecha;
    string estado;

    //funcion para mostrar la asistencia
    void mostrarAsistencia() {
        cout << "Fecha: " << fecha << endl;
        cout << "Estado: " << estado << endl;
    }
};


int main() {
    //creamos un objeto de la clase RegistroAsistencia
    RegistroAsistencia asistencia;

    //asignamos valores a las propiedades
    asistencia.fecha = "09-11-2023";
    asistencia.estado = "Ausente";

    //mostramos la asistencia
    asistencia.mostrarAsistencia();


    return 0;
}

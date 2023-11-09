#include <iostream>
#include <stdexcept>

using namespace std;

//funcion que lanza una excepcion
void lanza_excepcion() {
    throw runtime_error("Error en la funcion lanzada excepcion");
}

int main() {
    try {
        //intenta ejecutar la funcion
        lanza_excepcion();
    } catch (runtime_error &e) {
        //captura la excepcion si ocurre y maneja el error
        cout << "Error: " << e.what() << endl;
    }
    return 0;
}
#include <iostream>
#include <vector>

using namespace std;

//funciokn para calcular el promedio de calificaciones
float promedio(vector<float> calificaciones){
    float suma = 0;
    for(int i = 0; i < calificaciones.size(); i++){
        suma += calificaciones[i];
    }
    return suma / calificaciones.size();
}

int main() {
    //ejemplo de uso
    vector<float> calificaciones = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    //funcion para calcular el promedio
    double promedio_calificaciones = promedio(calificaciones);

    //imprimir el promedio
    cout << "El promedio es: " << promedio_calificaciones << endl;


    return 0;
}

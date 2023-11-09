#include <iostream>

using namespace std;

void intercambiar(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

int main() {
    //definimos dos variables
    int a = 100;
    int b = 7;

    //enseñar valores antes del intercambio
    cout << "Antes del intercambio: " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // llamar a la funcion para intercambiar los valores
    intercambiar(&a, &b);

    //enseñar valores despues del intercambio
    cout << "Despues del intercambio: " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;


    return 0;
}
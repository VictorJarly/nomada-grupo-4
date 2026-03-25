// Escribe una función que reciba dos números enteros por referencia y los intercambie.
// Muestra los valores antes y después de llamar a la función.

// a = 5
// b = 10

// a = 10
// b = 5

#include <iostream>

using namespace std;

void intercambiarValores(int &a, int &b) { // a = 5, b = 10

    int temp;

    temp = a; // temp = 5
    a = b; // a = 10
    b = temp; // b = 5

}

int main() {

    int numero1, numero2;

    cout<<"Ingresa el primero número: ";
    cin>>numero1; // 5

    cout<<"Ingresa el segundo número: ";
    cin>>numero2; // 10

    cout<<"Valores antes del intercambio: "<<endl;
    cout<<"Número 1: "<<numero1<<", Número 2: "<<numero2<<endl;

    intercambiarValores(numero1, numero2);

    cout<<"Valores después del intercambio: "<<endl;
    cout<<"Número 1: "<<numero1<<", Número 2: "<<numero2<<endl;

    return 0;
}

// Escribe una función que reciba un número entero positivo y devuelva su factorial.
// El factorial de un número n es el producto de todos los enteros desde 1 hasta n.

// n! = 1 x 2 x 3 x 4... n
// 3! = 3 x 2 x 1 = 6
// 5! = 5 x 4 x 3 x 2 x 1 = 120
// 0! = 1

// Bucle for

#include <iostream>

using namespace std;

int factorial(int n) {

    int resultado = 1;

    for(int i = 1; i <= n; i++){
      resultado = resultado * i; // resultado = 6
    }

    return resultado;
}

int main() {

    int numero;

    cout<<"Ingresa un número: ";
    cin>>numero; // 3

    int resultado = factorial(numero);

    cout<<"El factorial es: "<<resultado<<endl;

    return 0;
}

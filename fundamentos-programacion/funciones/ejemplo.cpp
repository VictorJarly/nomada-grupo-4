#include <iostream>

using namespace std;

int suma(int a, int b); // Declaración de función

int main() {

    int numero1, numero2, resultado;

    cout<<"Ingresa los dos números a sumar: ";
    cin>>numero1>>numero2; // 2 2

    resultado = suma(numero1, numero2); // Argumentos

    cout<<"La suma es: "<<resultado<<endl;

    return 0;
}

int suma(int a, int b) { // Definición de la función
  return a + b; // return 4
}

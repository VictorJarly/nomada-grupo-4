// 1. Solicitar un número entero positivo N. Luego, pedirle al usuario que ingrese N números y
// calcular la suma total.

// 3
// 2 5 1
// Suma = 8

#include <iostream>

using namespace std;

int main() {

    int n, suma = 0, contador = 1, numero;

    cout<<"Ingresa la cantidad de números: ";
    cin>>n;

    while(contador <= n){ // 3 <= 3
      cout<<"Ingresa el número "<<contador<<": "; // Ingresa el número 3:
      cin>>numero; // numero = 1

      suma = suma + numero; // suma = 8

      contador++; // 4
    }

    cout<<"La suma total es: "<<suma<<endl; // La suma total es: 8

    return 0;
}

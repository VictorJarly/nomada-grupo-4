// Escribe una función que reciba un número entero y devuelva true si el
// número es par y false si es impar. Luego, muestra el resultado desde main.

// 1. Recibir un entero (✔)
// 2. Determinar si es par o impar: numero % 2 == 0 (✔)
// 3. Devuelve: true si es par, false si es impar (✔)

#include <iostream>

using namespace std;

bool esPar(int n);

int main() {

    int numero;

    cout<<"Ingresa un número: ";
    cin>>numero;

    bool resultado = esPar(numero);

    if(resultado == true){
      cout<<"El número es par."<<endl;
    }else{
      cout<<"El número es impar."<<endl;
    }

    return 0;
}

bool esPar(int n) {
  if(n % 2 == 0){
    return true; // Es par
  }else{
    return false;
  }
}

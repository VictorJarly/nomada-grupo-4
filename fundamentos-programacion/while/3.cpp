// Ingresa un número entero positivo y calcula la suma de sus dígitos

// 1234 => 10

// 1234 % 10 = 4
// 1234 / 10 = 123

#include <iostream>

using namespace std;

int main() {

    int numero, digito, suma = 0;

    cout<<"Ingresa un número: ";
    cin>>numero; // 1234

    while(numero > 0){
      digito = numero % 10; // digito = 1
      suma = suma + digito; // suma = 10
      numero = numero / 10; // numero = 0
    }

    cout<<"La suma de dígitos es: "<<suma<<endl; // 10

    return 0;
}

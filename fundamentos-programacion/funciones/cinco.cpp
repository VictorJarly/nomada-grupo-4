// Escribe una función que reciba una temperatura en grados Celsius y la convierta a Fahrenheit.

// 1. Recibir una temperatura en grados Celsius.
// 2. Convertirla a Fahrenheit.
// 3. Mostrar la temperatura convertida.

// F = 9/5 C + 32

#include <iostream>

using namespace std;

float convertirFahrenheit(float celsius) {
    float fahrenheit;

    fahrenheit = (9.0 / 5.0) * celsius + 32;

    return fahrenheit;
}

int main() {

    float celsius, fahrenheit;

    cout<<"Ingresa la temperatura en Celsius: ";
    cin>>celsius; // 30

    fahrenheit = convertirFahrenheit(celsius);

    cout<<"La temperatura en Fahrenheit es: "<<fahrenheit<<endl;

    return 0;
}

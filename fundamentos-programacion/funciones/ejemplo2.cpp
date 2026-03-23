#include <iostream>

using namespace std;

void duplicarValor(int valor){
    valor = valor * 2;
    cout<<"Valor dentro de la función: "<<valor<<endl;
}

int main() {

    int valor = 10;
    duplicarValor(valor); // => COPIA
    cout<<"Valor fuera de la función: "<<valor<<endl;

    return 0;
}

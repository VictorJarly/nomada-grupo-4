// Desarrolla un programa que simule un sistema de generación de códigos numéricos

// El programa debe:
// 1. Mostrar un menú
//    - 1. Generar código
//    - 2. Verificar si un código es válido
//    - 3. Contar cuántos dígitos del código son pares
//    - 4. Invertir un código
//    - 5. Salir

// El código debe ser un número entero positivo
// El código es válido si:
// - Tiene al menos 3 dígitos
// - Y termina en número impar

#include <iostream>

using namespace std;

int generarCodigo(){

    int n, digito, codigo = 0;

    cout<<"Cuántos dígitos tendrá el código: ";
    cin>>n; // 4

    for(int i = 1; i <= n; i++){
      cout<<"Ingresa el dígito "<<i<<": ";
      cin>>digito; // 6

      if(digito >= 0 && digito <= 9){
        codigo = codigo * 10 + digito; // codigo = 526
      }
    }

    return codigo; // return 526
}

int main() {

    int opcion;

    do{

        cout<<"=== MENÚ DE CÓDIGOS ==="<<endl;
        cout<<"1. Generar código"<<endl;
        cout<<"2. Verificar código"<<endl;
        cout<<"3. Contar dígitos pares"<<endl;
        cout<<"4. Invertir código"<<endl;
        cout<<"5. Salir"<<endl;
        cout<<"Opción: ";
        cin>>opcion;

        switch(opcion){
          case 1:
                  int codigo = generarCodigo();
                  cout<<"Código generado: "<<codigo<<endl; // 526
                  break;
        }

    }while(opcion != 5);

    return 0;
}

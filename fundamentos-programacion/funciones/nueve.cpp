// Desarrolla un programa que simule un sistema de cálculo de facturación de clientes:

// 1. Mostrar un menú
//    - 1. Registrar consumo de un cliente
//    - 2. Calcular total a pagar
//    - 3. Contar cuántos consumos fueron mayores a 50
//    - 4. Mostrar el consumo mayor
//    - 5. Salir
// 2. El usuario ingresará N consumos (uno por uno)
// 3. No usar arreglos
// 4. Se deben usar funciones para:
//    - Acumular total
//    - Contar consumos altos
//    - Encontrar el mayor

// 200 + 150 + 50 = 400

#include <iostream>

using namespace std;

double calcularTotal(){
    int n;
    double consumo, total = 0;

    cout<<"Cuántos consumos tuvo: ";
    cin>>n; // 3

    for(int i = 1; i <= n; i++){
      cout<<"Consumo "<<i<<": "; // Consumo 3:
      cin>>consumo; // 50

      if(consumo > 0){ // 50 > 0
        total += consumo; // total = 400
      }
    }

    return total; // return 400
}

int contarMayoresCincuenta(){

    int n, contador = 0, i = 1;
    double consumo;

    cout<<"Cuántos consumos tuvo: ";
    cin>>n;

    while(i <= n){
      cout<<"Consumo "<<i<<": ";
      cin>>consumo;

      if(consumo > 50){
        contador++;
      }else{

      }
      i++;
    }

    return contador;
}

double mayorConsumo(){
    int n, i = 1;
    double consumo, mayor;

    cout<<"Cuántos consumos tuvo: ";
    cin>>n; // 4

    if(n <= 0){
      return 0;
    }

    cout<<"Consumo 1: ";
    cin>>mayor; // mayor = 10

    i = 2;

    do{
      if(i > n) break;

      cout<<"Consumo "<<i<<": ";
      cin>>consumo; // 30

      if(consumo > mayor){
        mayor = consumo; // mayor = 30
      }
      i++;
    }while(i <= n);

    return mayor;
}

int main() {

    int opcion;

    do{

        cout<<"=== MENÚ DE FACTURACIÓN ==="<<endl;
        cout<<"1. Registrar consumo"<<endl;
        cout<<"2. Calcular total"<<endl;
        cout<<"3. Contar consumos > 50"<<endl;
        cout<<"4. Mostrar mayor consumo"<<endl;
        cout<<"5. Salir"<<endl;
        cout<<"Opción: ";
        cin>>opcion;

        switch(opcion){
          case 1: {
              int n;
              double consumo;

              cout<<"Cuántos consumos tuvo: ";
              cin>>n;

              for(int i = 1; i <= n; i++){
                cout<<"Consumo "<<i<<": ";
                cin>>consumo;
              }
              break;
          }

          case 2:{
              int total = calcularTotal();
              cout<<"Total a pagar: "<<total<<endl; // Total a pagar: 400
              break;
          }

          case 3: {
              int mayor = contarMayoresCincuenta();
              cout<<"Consumos mayores a 50: "<<mayor<<endl;
              break;
          }

          case 4: {
              double mayor = mayorConsumo();
              cout<<"El mayor consumo fue: "<<mayor<<endl;
          }

          case 5: cout<<"Saliendo..."<<endl;
                  break;
          default:
                  cout<<"Opción inválida."<<endl;
        }

    }while(opcion != 5);

    return 0;
}

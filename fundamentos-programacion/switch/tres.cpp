// Ingresa el día y mes de nacimiento de una persona y di cuál es su signo del zodiaco.

// | Signo       | Fecha           |
// | ----------- | --------------- |
// | Capricornio | 22 dic – 19 ene |
// | Acuario     | 20 ene – 18 feb |
// | Piscis      | 19 feb – 20 mar |
// | Aries       | 21 mar – 19 abr |
// | Tauro       | 20 abr – 20 may |
// | Géminis     | 21 may – 20 jun |
// | Cáncer      | 21 jun – 22 jul |
// | Leo         | 23 jul – 22 ago |
// | Virgo       | 23 ago – 22 sep |
// | Libra       | 23 sep – 22 oct |
// | Escorpio    | 23 oct – 21 nov |
// | Sagitario   | 22 nov – 21 dic |

#include <iostream>
using namespace std;

int main() {

    int dia, mes;

    cout<<"Ingresa tu día de nacimiento: ";
    cin>>dia;
    cout<<"Ingresa tu mes de nacimiento: ";
    cin>>mes;

    switch(mes){
      case 1:
              if(dia <= 19) cout<<"Su signo es: Capricornio.";
              else cout<<"Su signo es: Acuario.";
              break;
      case 2:
              if(dia <= 18) cout<<"Su signo es: Acuario.";
              else cout<<"Su signo es: Piscis.";
              break;
      case 3:
              if(dia <= 20) cout<<"Su signo es: Piscis.";
              else cout<<"Su signo es: Aries.";
              break;
      case 4:
              if(dia <= 19) cout<<"Su signo es: Aries.";
              else cout<<"Su signo es: Tauro.";
              break;
      case 5:
              if(dia <= 20) cout<<"Su signo es: Tauro.";
              else cout<<"Su signo es: Géminis.";
              break;
      case 6:
              if(dia <= 20) cout<<"Su signo es: Géminis.";
              else cout<<"Su signo es: Cáncer.";
              break;
      case 7:
              if(dia <= 22) cout<<"Su signo es: Cáncer.";
              else cout<<"Su signo es: Leo.";
              break;
      case 8:
              if(dia <= 22) cout<<"Su signo es: Leo.";
              else cout<<"Su signo es: Virgo.";
              break;
      case 9:
              if(dia <= 22) cout<<"Su signo es: Virgo.";
              else cout<<"Su signo es: Libra.";
              break;
      case 10:
              if(dia <= 22) cout<<"Su signo es: Libra.";
              else cout<<"Su signo es: Escorpio.";
              break;
      case 11:
              if(dia <= 21) cout<<"Su signo es: Escorpio.";
              else cout<<"Su signo es: Sagitario.";
              break;
      case 12:
              if(dia <= 21) cout<<"Su signo es: Sagitario.";
              else cout<<"Su signo es: Capricornio.";
              break;
      default: cout<<"Mes inválido."<<endl;
    }

    return 0;
}

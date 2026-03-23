// Serie Fibonacci

// 0, 1, 1, 2, 3, 5, 8, 13, ...

// a = 0
// b = 1

#include <iostream>

using namespace std;

int main() {

    int n, a = 0, b = 1, siguiente;

    cout<<"Ingresa la cantidad de términos: ";
    cin>>n; // 6

    for(int i = 1; i <= n; i++){
      cout<<a<<" "; // 0 1 1 2 3 5
      siguiente = a + b; // siguiente = 5

      a = b; // a = 3
      b = siguiente; // b = 5
    }

    cout<<endl;

    return 0;
}

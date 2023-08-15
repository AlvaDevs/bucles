/*
    Programa: Bucles - Semana #3
    ID Autor: T00070257
    Nombre Autor: Álvaro José Álvarez Puello
    Fecha: 15-08-23
 */

//  Diferencia entrev for, while y do-while.
#include <iostream>

using namespace std;

int main() {
//    ciclo for
//    solo si ya se conocen
//    las iteraciones
    
    int n = 4, i;
    cout << "Ciclo for: " << endl;
    for (i = 0; i < n; i++) {
        cout << "El valor de i es: " << i << endl;
    }
    
    i = 0;
    cout << endl;
    cout << "Ciclo while: " << endl;
    while (i < n) {
        cout << "El valor de i es: " << i << endl;
        i++;
    }
    
    i = 0;
    cout << endl;
    cout << "Ciclo do-while: " << endl;
    do {
        cout << "El valor de i es: " << i << endl;
        i++;
    } while (i < n);
    
    return 0;
}

#include <iostream>
using namespace std;

void casoDePrueba() {
    unsigned long int lado1, lado2, lado3, aux;
    cin >> lado1 >> lado2 >> lado3;
    //Si se cumple la desigualdad tringular, puede formar un triángulo
    if ((lado1 + lado2 > lado3) && (lado1 + lado3 > lado2) && (lado2 + lado3 > lado1)) {
        //ordenamos los lados de menor a mayor
        if (lado2 < lado1) {
            aux = lado2;
            lado2 = lado1;
            lado1 = aux;
        }
        if (lado3 < lado1) {
            aux = lado3;
            lado3 = lado1;
            lado1 = aux;
        }
        if (lado3 < lado2) {
            aux = lado2;
            lado2 = lado3;
            lado3 = aux;
        }
        //están ordenados de menor a mayor en lado1, lado2, lado3
        //condición de rectángulo:
        if (lado1 * lado1 + lado2 * lado2 == lado3 * lado3)
            cout << "RECTANGULO" << "\n";
        else if (lado1 * lado1 + lado2 * lado2 > lado3 * lado3)
            cout << "ACUTANGULO" << "\n";
        else
            cout << "OBTUSANGULO" << "\n";        
    }        
    //No se cumple la desigualdad triangular
    else {
        cout << "IMPOSIBLE" << "\n";
        
    }
    
} // casoDePrueba

int main() {
    unsigned int numCasos;

    cin >> numCasos;
    for (unsigned int i = 0; i < numCasos; ++i) {
        casoDePrueba();
    }

    return 0;
}
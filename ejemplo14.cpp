#include <iostream>
using namespace std;

int main(void){
    // Preguntar al usuario 
    // la tabla que desea imprimir 
    // ingreso -> 6
    // imprimir la tabla del 6
    int numero = 0;
    while(true){
    cout << "Ingresa la tabla que deseas imprimir: ";
    cin >> numero;

    cout << "IMPRIMIENDO LA TABLA DEL " << numero << endl;
    for(int i=1; i<11; i++){
        int multiplicacion = i*numero;
        cout << numero << "x" << i << "=" << multiplicacion << endl;
    }
    }
}
/* 
    Solicitar un numero 
    Despues trabajar en base a ese numero

    Solicitar un numero al usuario
    En base a ese numero crear con "*" un rombo
    segun el numero ingresado el numero mas pequeño debe ser 3

    Ingreso 5: el valor seria 5 
    Si es par se aproxima el impar mayor
    El numero maximo es 19
    
    Ejemplo 
    Ingreso -> 3 
                *
               *  * 
              * *  *
               *  *
                 *      

    Con ciclos for o while    
*/

#include <iostream>
#include <string>
using namespace std;

int main(void){
    // Solicitar un numero 
    int numero = 0;
    string cadena_1 = "*";

    cout << "Ingrese un numero para el tamanio de su rombo: ";
    cin >> numero;

    for(int a = 1; a<=numero; a++){
        cout << cadena_1;
        cadena_1 += "*";
        cout << "\n";
	}

    cadena_1.erase(0,1);
    for(int a = numero; a >= 0; a--){
        cadena_1 = cadena_1.erase(0,1);
        cout << cadena_1;
        cout << "\n";
        
    }
}


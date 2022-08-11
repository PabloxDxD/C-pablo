#include <iostream>
#include <string>
using namespace std;

int main(void){
    int res = 0;
    string menu = "\t\tMENU\n\t1. Calculadora\n\t2. Informacion del Programador\n\t3 Salir.";
    cout << menu;
    cin >> res;
    int num1 = 0, num2 = 0;
    int suma = 0, resta = 0, multiplicacion = 0, division = 0;
    
    switch(res){
        case 1:
            cout << "Ingrese un numero" << endl;
            cin >> num1;
            cout << "Ingrese un numero" << endl;
            cin >> num2;
            cout <<"Que tipo de operacion deseas realizar? ";
            cin >> res;
            
            if(suma){
            if(suma = num1 + num2){
                cout << "El total de su suma es de: ";
            }
            }
            if(resta){
            if(resta = num1 - num2){
                cout << "El total de su resta es de: ";
            }
            }
            
            if(multiplicacion){
            if(multiplicacion = num1 * num2){
                cout << "El total de su multiplicacion es de: ";
            }
            }

            if(division){
            if(division = num1 / num2){
                cout << "El total de su division es de: ";
            }
            }
        break;

        case 2:
            cout <<"Pablo Moises Hernandez Vicente\nLaboratorio 1\nCuarto Bachillerato\n";
        break;

        case 3:
            cout <<"Hasta pronto :3";
        break;

        default:
            cout << "No has ingresado una respuesta correcta, vuelve a intentarlo";
        break;
    }

}
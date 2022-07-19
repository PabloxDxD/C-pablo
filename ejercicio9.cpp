//Solicitar 2 numeros al usuario, seguidamente preguntar
//si que tipo de operacion quiere hacer:
// Suma, resta, multiplicacion, division, potencia
//Usar sentencia switch

#include <iostream>
#include <string>
#include <Cmath>
using namespace std;

int main(void){
    int num1 = 0, num2 = 0;

    cout << "Ingrese un numero: " ;
    cin >> num1;
    cout << "Ingrese el segundo numero: " ;
    cin >> num2;
    int res = 0;
    string menu= "\t\tMENU\n\t1. SUMA \n\t2. RESTA\n\t3. MULTIPLICACION\n\t4. Division\n\t5. POTENCIACION";
    cout << menu;
    cin >> res;
    double suma = 0;
    double resta = 0;
    int multi = 0;
    double division = 0;
    double a, b, c;

    switch(res){
        case 1:
            if(suma = num1 + num2){
               cout << "La respuesta de su suma es: " << suma << endl;
            }
            break;
        case 2:
            if(resta = num1 - num2){
               cout << "La respuesta de su resta es: " << resta << endl;
            }
            break;
        case 3:
           if(multi = num1 * num2){
               cout << "La respuesta de su multiplicacion es: " << multi << endl;
            }
            break;
        case 4:
           if(division = num1 / num2){
               cout << "La respuesta de su division es: " << division << endl;
            }
            break;
        case 5:
            cout << "Ingrese un numero: " << endl;
            cin >> a;
            cout << "Ingrese el exponente a elevar: " << endl;
            cin >> b;
            c=pow(a,b);
            cout <<"El numero "<<a << endl <<"elevado a la potencia "<<b<< endl<<"es :  "<<c<< endl;
            break;
        default:
            cout <<"No has ingresado una opcion valida";
            break;
    }
}   

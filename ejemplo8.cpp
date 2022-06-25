#include <iostream>
#include <string>

using namespace std;

int main(void){ //No estamos usando el return 0; de ultimo" 
    //Utilizando el condicional IF
    int numero_1 = 0, numero_2 = 0;
    cout << "Escriba el primer numero: ";
    cin >> numero_1;
    cout << "Escriba el segundo numero: ";
    cin >> numero_2;
    
    //Saber el numero mas grande
    if(numero_1 > numero_2){
        cout << "El numero 1 es mayor que el numero 2" << endl;
    }

     if(numero_1 < numero_2){
        cout << "El numero 1 es menor que el numero 2" << endl;
    }
}
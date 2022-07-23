#include <iostream>
using namespace std;

int main(void){
    //Imprimir los numeros pares entre 0 y 100
    // No debe imprimir el numero 50
    cout << "Impresion de numeros pares \n";
    for(int i=0; i<=100; i=i+2){
        if(i==50){
            cout << "No se imprimo el numero ";
        }
        cout << i << endl;
    }

    //Imprimir los numeros impares entre 1 y 100
    //No debe imprimir el numero 57
    cout << "Impresion de numeros impares \n";
    for(int i = 1; i<=100; i=i+2){
        if(i == 57){
            cout << "No se imprimo el numero ";
        }
        cout << i << endl;
    }

}
#include <iostream>

using namespace std;

int main(void){
    int num1 = 0, num2 = 0, num3 = 0;

    cout << "Ingrese el primer numero: " ;
    cin >> num1;
    cout << "Ingrese el segundo numero: " ;
    cin >> num2;
    cout << "Ingrese el tercer numero: " ;
    cin >> num3;

    //Encontrar el numero menor, el mediano y el mayor
    // Utilizando if's
    // if -> if else -> if else if
    // 6 4 2

    if(num1 > num2){
        if(num1 > num3){
        cout << "El primer numero es el mayor" << endl;
    }if(num2 > num3){
        cout << "El segundo numero es el mediano" << endl;
        cout << "El tercer numero es el menor" << endl;
    }else{
        cout << "El tercer numero es el mediano" << endl;
        cout << "El segundo numero es el menor" << endl;
    }
    }

    if(num2 > num1){
        if( num2 > num3){
        cout << "El segundo numero es el mayor" << endl;
    }if(num3 > num1){
        cout << "El tercer numero es el mediano" << endl;
        cout << "El primer numero es el menor" << endl;
    }else{
        cout << "El primer numero es el mediano"<< endl;
        cout << "El tercer numero es el menor"<< endl;
    }
    }
}

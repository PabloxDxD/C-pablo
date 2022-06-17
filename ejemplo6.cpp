#include <iostream>
using namespace std;

int main(){
    double radio = 0;
    double volumen = 0;
    float pi = 3.141592654;

    //Pedimos el radio de la esfera
    cout << "Ingrese el radio de la esfera: ";
    cin >> radio;
    // Volumen de la esfera
    // (4/3)* pi * radio^3
    volumen = (4*pi*(radio*radio*radio))/3;

    cout << "El volumen es: " << volumen << endl;

    return 0;
}
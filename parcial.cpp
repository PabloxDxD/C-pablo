#include <iostream>
#include <string>
using namespace std;

int main(){
    string nombre;
    string apellido;
    int edad;
    string direccion;

    cout << "Ingrese su nombre: ";
    cin >> nombre;
    cout << "Ingrese su apellido: ";
    cin >> apellido;
    cout << "Ingrese su edad: ";
    cin >> edad;
    cout << "Ingrese su direccion: ";
    cin >> direccion;

    cout << "Su nombre es: " << nombre << endl;
    cout << "Su apellido es: " << apellido << endl;
    cout << "Su edad es: " << edad << endl;
    cout << "Su direccion es: "<< direccion << endl;

    return 0;
}
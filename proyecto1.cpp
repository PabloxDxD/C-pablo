/*
1. Solicitar el nombre de un estudiante.
2. Solicitar 4 notas obtenidas en el curso de matematica.
3. Promedio de las notas y las impriman.

RESTRICCIONES:
- Deben de utilizar para el nombre un string
- Para almacenar las notas deben utilizar un array
- Para imprimir los resultados, deben visualizarse el nombre del 
alumno y el promedio obtenido en el curso de matematicas.
- Al terminar el flujo, debera de volver a preguntar el nombre de otro estudiante para calcular otro promedio
*/

#include <iostream>
#include <string>
using namespace std;

int main(void){
    float promedio = 0;
    float notas [4];
    string nombre = {

    };
    while(true){
        cout << "Ingresa el nombre del estudiante: ";
        cin >> nombre;

        for(int i = 1; i<5; i++){
        cout << "Ingresa las notas de matematicas de " << nombre << ": ";
        cin >> notas[i];
        }

        for(int i = 0; i < 1; i++){
            promedio = notas[1] + notas[2]+ notas[3]+notas[4];
            promedio = promedio / 4;
                cout << "El promedio de "<< nombre << " es de: "<< promedio << endl;
        }
    }
}
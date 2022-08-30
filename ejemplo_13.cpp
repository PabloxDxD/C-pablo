#include <iostream>
#include <string>
using namespace std;


int main(void){
    //Ejemplo utilizando Arrays

    // Declarando el Arrays
    string nombres[11] = {
        "Pablo",
        "Raul",
        "Angel",
        "Javier C",
        "Sharon",
        "Javier G",
        "Ximena",
        "Carlos",
        "Rodrigo",
        "Erika",
        "Teacher"
    };
    
    int edades[11] = {16,16,16,15,16,16,16,16,16,16,19};
    // Pablo, Raul, Angel, Javier C, Sharon, Javier G, Ximena, Carlos, Rodrigo, Erika
    // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    // Posiscion de inicio de los indices?
    // La primera posicion es 0 y la ultima es: n-1
    // Los indices van del 0 al 9
    // Agregar un for, impresion de todos los datos
    for(int i = 0; i < 11; ++i){
        cout << "La edad de " << nombres[i] << " es de "<<edades[i] << endl;   
    }

}
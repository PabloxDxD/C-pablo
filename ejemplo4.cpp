// Solicitu de datos en consola
#include <iostream>
#include <string>
using namespace std;

int main(){
    //declaramos todas las variables a utilizar
    string nombre;
    int edad;
    string fecha_de_nacimiento; // declarar fecha de nacimiento
    bool casado;

    // Solicitamos los datos
    cout << "Ingrese su nombre: ";
    cin >> nombre;
    cout << "\nIngrese su edad: ";
    cin >> edad;
    cout << "\nIngrese su fecha de nacimiento: ";
    cin >> fecha_de_nacimiento;
    cout << "\nIngrese si esta casado o no: "; // si o no

    string respuesta;
    cin >> respuesta;
    if(respuesta == "si"){
        casado = true;
    }else{
        casado = false;
    }

    //Imprimimos los datos
    cout << "Su nombre es: " << nombre << endl;
    cout << "Su edad es: " << edad << endl;
    cout << "Su fecha de nacimiento es: " << fecha_de_nacimiento << endl;
    // Si casado es == true -> cout <<"Si esta casado"
    // Si casado == false -> cout <<"No esta casado"
    if (casado == true)
        cout << "Si esta casado";
    if (casado == false)
        cout << "No esta casado" << endl;
    return 0;
}

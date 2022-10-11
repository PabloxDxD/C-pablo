#include <iostream>
#include <string>
using namespace std;

int main(void){
    
    int num1 = 0, num2 = 0;
    int res = 0;
    int n_anterior=1, n_actual= 1, n_siguiente=0;
	int n_deseado = 0;
    int numero = 0;
    string cadena_1 = "*";
    long double fac = 1;
    
    while(true){
        string aux = "La solucion es: ";
        string menu= "\t\tMENU\n\t1. OPERACIONES SIMPLES \n\t2. OPERACIONES COMPUESTAS\n\t3. FACTORIAL\n\t4. ROMBO CON ASTERISCOS\n\t5. SERIE DE FIBONACCI\n";
        string menu2 = "\t\tMENU\n\t1. SUMA\n\t2. RESTA\n\t3. MULTIPLICACION\n\t4. DIVISION";
        
        cout << menu;
        cin >> res;

        switch (res){
            case 1:
                cout << "Ingrese el primer numero: ";
                cin >> num1;
                cout << "Ingrese el segundo numero: ";
                cin >> num2;

                cout << menu2;
                cin >> res;
                switch (res){
                    case 1:
                        cout << aux << num1 + num2 << endl;
                    break;

                    case 2:
                        cout << aux << num1 - num2 << endl;
                    break;

                    case 3:
                        cout << aux << num1 * num2 << endl;
                    break;

                    case 4:
                        if(num2!=0){
                            cout << aux << num1 / num2 << endl;
                        }else{
                            cout << "No se puede dividir entre 0" << endl;
                        }
                    break;
                    default:
                        cout << "Selecciona una respuesta correcta" << endl;
                }
                break;
            case 2:
                cout << "Multiplicacion con sumas"<< endl;
                cout << "Ingrese el primero numero: ";
                cin >> num1;

                cout << "Ingrese el segundo numero: ";
                cin >> num2;

                for(int j = 0; j<num2; j++){
                    res += num1;
                }

                cout << "El resultado de la operacion es: " << res << endl;

            break;

            case 3:
                cout << "Ingresa un numero para poder calcular su factorial: " << endl;
                cin >> numero;
        
                for(int i = 1; i<=numero; i++){
                    fac = fac * i;
                    cout << "El factorial de " << numero <<" es: " << fac << endl;
                }
            break;

            case 4:
                cout << "Ingrese un numero para el tamanio de su rombo: ";
                cin >> numero;

                for(int a = 1; a<=numero; a++){
                    cout << cadena_1;
                    cadena_1 += "*";
                    cout << "\n";
                }

                cadena_1.erase(0,1);
                for(int a = numero; a >= 0; a--){
                    cadena_1 = cadena_1.erase(0,1);
                    cout << cadena_1;
                    cout << "\n";
                    
                }
            break;

            case 5:
                cout << "Escribe el numero que deseas calcular con la serie de Fibonnaci: ";
                cin >> n_deseado;
            
                cout <<"0 + 1 = 1"<< endl;
                
                while(n_anterior < n_deseado){
                    n_siguiente = n_anterior + n_actual;
                    cout << n_anterior << " + " << n_actual << " = " << n_siguiente << endl;
                    n_actual = n_anterior;
                    n_anterior = n_siguiente;
                }
                cout << "El numero de Fibonnaci es: " << n_siguiente << endl;
            break;

        default:
            cout <<"Adios";
            break;
        }
    }
}
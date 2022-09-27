// Serie de Fibonnaci

#include <iostream>
using namespace std;

int main(void){
	// Son sumas 
	// Solicitar el numero que se desea calcular
	// Debemos trabajar las sumas 
	while(true){
	
		int n_anterior=1, n_actual= 1, n_siguiente=0;
		int n_deseado = 0;
		
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
	}
}

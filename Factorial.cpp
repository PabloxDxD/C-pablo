#include <iostream>
using namespace std;

int main(void){
	int numero = 0, fac = 1;
	
	cout << "Ingresa un numero para poder calcular su factorial: " << endl;
	cin >> numero;
	
	for(int i = 1; i<=numero; i++){
		fac = fac * i;
		cout << "El factorial de " << numero <<" es: " << fac << endl;
	}
}

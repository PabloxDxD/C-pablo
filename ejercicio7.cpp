#include <iostream>
#include <math.h>
using namespace std;

int main(void){
	int a,b,c;
	double x1, x2;
	
	cout << "Ingrese un numero para el valor de a: ";
	cin >> a;
	
	cout << "Ingrese un numero para el valor de b: ";
	cin >> b;
	
	cout << "Ingrese un numero para el valor de c: ";
	cin >> c;
	
	
	x1 = (-b+(sqrt(b*b-4*a*c)))/(2*a);
	
	x2 = (-b-(sqrt(b*b-4*a*c)))/(2*a);
	
	cout << "El resultado de x1 es: "<< x1 << endl;
	cout << "El resultado de x2 es: "<< x2 << endl;
	
}	

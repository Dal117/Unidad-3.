#include "iostream"
#include <stdio.h>
using namespace std;

int main()
{
		float Altura,Base;
		float Superficie, Perimetro;
		//Mensaje de Bienvenida
		cout << "Hola! Este programa 1.10 Calcula la superficie y el perimetro de un rectangulo" << "<<\n";
		
		//Se declaran los numeros que se sumarán (pueden ser decimales)
		
			//Se pide el primer número
		cout << "Por favor! ingrese el valor de la Base:	" << "\n";
			//Se asigna el primer valor a Base
		cin >> Base;
			//Se pide el segundo valor
		cout << "Por favor ingrese el valor de la Altura:	" << "\n";
			//Se asigna el segundo valor a Altura
		cin >> Altura;
		
		Superficie= Base*Altura;
		Perimetro= 2*(Base+Altura);
		
		//Se muestra el resultado
		printf ("\n La superficie del rectangulo es %5.2f \n", Superficie);
		printf ("\n El perimetro del rectangulo es %5.2f \n", Perimetro);
		
		return 0;
}

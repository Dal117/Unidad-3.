#include "iostream"
#include <stdio.h>
using namespace std;

int main()

{
	int A,B;
	float RES;
	//Mensaje de bienvenida
	cout << "Hola! Este programa 1.7 Escribir el resultado de la expresion" <<"\n";
	
	//Se declaran Los n�meros que se sumar�n (pueden ser decimales)
	
	//Se pide el primer n�mero
	cout <<"Por favor ingrese el valor de A:	" << "\n";
	//Se asigna el primer valor a A
	cin >> A;
	//Se pide el segundo n�mero
	cout <<"Por favor ingrese el valor de B:	" << "\n";
	//Se asigna el segundo valor a B
	cin >> B;

	RES=((A+B)*(A+B))/3.0;
	
	//Se muestra el resultado
	printf ("\n El resultado de la expresion es %5.4f \n", RES);
	cout << "EL RESULTADO DE LA EXPRESION ES	" << RES <<"\n";
	
	return 0;
}


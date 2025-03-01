#include "iostream"
#include "math.h"
using namespace std;

int main()
{
	//Problema 1.8 Construya un diagrama de flujo tal que calcule
	//La distancia entre dos puntos, dado como datos las coordenadas
	//de los puntos P1 y P2.
	//X1,Y1,X2,Y2
	//X1,Y1 representan las coordenadas del punto P1 en el eje de las X y Y Respectivamente
	//X2,Y2 representan las coordenadas del punto P2 en el eje de las X y Y Respectivamente
	
	float X1,Y1,X2,Y2,DIS;
	
	//Entrada de datos
	cout <<" Escribe la coordenada X del primer punto " <<"\n";
	cin >> X1;
	
	cout <<" Escribe la coordenada Y del primer punto " <<"\n";
	cin >> Y1;
	
	cout <<" Escribe la coordenada X del segundo punto " <<"\n";
	cin >> X2;
	
	cout <<" Escribe la coordenada Y del segundo punto " <<"\n";
	cin >> Y2;
	
	//Calculo
	DIS=sqrt(pow((X1-X2),2)+pow((Y1-Y2),2));
	
	//Se imprime resultados
	cout <<" La distancia entre el punto ("<<X1<<","<<Y1<<") y el punto ("<<X2<<","<<Y2<<")es "<<DIS<<"\n";
	
	return 0;

}

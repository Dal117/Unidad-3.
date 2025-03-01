#include "iostream"
using namespace std;

int main()
{
	//Problema 1.6 Construya un diagrama de flujo que calcule e imprima el numero de seghundos
	//que hay en un determinado numero de dias.
	
	int DIAS;
	float SEGUNDOS;
	
	//Entrada de datos
	cout <<" Escribe el numero de dias para calcular los segundos " <<"\n";
	cin >> DIAS;
	
	//CALCULO
	SEGUNDOS=DIAS*24*60*60;
	
	//Se imprime resultados
	cout <<" En "<<DIAS<<" dias, hay "<<SEGUNDOS<<" segundos." <<"\n";
	cin >> DIAS;
	return 0;

}

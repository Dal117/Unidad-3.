#include "iostream"
#include "string"

using namespace std;

int main()
{
	//Problema 1.3 Escribe un programa tal que dado como datos el nombre del dinosaurio
	//su peso y su longitud, expresando estos ultimos en libras y pies respectivamente
	//escriba el nombre del dinosaurio, su peso expresado en kilogramos y la longitud expresada en metros
	
	//Declaracion de variables
	string NOMBRE;
	float PESOENTONELADAS, LONGITUDENPIES;
	float PESOKILOS, LONGITUDENMETROS;
	
	//	Entrada de datos
	
	cout <<" Escribe el nombre del dinosaurio	" <<"\n";
	cin >> NOMBRE;
	
	cout <<" Escribe el peso del dinosaurio en toneladas	" <<"\n";
	cin >> PESOENTONELADAS;
	
	cout <<" Escribe la longitud del dinosaurio en pies	" <<"\n";
	cin >> LONGITUDENPIES;
	
	//CALCULO
	PESOKILOS=PESOENTONELADAS*1000;
	LONGITUDENMETROS=LONGITUDENPIES*0.3047;
	
	//SE IMPRIME RESULTADOS
	cout <<" El peso en kilos del dinosaurio " << NOMBRE<< " es " <<PESOKILOS<< " y la longitud en metros es " <<LONGITUDENMETROS<<"\n";
	return 0;
}

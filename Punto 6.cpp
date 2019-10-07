#include <iostream>
#include <math.h>
using namespace std;

int Tiempo=10;
double Distancia, Gravedad = 9.8;
double DistanciaRecorrida(int, double, double);

int main(){
	
	cout<<"La distancia que recorre un cuepo en caida en 10 segundos cada segundo es\n";
	DistanciaRecorrida(Tiempo, Distancia, Gravedad);
	
	return 0;
}

double DistanciaRecorrida(int Tiempo, double distancia, double gravedad){
	int i=0;
	for (i=0; i<=Tiempo; i++ ){
		Distancia = (Gravedad * pow(i, 2))/2;
		cout<<"Distancia en el segundo "<<i<<": "<<Distancia<<" kilometros"<<endl;
	}
	
	return distancia;
}

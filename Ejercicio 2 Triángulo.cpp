#include<iostream>
using namespace std;

int segmento[3], mayor=0, Posicion;

int main(){
	
	//Dar valor a los segmentos 
	
	for(int i=0; i<3; i++){
		
		cout<<"Escriba el segmento numero "<<i+1<<" > ";
		cin>>segmento[i];
		
	}
	
	//Determinar el segmento mayor
	
	for(int i=0; i<3; i++){
		
		if(segmento[i]>mayor){
			
			mayor=segmento[i];
			Posicion = i;
			
		}
		
	}
	
	//Comparar el segmento mayor con la suma de los segmentos restantes
	
	if(segmento[Posicion] > (segmento[0]+segmento[1]+segmento[2]-segmento[Posicion])){
		
		cout<<"No es posible formar un triangulo\n";
		
	}
	
	//Si se puede formar un triángulo, el perímetro será la suma de los segmentos previamente valorados
	
	else{
		
		cout<<"El perimetro del triangulo formado por los segmentos es: "<<segmento[0]+segmento[1]+segmento[2]<<" unidades\n";
		
	}
	
	return 0;
	
}

#include <iostream>

using namespace std;

int NMayor(int*, int);

int main(){
	
	const int Tamanio=5;
	int Vector[Tamanio]={5, 1, 8, 9, 4};
	
	cout<<"El numero mayor del arreglo es > "<<NMayor(Vector, Tamanio);
		
	return 0;
	
}

int NMayor(int *PVector, int Tamanio){
	
	int Mayor=0;
	
	for(int c=0; c<Tamanio; c++){
		
		if(*PVector > Mayor){
			
			Mayor = *PVector;
			
		}
		
		PVector++;
		
	}
	
	return Mayor;
	
}

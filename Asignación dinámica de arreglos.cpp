#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	
	int Cantidad;
	
	int *Vector; 
	
	cout<<"Escriba la cantidad de notas > ";
	cin>>Cantidad;
	
	Vector = new int[Cantidad];
	
	for(int c=0; c<Cantidad; c++){
		
		cout<<"Ingrese la nota "<<c+1<<" > ";
		cin>>Vector[c];
		
	}
	
	for(int c=0; c<Cantidad; c++){
		
		cout<<"Nota "<<c+1<<" > "<<Vector[c]<<endl;
		
	}
	
	delete[] Vector;
	
	return 0;
	
}

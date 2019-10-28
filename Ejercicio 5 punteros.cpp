#include <iostream>

using namespace std;

int Cantidad;

int *Arreglo;

int main(){
	
	cout<<"Ingrese la cantidad de elementos del arreglo > ";
	cin>>Cantidad;
	
	Arreglo = new int[Cantidad];
	
	for(int i=0; i<Cantidad; i++){
		
		cout<<"Digite un dato > ";
		cin>>*(Arreglo+i);
		
	}
	
	
	
	//Algoritmo de ordenamiento
	
	for(int i=0; i<Cantidad; i++){
		
		int Menor=999;
		
		for(int j=i; j<Cantidad; j++){
			
			if(*(Arreglo+j) < Menor){
				
				Menor = *(Arreglo+j);
				*(Arreglo+j)=*(Arreglo+i);
				*(Arreglo+i)=Menor;
				
			}
			
		}
		
	}
	
	//Fin del algoritmo de ordenamiento
	
	cout<<"Elementos ordenados de forma ascendente\n\n";
	
	for(int i=0; i<Cantidad; i++){
		
		cout<<*(Arreglo+i);
		
	}
	
	delete[] Arreglo;
	
	return 0;
	
}

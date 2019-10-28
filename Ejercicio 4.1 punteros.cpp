#include <iostream>

using namespace std;

int main(){
	
	int Vector[100], Cantidad, Menor=99999;
	int *Pvector, *PMenor;
	
	cout<<"Ingrese la cantidad de datos del vector > ";
	cin>>Cantidad;
	
	for(int c=0; c<Cantidad; c++){
		
		cout<<"Ingrese el elemento del vector ["<<c<<"] > "; 
		cin>>Vector[c];
		
	}
	
	Pvector=Vector;
	
	for(int c=0; c<Cantidad; c++){
		
		if(*Pvector < Menor){
			
			Menor=*Pvector;
			PMenor=&Vector[c];
			
		}	
		
		Pvector++;
		
	}
	
	cout<<"El menor elemento del vector es > "<<Menor<<endl;
	cout<<"Posicion > "<<PMenor<<endl;
	
	return 0;
	
}

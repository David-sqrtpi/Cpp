#include <iostream>

using namespace std;

int main(){
	
	int Arreglo[10];
	
	int *dir_Arreglo;
	
	dir_Arreglo = Arreglo;
	
	for(int i = 0; i < 10; i++){
		
		cout<<"Ingrese el numero "<<i+1<<" :";
		cin>>Arreglo[i];
		
	}
	
	system("cls");
	
	for(int i = 0; i < 10; i++){
		
		if(*dir_Arreglo % 2 == 0){
			
			cout<<"El elemento del arreglo en la posicion ["<<i<<"] es par, numero: "<<*dir_Arreglo<<" posicion en memoria: "<<dir_Arreglo<<endl;
			
			
		}
		
		dir_Arreglo++;
		
	}
	
	return 0;
	
}

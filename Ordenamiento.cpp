#include <iostream>
using namespace std;

int Numeros[10], N_Menor=999;

int main(){
	
	for(int i=0; i<10; i++){
		
		cout<<"Escriba el elemento "<<i+1<<" para ordenar > ";
		cin>>Numeros[i];
		
	}
	
	for(int i=0; i<10; i++){
	
		N_Menor=999;
				
		for(int j=i; j<10; j++){
			
			if(Numeros[j]<N_Menor){
			
				N_Menor=Numeros[j];	
				Numeros[j]=Numeros[i];
				Numeros[i]=N_Menor;
				
			}
			
		}	
				
	}
	
	for(int i=0; i<10; i++){
		
		cout<<Numeros[i]<<endl;
		
	}
	
	return 0;	
	
}

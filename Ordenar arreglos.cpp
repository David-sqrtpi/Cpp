#include <iostream>

using namespace std;
int ordenar[100], i, j, a, aux;
int main(){
	

	cout<<"Digite cuantos datos va a ordenar... \n"<<endl<<"\t\t|\n\t\t|\n\t\tV\n\n\t\t";
	cin>>a;
	system("cls");
	
	for(i = 0; i < a; i++){
		cout<<"Digite el dato "<<i+1<<endl;
		cin>>ordenar[i];
		system("cls");
	}
	
	cout<<"Datos almacenados\n";
	for(i = 0; i < a; i++){
		cout<<ordenar[i]<<" ";		
	}
	
	for(i = 0; i < a; i++)
	{
		
		for(j = i+1; j < a; j++)
		{
		if(ordenar[i]>ordenar[j])
		{
			aux=ordenar[j];
			ordenar[j]=ordenar[i];
			ordenar[i]=aux;		
    	}
		}
    	
	
	}
	
	cout<<"\nDatos ordenados... \n";
	for(i=0; i<a; i++)
	{
		cout<<ordenar[i]<<" ";
	}

	return 0;
}

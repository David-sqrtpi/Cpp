#include <iostream>

using namespace std;

int Fibonacci(int);

int Numero;

int main(){
		
	do{
		
		cout<<"Ingrese el numero de elementos de la sucesion para visualizar > ";
		cin>>Numero;
			
	}
	while(Numero <= 0);
	
	cout<<"Sucesion de fibonacci hasta el elemento "<<Numero<<" > ";
	
	for(int c=1; c<=Numero; c++){
		
		if(Numero == c){
			
			cout<<Fibonacci(c)<<".";	
			
		}
		else{
			
			cout<<Fibonacci(c)<<", ";	
			
		}
		
	}
		
	return 0;
	
}

int Fibonacci(int Numero){
	
	if(Numero == 1){
		
		Numero = 0;
						
	}
	
	else if(Numero == 2){
		
		Numero = 1;
		
	}
	
	else{
		
		Numero = Fibonacci(Numero-1)+Fibonacci(Numero-2);
		
	}
		
	return Numero;
	
}

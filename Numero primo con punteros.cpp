#include <iostream>

using namespace std;

int Numero, *d_Numero, Primo;

int main(){
	
	cout<<"Ingrese un número > ";
	cin>>Numero;
	
	d_Numero = &Numero;
	
	for(int i = 2 ; i <= *d_Numero ; i++ ){
		
		if(*d_Numero % i == 0){
			
			Primo++;
			
		}
		
	}
	
	if(Primo > 1){
		
		cout<<"El numero ingresado \""<<*d_Numero<<"\" no es primo\n";
		cout<<"La posicion de memoria de \""<<*d_Numero<<"\" es : "<<d_Numero;
		
	}
	
	else{
		
		cout<<"El numero ingresado \""<<*d_Numero<<"\" es primo\n";
		cout<<"La posicion de memoria de \""<<*d_Numero<<"\" es : "<<d_Numero;
		
	}
	
	return 0;
	
}

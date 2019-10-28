#include <iostream>

using namespace std;

void Intercambio(float*, float*);

int main(){
	
	float Numero1=2.2, Numero2=5.65; 
	
	cout<<"Valor del numero 1 > "<<Numero1<<endl; 
	cout<<"Valor del numero 2 > "<<Numero2<<endl<<endl; 
	
	Intercambio(&Numero1, &Numero2);
	
	cout<<"Nuevo valor del numero 1 > "<<Numero1<<endl;
	cout<<"Nuevo valor del numero 2 > "<<Numero2<<endl;
		
	return 0;
	
}

void Intercambio(float *PNumero1, float *PNumero2){
	
	float Aux=*PNumero1;
	
	*PNumero1=*PNumero2;
	*PNumero2=Aux;
	
}

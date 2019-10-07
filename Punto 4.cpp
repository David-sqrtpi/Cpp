#include <iostream>
using namespace std;

int Numero;
int factorial(int);

int main(){
	
	cout<<"Digite un numero para hallar su factorial... \n";
	cin>>Numero;
	cout<<"El factorial de "<<Numero<<" es igual a "<<factorial(Numero)<<"\n";
	return 0;
}

int factorial(int x){
	int i;
	if (Numero == 0){
		x = 1;
    }
	else{
		for (i=1; i<Numero; i++){
			x=x*i;
		}
	}
	return x;
}

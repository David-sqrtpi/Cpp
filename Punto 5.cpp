#include <iostream>
using namespace std; 

int Numero;
bool NumeroPrimo, Primo(int, bool);

int main (){
	
	cout<<"Digite un numero para determinar si es un numero primo\n";
	cin>>Numero;
	if (Primo(Numero, NumeroPrimo) == true){
		cout<<"El numero es primo\n";		
	}
	else {
		cout<<"El numero no es primo\n";
	}
	return 0;
}
bool Primo(int Numero, bool NumeroPrimo){
	int i=1, j=0, k=0;
	for (i=1; i<=Numero; i++){
		k=Numero%i;
		if (k == 0){
			j++;
		}
	}
	if (j == 2){
		NumeroPrimo = true;
	}
	else {
		NumeroPrimo = false;
	}
	return NumeroPrimo;
}

#include <iostream>
using namespace std;

int Numero;
void A(int), B(int);

int main(){
	
	cout<<"Escriba el numero > ";
	cin>>Numero;
	A(Numero);
	
	return 0;
	
}

void A(int Numero){
	
	cout<<"El numero es: "<<Numero<<endl;
	cout<<"Ahora otro > ";
	cin>>Numero;
	B(Numero);
	
	return;
	
}

void B(int Numero){
	
	cout<<"El numero es: "<<Numero<<endl;
	cout<<"Otro mas > ";
	cin>>Numero;
	A(Numero);
	
	return ;
	
}

//Por lo tanto en variables globales si no tiene parámetros modificará a la variable en todo el programa
//Si tiene parámetros modifica solo a esa función
//Si todas las funciones tienen ese parámetro en común entonces se cambiará en aquellos

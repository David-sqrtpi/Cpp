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

//Por lo tanto en variables globales si no tiene par�metros modificar� a la variable en todo el programa
//Si tiene par�metros modifica solo a esa funci�n
//Si todas las funciones tienen ese par�metro en com�n entonces se cambiar� en aquellos

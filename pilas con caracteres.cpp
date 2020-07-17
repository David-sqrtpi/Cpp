#include <iostream>


using namespace std;

struct nodo{
	
	char dato;
	nodo *siguiente;	
	
}*Cima = NULL;

void agregar(nodo *&, char);
void quitar(nodo*&, char &);

int main(){
	
	int opcion = 0;
	
	char dato;
	
	do{
		
		cout<<"1. Ingresar un caracter a la pila\n";
		cout<<"2. Mostrar los elementos de la pila\n";
		cout<<"3. Salir\n\n";
		cout<<"Opcion > ";
		cin>>opcion;
		switch(opcion){
			
			case 1:
				system("cls");
				cout<<"Ingrese el caracter para ingresar a la pila > ";
				cin>>dato;
				agregar(Cima, dato);
			break;
			
			case 2:
				system("cls");
				while(Cima != NULL){
					
					quitar(Cima, dato);
					
					if(Cima != NULL){
						
						cout<<dato<<", ";
						
					}
					else{
						
						cout<<dato<<".";
						
					}
					
				}
				
				cout<<endl<<endl;
				system("pause");
				system("cls");
				
			break;
			
			case 3:
				exit(0);	
			break;
			
			default:
				system("cls");
				cout<<"Ingrese una opcion valida\n\n";
				system("pause");
				system("cls");
				
			}
		
	}
	while(opcion != 3);
	
	return 0;
	
}

void agregar(nodo *&Cima, char x){
	
	system("cls");
	
	nodo *nuevoNodo = new nodo();
	nuevoNodo -> dato = x;
	nuevoNodo -> siguiente = Cima;
	Cima = nuevoNodo;
	
	cout<<x<<" se agrego a la pila\n\n";
	system("pause");
	system("cls");
	
	return;
	
}

void quitar (nodo *&Cima, char &x){
	
	nodo *aux = Cima;
	x = aux -> dato;
	Cima = aux -> siguiente;
	delete aux;
	
	return;
	
}

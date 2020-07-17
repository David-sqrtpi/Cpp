#include <iostream>
#include <string.h>

using namespace std;

struct cliente{
	
	int cc;
	char nombre[30];
	int numeroCuenta;
	cliente *siguiente;
	
}*primero = NULL, *ultimo = NULL;

void atender(cliente *&, cliente *&, int, int, char[]);
void clientesAtendidos(cliente *&, cliente *&, int &, char[], int &);

int main(){
	
	int opcion, cc, numeroCuenta;
	char nombre[30];
	
	do{
		
		cout<<"1. Ingresar datos del cliente\n";
		cout<<"2. Mostrar los clientes\n";
		cout<<"3. Salir\n\n";
		cout<<"Digite una opcion > ";
		cin>>opcion;
		
		switch(opcion){
			
			case 1:
				system("cls");
				cout<<"Ingrese el documento del cliente > ";
				cin>>cc;
				cout<<"Ingrese el numero de cuenta del cliente > ";
				cin>>numeroCuenta;
				cout<<"Ingrese el nombre del cliente > ";
				fflush(stdin);
				cin.getline(nombre, 30, '\n');
				
				atender(primero, ultimo, cc, numeroCuenta, nombre);
			break;
			
			case 2:
				
				system("cls");
				if(primero == NULL or ultimo == NULL){
		
					cout<<"No hay clientes registrados hoy\n\n";
					
				}
				
				while(primero != NULL){
					
					clientesAtendidos(primero, ultimo, cc, nombre, numeroCuenta);
											
					cout<<"Nombre del cliente: "<<nombre<<endl;
					cout<<"Documento del cliente: "<<cc<<endl;
					cout<<"Numero de cuenta del cliente: "<<numeroCuenta<<endl<<endl;
					cout<<"-------------------------------------------------------"<<endl<<endl;

				}
				system("pause");
				system("cls");
			break;
			
			case 3:
				exit(0);
			break;
			
			default:
				system("cls");
				cout<<"Escriba un dato valido\n\n";
				system("pause");
				system("cls");
							
		}
	}
	while(opcion != 3);
	return 0;
	
}

void atender(cliente *& primero, cliente *& ultimo, int cc, int numeroCuenta, char nombre[]){
	
	cliente *nuevoCliente = new cliente();
	
	nuevoCliente -> cc = cc;
	strcpy(nuevoCliente -> nombre, nombre);
	nuevoCliente -> numeroCuenta = numeroCuenta;
	nuevoCliente -> siguiente = NULL;
	
	if(primero == NULL){
		
		primero = nuevoCliente;
		
	}
	else{
		
		ultimo -> siguiente = nuevoCliente;
		
	}
	
	ultimo = nuevoCliente;
	
	system("cls");
	
	cout<<"Se ha ingresado el cliente\n\n";
	
	system("pause");
	system("cls");
	
	
}

void clientesAtendidos(cliente *&primero, cliente *&ultimo, int &cc, char nombre[], int &numeroCuenta){
				
		cliente *aux = primero;
		cc = primero -> cc;
		strcpy(nombre, primero -> nombre);
		numeroCuenta = primero -> numeroCuenta;
		if(primero == ultimo){
			
			primero = NULL;
			ultimo = NULL;
			
		}
		else{
			
			primero = primero -> siguiente;
			
		}
		
		delete aux;
			
}


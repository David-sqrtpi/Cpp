#include <iostream>
#include <conio.h>
#include <locale.h>
#include <string.h>
using namespace std;

int Opcion, i=0, Save, Save_2, Cantidad = 0, j=0, h;
void Menu(), Comprar(), Vender(), BuscarCompra(), ListaProveedores(), ListaClientes(), Inventario(), BuscarVenta();
bool Proveedores = false, Clientes = false, Productos = false;
char BuscarProducto[20];

struct Datos{
	char Nombre[20];
	char Apellido[20];
	double Documento;
	double NIT;
}Cliente[100], Proveedor[100];

struct Articulo{
	
	char Nombre[20];
	int Cantidad;
	
}Producto[100];

int main(){
	
	cout<<"i: "<<i<<endl;
	setlocale(LC_ALL, "spanish");
	Menu();
	
	return 0;
	
}

void Menu(){
	
	cout<<"i: "<<i<<endl;
	do{
		cout<<"1. Comprar\n";
		cout<<"2. Vender\n";
		cout<<"3. Ver lista de proveedores\n";
		cout<<"4. Ver lista de clientes\n";
		cout<<"5. Inventario\n";
		cout<<"6. Salir\n\n";
		cout<<"Opcion > ";
		cin>>Opcion;
		switch(Opcion){
			
			case 1:
				BuscarCompra();
			break;	
			
			case 2:
				if(Productos == false){
					cout<<"No hay ningún producto disponible\n";
				}
				else{
					BuscarVenta();
				}
				
			break;
			
			case 3:
				if(Proveedores == false){
					cout<<"No hay ningún proveedor en el sistema\n";
				}
				else{
					ListaProveedores();
				}
				
			break;
			
			case 4:
				if(Clientes == false){
					cout<<"No hay ningún cliente en el sistema\n";
				}
				ListaClientes();
			break;
			
			case 5:
				if(Productos == false){
					cout<<"No hay productos en el sistema\n";
				}
				else{
					Inventario();
				}
				
			break;
			
			case 6:
				cout<<"Saliendo...\n";
			break;
			
			default:
				cout<<"Digite una opción válida\n";
			
		}
	}while(Opcion !=6);
	
	return ;
	
}

void BuscarCompra(){
	
	cout<<"i: "<<i<<endl;
	int Usado = 0;
	cout<<"Proveedor n°: "<<i<<endl;
	cout<<"Escriba el nombre del proveedor > ";
	cin>>Proveedor[i].Nombre;
	cout<<"Escriba el apellido del proveedor > ";
	cin>>Proveedor[i].Apellido;
	
	for(int ii=0; ii<100; ii++){
		if(strcmp(Proveedor[i].Nombre, Proveedor[ii].Nombre) == 0 && strcmp(Proveedor[i].Apellido, Proveedor[ii].Apellido) == 0){	
			Save = ii;
			Usado++;
		}
	}
	
if(Usado > 1){
		
		Comprar();
			
	}
	else{
	 
		cout<<"Escriba el NIT del proveedor > ";
		cin>>Proveedor[i].NIT;
		i++;
		Proveedores = true;
		cout<<i<<endl;
		Comprar();			
	
	}
	
	
	return ;
	
}

void Vender(){
	
	
	
	
	
	int ii=0, Articulos_2, Contador, CantidadVenta;
	
	cout<<"¿Cuántos artículos desea vender? > ";
	cin>>Articulos_2;
	for(Contador = 0; Contador < Articulos_2; Contador++){
		
		
		cout<<"i: "<<i<<endl;
		cout<<"Estoy vendiendo\n";
		cout<<"Escriba el artículo que quiere vender > ";
		cin>>BuscarProducto;
		cout<<"Buscando coincidencias para "<<BuscarProducto<<endl;
		for(ii=0; ii<=100; ii++){
			cout<<"Comparando "<<ii<<endl;
			if(strcmp(BuscarProducto, Producto[ii].Nombre) == 0){
				Save_2 = ii;
			}
		}
		ii=Save_2;
		cout<<ii;
		fflush(stdin);
		cout<<"Escriba la cantidad de "<<Producto[ii].Nombre<<" que quiere vender > ";
		cin>>CantidadVenta;
		cout<<ii<<endl;
		fflush(stdin);
		cout<<Producto[ii].Cantidad<<endl;
		cout<<Producto[ii].Nombre<<endl;
		Producto[ii].Cantidad = Producto[ii].Cantidad - CantidadVenta;
		cout<<"Ahora hay "<<Producto[ii].Cantidad<<" unidades de "<<Producto[ii].Nombre<<endl; 
			
	
	
	
	
	
	
	
	return ;
	
}

void Comprar(){
	
	int ii=0, Articulos, Contador;
	cout<<"¿Cuántos artículos desea comprar? > ";
	cin>>Articulos;
	for(Contador = 0; Contador < Articulos; Contador++){
		
		cout<<"i: "<<i<<endl;
		cout<<"Estoy comprando\n";
		cout<<"Escriba el artículo que quiere comprar > ";
		cin>>Producto[j].Nombre;
		cout<<"Buscando coincidencias para "<<Producto[j].Nombre<<endl;
		for(ii=100; ii>=0; ii--){
			cout<<"Comparando "<<ii<<endl;
			if(strcmp(Producto[j].Nombre, Producto[ii].Nombre) == 0){
				Save_2 = ii;
			}
		}
		ii=Save_2;
		cout<<ii;
		fflush(stdin);
		cout<<"Escriba la cantidad de "<<Producto[ii].Nombre<<" que quiere adquirir > ";
		cin>>Cantidad;
		cout<<ii<<endl;
		fflush(stdin);
		cout<<Producto[ii].Cantidad<<endl;
		cout<<Producto[ii].Nombre<<endl;
		Producto[ii].Cantidad = Producto[ii].Cantidad + Cantidad;
		cout<<"Ahora hay "<<Producto[ii].Cantidad<<" unidades de "<<Producto[ii].Nombre<<endl; 
		j++;
		Productos = true;
		
	}
	
	
	return ;
	
}

void ListaProveedores(){
	int Todos = i, j;
	cout<<"Nombre"<<"\t\t"<<"Apellido"<<"\t\t"<<"NIT"<<endl;
	for(j = 0; j < Todos; j++){
		cout<<Proveedor[j].Nombre<<"\t\t"<<Proveedor[j].Apellido<<"\t\t"<<Proveedor[j].NIT<<endl;
	}
	return ;
	
}

void ListaClientes(){

	return ;

}

void Inventario(){
	
	return; 
	
}

void BuscarVenta(){
	
	cout<<"i: "<<i<<endl;
	int Usado = 0;
	cout<<"Cliente n°: "<<h<<endl;
	cout<<"Escriba el nombre del cliente > ";
	cin>>Cliente[h].Nombre;
	cout<<"Escriba el apellido del cliente > ";
	cin>>Cliente[h].Apellido;
	
	for(int hh=0; hh<100; hh++){
		if(strcmp(Cliente[h].Nombre, Cliente[hh].Nombre) == 0 && strcmp(Cliente[h].Apellido, Cliente[hh].Apellido) == 0){	
			Save = hh;
			Usado++;
		}
	}
	
	if(Usado > 1){
		
		Vender();
			
	}
	else{
	 
		cout<<"Escriba el documento del cliente > ";
		cin>>Cliente[h].Documento;
		h++;
		Clientes = true;
		cout<<h<<endl;
		Vender();			
	
	}
	
	return ;
	
}

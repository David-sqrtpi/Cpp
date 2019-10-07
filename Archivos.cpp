#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<conio.h>

using namespace std;

void Escribir(), Leer(), Escribir2(), Escribir3(), Aniadir();

int Opcion;

int main(){
	
	do{
	
		cout<<"1. Crear un archivo\n";
		cout<<"2. Definir nombre del archivo y crearlo\n";
		cout<<"3. Escribir en un archivo\n";
		cout<<"4. Leer un archivo\n";
		cout<<"5. Añadir texto a un archivo\n";
		cout<<"Su opcion > ";
		cin>>Opcion;
		
		switch(Opcion){
			
			case 1:
				Escribir();
			break;
			
			case 2:
				Escribir2();
			break;	
			
			case 3:
				Escribir3();
			break;	
				
			case 4:
				Leer();
			break;	
				
			case 5:
				Aniadir();	
			break;
				
			default:
				if(Opcion > 5){
			
					cout<<"Opcion incorrecta\nSaliendo...\n";
				
				}
				 		
		}
	
	}
	
	while(Opcion <=5);
	
	
	return 0;
	
}

void Escribir(){
	
	system("cls");
	
	ofstream Archivo;
	
	Archivo.open("Escribir archivo 1.txt", ios::out); //ios::out Crea o reemplaza el archivo
	
	if(Archivo.fail()){
		
		cout<<"Ocurrio un error al abrir el archivo\n";
		exit(0);
	}
	
	cout<<"Se ha creado el archivo exitosamente\n";
	
	Archivo<<"Hola, esta es la opcion # 1, este texto lo programe.\n";
	
	Archivo.close();
	
	return ; 
	
}

void Escribir2(){
	
	system("cls");
	
	ofstream Archivo;
	string NombreArchivo;
	
	cout<<"Escriba el nombre del archivo\n";
	fflush(stdin);
	getline(cin, NombreArchivo);
	
	NombreArchivo += ".txt";
	
	Archivo.open(NombreArchivo.c_str(), ios::out);
	
	if(Archivo.fail()){
		
		cout<<"Error al crar el archivo\n";
		exit(0);
		
	}
	
	cout<<"Se ha creado el archivo "<<NombreArchivo<<" exitosamente\n";
	
	Archivo<<"Hola, esta es la opcion # 2, este texto lo programe.\n";
	
	Archivo.close();
		
	return ;
	
}

void Escribir3(){
	
	system("cls");
	
	ofstream Archivo;
	string Texto;
	
	Archivo.open("Escribir archivo 3.txt", ios::out);
	
	if(Archivo.fail()){
		
		cout<<"Error al crear el archivo\n";
		exit(0);
		
	}
	
	cout<<"Se ha creado el archivo exitosamente\n\n";
	cout<<"Escriba el texto que quiere que salga en el archivo\n";
	fflush(stdin);
	getline(cin, Texto);
	Archivo<<"Hola, esta es la opcion # 3, El siguiente texto fué escrito en la consola.\n";	
	Archivo<<Texto<<endl;
	
	Archivo.close();
		
	return ;
	
}

void Leer(){
	
	system("cls");
	
	ifstream Archivo;
	string Texto;
	
	Archivo.open("Escribir archivo 1.txt", ios::in);//Abrir el archivo para leer
	
	if(Archivo.fail()){
		
		cout<<"Error al abrir el archivo\n",
		exit(0);
		
	}
	
	while(!Archivo.eof()){//Mientras no sea el final del archivo
	
		getline(Archivo, Texto);
		cout<<Texto<<endl;
		
	}
	
	Archivo.close();
	
	return ;
	
}

void Aniadir(){
	
	system("cls");
	
	ofstream Archivo;
	
	Archivo.open("Aniadir texto.txt", ios::app);//Abrir el archivo para añadir texto
	
	if(Archivo.fail()){
		
		cout<<"Error al abrir el archivo\n";
		exit(0);
		
	}

	Archivo<<"Texto original xD\n";
	
	Archivo.close();

	return;
	
}

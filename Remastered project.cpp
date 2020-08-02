#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <iomanip>
#include <fstream>

using namespace std;

void MenuPrincipal(int, int, int), MenuSoporte(int, int, int), NuevoPiso(int, int, int), MenuNuevoPiso(int, int, int);
void MenuInfo(int, int, int), TamanioOficina(int, int, int), BuscarPiso(int, int, int), BuscarNombre(int, int, int), DatosPersonales(int, int, int);
void CambiarParametros(int, int, int), MenuDesocupar(int, int, int), Desocupar(int, int, int), Buscador(int, int, int);
void Informacion(int, int, int), InfoAdicional(int, int, int);

int Opcion, ContadorPisos=0, Piso=0, Espacio[100], Oficinas[100], Tamanio=0, Oficina=0;

bool Acceso = false;

struct Datos{
	
	char Empresa[20];
	double NIT;
	char Nombre[20];
	char Apellido[20];
	double Numero;
	bool MaximoEmpleado;
	int Space;	

}Ubicacion[100][16];

int main(){
	
	system("cls");
	
	setlocale(LC_ALL, "spanish");
	
	for(int i=0; i<=100;i++){
		for(int j=0; j<=17; j++){
			Ubicacion[i][j].MaximoEmpleado = false;
		}
	}
	
	for(int i=0; i<=100;i++){
		for(int j=0; j<=17; j++){
			Ubicacion[i][j].Space = 0;
		}
	}
	
	for(int i=0; i<=100;i++){
		Espacio[i] = 32;
	}
	
	for(int i=0; i<=100;i++){
		Oficinas[i] = 0;
	}
	
	MenuPrincipal(Opcion, ContadorPisos, Piso);
	
	getch();
	
	return 0;
	
}

void MenuPrincipal(int Opcion, int ContadorPisos, int Piso){
	
	system("cls");
	
	do{
		cout<<" ___ ___ ___ ___     ___ ___ ___ ___ ___ ___ ___ ___ ___\n";	
		cout<<"¦ M ¦ E ¦ N ¦ Ú ¦   ¦ P ¦ R ¦ I ¦ N ¦ C ¦ I ¦ P ¦ A ¦ L ¦\n";
		cout<<" ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯     ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯\n";
		cout<<"[1] Administración y soporte\n";
		cout<<"[2] Información\n";
		cout<<"[3] Salir\n\n";
		cout<<"Digite una opción > ";
		cin>>Opcion;
		switch(Opcion){
			
			case 1:
				MenuSoporte(Opcion, ContadorPisos, Piso);
			break;
			
			case 2:		
				MenuInfo(Opcion, ContadorPisos, Piso);
			break;
			
			case 3:
				system("cls");
				cout<<"Saliendo...\n";
				system("pause");
				exit(0);
			break;
			
			default:
				if (Opcion < 1 || Opcion > 3){
					system("cls");
					cout<<"Ingrese una opcion válida\n";
					system("pause");
					system("cls");
				}	
		}
	}
	while (Opcion != 3);
	
	return ;
	
}

void MenuSoporte(int Opcion, int ContadorPisos, int Pisos){
	
	system("cls");

	do{	
		cout<<" ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___     ___     ___ ___ ___ ___ ___ ___ ___ \n";	
		cout<<"¦ A ¦ D ¦ M ¦ I ¦ N ¦ I ¦ S ¦ T ¦ R ¦ A ¦ C ¦ I ¦ Ó ¦ N ¦   | Y |   ¦ S ¦ O ¦ P ¦ O ¦ R ¦ T ¦ E ¦\n";
		cout<<" ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯     ¯¯¯     ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ \n";
		cout<<"[1] Agregar un nuevo piso\n";
		cout<<"[2] Agregar una nueva oficina\n";
		cout<<"[3] Cambiar parámetros a una oficina existente\n";
		cout<<"[4] Desocupar una oficina\n\n";
		cout<<"[5] Menú principal\n";
		cout<<"[6] Salir\n\n";
		cout<<"Digite una opción > ";
		cin>>Opcion;
		switch(Opcion){
				
			case 1:
				NuevoPiso(Opcion, ContadorPisos, Piso);
			break;
			
			case 2:
				BuscarPiso(Opcion, ContadorPisos, Piso);  		    
			break;
			
			case 3:
				CambiarParametros(Opcion, ContadorPisos, Piso);
			break;
			
			case 4:
				MenuDesocupar(Opcion, ContadorPisos, Piso);
			break;	
			
			case 5:
				MenuPrincipal(Opcion, ContadorPisos, Piso);
			break;	
			
			case 6:
				system("cls");
				cout<<"Saliendo...\n";
				system("pause");
				exit(0);
			break;
			
			default:
				if (Opcion < 1 || Opcion > 6){
					system("cls");
					cout<<"Ingrese una opcion válida\n";
					system("pause");
					system("cls");
				}	
		}
		
	}
	while (Opcion != 6);

	return ; 
	
}

void NuevoPiso(int Opcion, int ContadorPisos, int Piso){
	
	system("cls");
	
	if(ContadorPisos >= 100){
		
		cout<<"Ha alcanzado el límite de pisos para este edificio\n\n";
		cout<<"Presione una tecla para regresar\n";
		getch();
		MenuSoporte(Opcion, ContadorPisos, Piso);
		
	}
	
	if(ContadorPisos == 0){
	
	Acceso = true;
	cout<<"No hay ningún piso\n\nPresione cualquier tecla para agregar el primer piso\n";	
	getch();
	system("cls");
	ContadorPisos++;
	cout<<"¡Acción realizada con éxito!\n\n";
	cout<<"Presione una tecla para continuar\n";
	getch();
	
	}
	
	else{
	
		Acceso = true;
		cout<<"Hay "<<ContadorPisos<<" pisos en este momento\n\n";
		cout<<"Presione cualquier tecla para agregar un piso\n";
		getch();
		ContadorPisos++;
		system("cls");
		cout<<"¡Acción realizada con éxito!\n\n";
		cout<<"Presione una tecla para continuar\n";
		getch();
		
	}
	
	MenuNuevoPiso(Opcion, ContadorPisos, Piso);
	
	return ;	
}

void MenuNuevoPiso(int Opcion, int ContadorPisos, int Piso){
	
	system("cls");
	
	do{
		cout<<" ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___     ___     ___ ___ ___ ___ ___ ___ ___ \n";	
		cout<<"¦ A ¦ D ¦ M ¦ I ¦ N ¦ I ¦ S ¦ T ¦ R ¦ A ¦ C ¦ I ¦ Ó ¦ N ¦   | Y |   ¦ S ¦ O ¦ P ¦ O ¦ R ¦ T ¦ E ¦\n";
		cout<<" ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯     ¯¯¯     ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ \n";
		cout<<"[1] Agregar otro piso\n";
		cout<<"[2] Agregar una oficina al último piso creado\n\n";
		cout<<"[3] Menú principal\n";
		cout<<"[4] Salir\n\n";
		cout<<"Digite una opción > ";
		cin>>Opcion;
		switch (Opcion){
			case 1:
				NuevoPiso(Opcion, ContadorPisos, Piso);
			break;
			
			case 2:
				Piso = ContadorPisos;
				TamanioOficina(Opcion, ContadorPisos, Piso);
			break;
			
			case 3:
				MenuPrincipal(Opcion, ContadorPisos, Piso);
			break;	
			
			case 4:
				system("cls");
				cout<<"Saliendo...\n";
				system("pause");
				exit(0);
			break;	
			
			default:
				if (Opcion < 1 || Opcion > 4){
					system("cls");
					cout<<"Ingrese una opcion válida\n";
					system("pause");
					system("cls");
				}
		}
	}
	
	while (Opcion != 4);
	
	return ; 
	
}

void MenuInfo(int Opcion, int ContadorPisos, int Piso){
	
	system("cls");
	
	do{
					
		cout<<" ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___\n";	
		cout<<"¦ I ¦ N ¦ F ¦ O ¦ R ¦ M ¦ A ¦ C ¦ I ¦ Ó ¦ N ¦\n";
		cout<<" ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯\n";
		cout<<"[1] Buscar empresa por nombre\n";
		cout<<"[2] Buscar empresa por piso y oficina\n";
		cout<<"[3] Informacion adicional\n";
		cout<<"[4] Menú principal\n";
		cout<<"[5] Salir\n\n";
		cout<<"Digite una opción > ";
		cin>>Opcion;
		switch(Opcion){
			
			case 1:
				Buscador(Opcion, ContadorPisos, Piso);		
			break;
			
			case 2:
				Informacion(Opcion, ContadorPisos, Piso);
			break;
			
			case 3:
				InfoAdicional(Opcion, ContadorPisos, Piso);						
			break;	
			
			case 4:
				MenuPrincipal(Opcion, ContadorPisos, Piso);
			break;
			
			case 5:
				system("cls");
				cout<<"Saliendo...\n";		
				system("pause");
				exit(0);
			break;
			
			default:
				if (Opcion < 1 || Opcion > 5){
					system("cls");
					cout<<"Ingrese una opcion válida\n";
					system("pause");
					system("cls");
				}	
			
		}
									
	}
				while(Opcion != 5);
	
	return ; 
	
}

void BuscarPiso(int Opcion, int ContadorPisos, int Piso){
	
	system("cls");
	
	if(Acceso == false){
		
		cout<<"No hay ningún piso\n\n";
		cout<<"Presione una tecla para regresar\n";
		getch();
		MenuSoporte(Opcion, ContadorPisos, Piso);
		
	}
	
	cout<<"Digite el piso\n";
	cout<<"Piso > ";
	cin>>Piso;
	if (Piso == 0 || Piso > 100){
		
		system("cls");
		cout<<"Ese piso no existe\n\n";
		cout<<"Presione una tecla para regresar\n";
		getch();
		MenuSoporte(Opcion, ContadorPisos, Piso);
		
	}
	if (ContadorPisos < Piso){
		
		system("cls");
		cout<<"Aun no existe el piso al que quiere agregar la oficina\n\n";
		cout<<"Presione una tecla para regresar\n";
		getch();
		MenuSoporte(Opcion, ContadorPisos, Piso);
		
	}
	
	TamanioOficina(Opcion, ContadorPisos, Piso);
	
	return ; 
	
}

void TamanioOficina(int Opcion, int ContadorPisos, int Piso){
	
	system("cls");
	
	if(Espacio[Piso] <= 0){
		
		cout<<"El espacio de este piso se ha agotado\nNo se pueden agregar más oficinas en este piso\n\n";
		cout<<"Presione una tecla para regresar\n";
		getch();
		MenuSoporte(Opcion, ContadorPisos, Piso);
		
	}
		
	do{
		
		cout<<" ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___     ___     ___ ___ ___ ___ ___ ___ ___ \n";	
		cout<<"¦ A ¦ D ¦ M ¦ I ¦ N ¦ I ¦ S ¦ T ¦ R ¦ A ¦ C ¦ I ¦ Ó ¦ N ¦   | Y |   ¦ S ¦ O ¦ P ¦ O ¦ R ¦ T ¦ E ¦\n";
		cout<<" ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯     ¯¯¯     ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ \n";
		cout<<"Seleccione el tamaño de la oficina\n";
		cout<<"Piso: "<<Piso<<endl<<endl;
		cout<<"Hay "<<Espacio[Piso]<< "m² del piso disponible\n";
		cout<<"Hay "<<Oficinas[Piso]<<" oficinas en este piso\n\n";
		cout<<"[1] 2 m²\n";
		cout<<"[2] 4 m²\n";
		cout<<"[3] 8 m²\n";
		cout<<"[4] 16 m²\n\n";
		cout<<"[5] Volver\n";
		cout<<"[6] Menu principal\n";
		cout<<"[7] Salir\n\n";
		cout<<"Digite una opción > ";
		cin>>Opcion;
		
		switch(Opcion){
			case 1:
				
				if((Espacio[Piso] - 2) < 0 ){
					system("cls");
					cout<<"No hay suficiente espacio en este piso para una oficina de 2 m²\n";
					system("pause");
					TamanioOficina(Opcion, ContadorPisos, Piso);
					
				}
				else{
					
					Tamanio += Tamanio + 2; 
					Oficinas[Piso]++;
					Espacio[Piso] = Espacio[Piso] - 2;
					Ubicacion[Piso][Oficinas[Piso]].Space = 2;
					BuscarNombre(Opcion, ContadorPisos, Piso);
					
				}
			break;	
			
			case 2:
				
				if((Espacio[Piso] - 4) < 0 ){
					
					system("cls");
					cout<<"No hay suficiente espacio en este piso para una oficina de 4 m²\n";
					system("pause");
					TamanioOficina(Opcion, ContadorPisos, Piso);
					
				}
				else{
					
					Tamanio = Tamanio + 4;  
					Oficinas[Piso]++;
					Espacio[Piso] = Espacio[Piso] - 4;
					Ubicacion[Piso][Oficinas[Piso]].Space = 4;
					BuscarNombre(Opcion, ContadorPisos, Piso);					
				}
			break;
			
			case 3:
				
				
				if((Espacio[Piso] - 8) < 0 ){
					
					system("cls");
					cout<<"No hay suficiente espacio en este piso para una oficina de 8 m²\n";
					system("pause");
					TamanioOficina(Opcion, ContadorPisos, Piso);
					
				}
				else{
					
					Tamanio = Tamanio + 8; 
					Oficinas[Piso]++;
					Espacio[Piso] = Espacio[Piso] - 8;
					Ubicacion[Piso][Oficinas[Piso]].Space = 8;
					BuscarNombre(Opcion, ContadorPisos, Piso);
					
				}
				
			break;
			
			case 4:
				
				
				if((Espacio[Piso] - 16) < 0 ){
					
					system("cls");
					cout<<"No hay suficiente espacio en este piso para una oficina de 16 m²\n";
					system("pause");
					TamanioOficina(Opcion, ContadorPisos, Piso);
					
				}
				else{
					
					Tamanio = Tamanio + 16; 
					Oficinas[Piso]++;
					Espacio[Piso] = Espacio[Piso] - 16;
					Ubicacion[Piso][Oficinas[Piso]].Space = 16;
					BuscarNombre(Opcion, ContadorPisos, Piso);
				}
				
				
				
			break;
			
			case 5:
				MenuSoporte(Opcion, ContadorPisos, Piso);
			break;	
			
			case 6:
				MenuPrincipal(Opcion, ContadorPisos, Piso);
			break;
			
			case 7:
				system("cls");
				cout<<"Saliendo...\n";
				system("pause");
				exit(0);
			break;
			
			default:
				if (Opcion < 1 || Opcion > 7){
					system("cls");
					cout<<"Ingrese una opcion válida\n";
					system("pause");
					system("cls");
				}
				
		}
			
	}
	while(Opcion =! 7);
	
	
	return ;
	
}

void BuscarNombre(int Opcion, int ContadorPisos, int Piso){
	
	system("cls");
	
	int Usado = 0;
	
	cout<<"Escriba el nombre de la empresa > ";
	fflush(stdin);
	cin.getline(Ubicacion[Piso][Oficinas[Piso]].Empresa, 20, '\n');
		
	for(int i=1; i<=ContadorPisos; i++){
		
		for(int j=1; j<=16; j++){
			
			if(strcmp(Ubicacion[Piso][Oficinas[Piso]].Empresa, Ubicacion[i][j].Empresa) == 0){
				
				Usado++;	
				
			}
			
		}
		
	}
	
	if(Usado > 1){
		
		system("cls");
		cout<<"Ya hay una empresa registrada con el nombre "<<Ubicacion[Piso][Oficinas[Piso]].Empresa<<" en este edificio\n\n";
		Ubicacion[Piso][Oficinas[Piso]].Empresa[0] = '\0';
		cout<<"Presione una tecla para reintentar\n";
		getch();
		BuscarNombre(Opcion, ContadorPisos, Piso);
		
	}
	DatosPersonales(Opcion, ContadorPisos, Piso);
	
	return ;
	
}

void DatosPersonales(int Opcion, int ContadorPisos, int Piso){
	
	Ubicacion[Piso][Oficinas[Piso]].MaximoEmpleado = true;	
	cout<<"Escriba el NIT de la empresa > ";
	cin>>Ubicacion[Piso][Oficinas[Piso]].NIT;
	cout<<"Escriba los nombres del oficinista > ";
	fflush(stdin);
	cin.getline(Ubicacion[Piso][Oficinas[Piso]].Nombre, 20, '\n');
	cout<<"Escriba los apellidos del oficinista > ";
	fflush(stdin);
	cin.getline(Ubicacion[Piso][Oficinas[Piso]].Apellido, 20, '\n');
	cout<<"Escriba el numero telefónico del oficinista > ";
	cin>>Ubicacion[Piso][Oficinas[Piso]].Numero;
	system("cls");
	cout<<"¡¡¡Datos actualizados correctamente!!!\n\n";
	system("pause");
	TamanioOficina(Opcion, ContadorPisos, Piso);
	
	system("cls");
	
	return ;
	
}

void CambiarParametros(int Opcion, int ContadorPisos, int Piso){
	
	system("cls");
	
	int Usado=0;
	
	if(Acceso == false){
		
		cout<<"No hay ningún piso\n\n";
		cout<<"Presione cualquier tecla para regresar\n";
		getch();
		MenuSoporte(Opcion, ContadorPisos, Piso);
		
	}
	
	if(Tamanio == 0){
		
		cout<<"No hay ninguna oficina\n\n";
		cout<<"Presione cualquier tecla para regresar\n";
		getch();
		MenuSoporte(Opcion, ContadorPisos, Piso);	
		
	}
	
	cout<<"Escriba el piso > ";
	cin>>Piso;
	if(Piso > ContadorPisos || Piso > 100 || Piso < 0 ){
		
		cout<<"El piso al que intenta acceder no existe\n\n";
		cout<<"Presione una tecla para regresar\n";
		getch();
		MenuSoporte(Opcion, ContadorPisos, Piso);
		
	}
	
	else{
		
		cout<<"Escriba la oficina > ";
		cin>>Oficina;
		
		if(Oficina > Oficinas[Piso]){
			
			cout<<"La oficina del piso "<<Piso<<" a la que intenta acceder no existe\n\n";
			cout<<"Presione una tecla para regresar\n";
			getch();
			MenuSoporte(Opcion, ContadorPisos, Piso);
			
		}	
		
		else{
			
			system("cls");
			Ubicacion[Piso][Oficina].Empresa[0] = '\0';
			fflush(stdin);
			cout<<"Escriba el nombre de la empresa > ";
					
			cin.getline(Ubicacion[Piso][Oficina].Empresa, 20, '\n');
			
			for(int i=1; i<=ContadorPisos; i++){
				
				for(int j=1; j<=16; j++){
					
					if(strcmp(Ubicacion[Piso][Oficina].Empresa, Ubicacion[i][j].Empresa) == 0){
						
						Usado++;
							
					}
					
				}
			}
			
			if(Usado > 1){
				
				cout<<"Ya hay una empresa registrada con el nombre "<<Ubicacion[Piso][Oficina].Empresa<<" en este edificio\n\n";
				Ubicacion[Piso][Oficina].Empresa[0] = '\0';
				cout<<"Presione una tecla para reintentar\n";
				getch();
				CambiarParametros(Opcion, ContadorPisos, Piso);
				
			}
			
			else{
				cout<<"Escriba el NIT de la empresa > ";
				cin>>Ubicacion[Piso][Oficina].NIT;
				cout<<"Escriba los nombres del oficinista > ";
				fflush(stdin);
				cin.getline(Ubicacion[Piso][Oficina].Nombre, 20, '\n');
				cout<<"Escriba los apellidos del oficinista > ";
				fflush(stdin);
				cin.getline(Ubicacion[Piso][Oficina].Apellido, 20, '\n');
				cout<<"Escriba el numero telefónico del oficinista > ";
				cin>>Ubicacion[Piso][Oficina].Numero;
				system("cls");
				cout<<"¡¡¡Datos actualizados correctamente!!!\n\n";
				system("pause");
				MenuSoporte(Opcion, ContadorPisos, Piso);
				
			}
			
		}
		
	}
	
	return ;
	
}

void MenuDesocupar(int Opcion, int ContadorPisos, int Piso){
	
	system("cls");
	
	if(Acceso == false){
		
		cout<<"No hay ningún piso\n\n";
		cout<<"Presione cualquier tecla para regresar\n";
		getch();
		MenuSoporte(Opcion, ContadorPisos, Piso);
		
	}
	
	cout<<"Escriba el piso > ";
	cin>>Piso;
	cout<<"Escriba la oficina > ";
	cin>>Oficina;
	system("cls");
	
	if(Ubicacion[Piso][Oficina].MaximoEmpleado == false){
		
		system("cls");
		cout<<"Acción no válida. La oficina no existe o ya está desocupada\n\n";
		cout<<"Presione una tecla para reintentar\n";
		getch();
		MenuSoporte(Opcion, ContadorPisos, Piso);
			
	}
	
	else{
				
		do{
			
			system("cls");
			cout<<" ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___     ___     ___ ___ ___ ___ ___ ___ ___ \n";	
			cout<<"¦ A ¦ D ¦ M ¦ I ¦ N ¦ I ¦ S ¦ T ¦ R ¦ A ¦ C ¦ I ¦ Ó ¦ N ¦   | Y |   ¦ S ¦ O ¦ P ¦ O ¦ R ¦ T ¦ E ¦\n";
			cout<<" ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯     ¯¯¯     ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ \n";
			cout<<"Usted ha solicitado desocupar la oficina con los siguientes datos\n\n";
			cout<<"Nombre de la empresa: "<<Ubicacion[Piso][Oficina].Empresa<<endl;
			cout<<"NIT de la empresa: "<<fixed<<setprecision(0)<<Ubicacion[Piso][Oficina].NIT<<endl;
			cout<<"Nombres del oficinasta: "<<Ubicacion[Piso][Oficina].Nombre<<endl;
			cout<<"Apellidos del oficinista: "<<Ubicacion[Piso][Oficina].Apellido<<endl;
			cout<<"Número telefónico del oficinista: "<<fixed<<setprecision(0)<<Ubicacion[Piso][Oficina].Numero<<endl<<endl;
			cout<<"Es correcto o desea cambiarla\n";
			cout<<"1. Correcto\n";
			cout<<"2. Cambiar\n\n";
			cout<<"3. Salir\n\n";
			cout<<"Digite una opción > ";
			cin>>Opcion;
			switch(Opcion){
				case 1:
					Desocupar(Opcion, ContadorPisos, Piso);
				break;	
				
				case 2:
					MenuDesocupar(Opcion, ContadorPisos, Piso);
				break;
				
				case 3:
					system("cls");
					cout<<"Saliendo...\n";
					system("pause");
					exit(0);
				break;
				
				default:
					if (Opcion < 1 || Opcion > 3){
						
							system("cls");
							cout<<"Ingrese una opcion válida\n";
							system("pause");
							system("cls");
							
						}
						
			}
			
		}
		
		while(Opcion != 3);
	
	}
	
	return ; 
	
}
void Desocupar(int Opcion, int ContadorPisos, int Piso){
	
	system("cls");
	
	cout<<"Se ha desocupado la oficina exitosamente\n\n";
		
	Ubicacion[Piso][Oficina].MaximoEmpleado = false;
	Ubicacion[Piso][Oficina].Empresa[0] = '\0';
	Ubicacion[Piso][Oficina].NIT = '\0';
	Ubicacion[Piso][Oficina].Nombre[0] = '\0';
	Ubicacion[Piso][Oficina].Apellido[0] = '\0';
	Ubicacion[Piso][Oficina].Numero = '\0';
	cout<<"Presione una tecla para regresar\n";
	getch();
	MenuSoporte(Opcion, ContadorPisos, Piso);
	
	return ;
	
}

void Buscador(int Opcion, int ContadorPisos, int Piso){
	
	system("cls");
	
	char Name[20];
	
	bool Hay;
	
	int Validar=0;
	
	for(int i=1; i<=ContadorPisos; i++){
		
		for(int j=1; j<=16; j++){
			
			Validar += Ubicacion[i][j].Space;
			
		}
		
	}
	
	if(Validar == 0){
		
		cout<<"No hay ninguna oficina\n\nPresione cualquier tecla para regresar\n";
		getch();
		MenuInfo(Opcion, ContadorPisos, Piso);
		
	}
	
	cout<<"Escriba el nombre de la empresa > ";
	fflush(stdin);
	cin.getline(Name, 20, '\n');
	
	for(int i=1; i<=ContadorPisos; i++){
		
		for(int j=1; j<=16; j++){
			
			if(strcmp(Name, Ubicacion[i][j].Empresa) == 0){
				
				Piso = i;
				Oficina = j;
				Hay = true;
			}
			
		}
		
	}
	
	if(Hay == true){
		
		system("cls");
		cout<<"Hay coincidencias de la empresa "<<Name<<" en el piso "<<Piso<<", oficina "<<Oficina<<".\n\n";
		cout<<"Presione cualquier tecla para ver información de esta oficina\n";
		getch();
		system("cls");
		cout<<" ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___\n";	
		cout<<"¦ I ¦ N ¦ F ¦ O ¦ R ¦ M ¦ A ¦ C ¦ I ¦ O ¦ N ¦\n";
		cout<<" ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯\n";
		cout<<"Mostrando información del piso "<<Piso<<", oficina "<<Oficina<<endl;
		cout<<"Con nomencaltura: "<<Piso<<"	"<<Oficina<<"\n\n";
		cout<<"Tamaño de la oficina: "<<Ubicacion[Piso][Oficina].Space<<" m²"<<endl;
		cout<<"Nombre de la empresa: "<<Ubicacion[Piso][Oficina].Empresa<<endl;
		cout<<"NIT de la empresa: "<<fixed<<setprecision(0)<<Ubicacion[Piso][Oficina].NIT<<endl;
		cout<<"Nombres del oficinasta: "<<Ubicacion[Piso][Oficina].Nombre<<endl;
		cout<<"Apellidos del oficinista: "<<Ubicacion[Piso][Oficina].Apellido<<endl;
		cout<<"Número telefónico del oficinista: "<<fixed<<setprecision(0)<<Ubicacion[Piso][Oficina].Numero<<endl;
		cout<<"Estado de la oficina: ";
		
		if(Ubicacion[Piso][Oficina].MaximoEmpleado == true){
			
			cout<<"Ocupada\n\n";
			
		}
		
		else{
			
			cout<<"Desocupada\n\n";
			
		}	
		Hay = false;
		cout<<"Presione cualquier tecla para regresar\n";
		getch();
		MenuInfo(Opcion, ContadorPisos, Piso);
		
	}
	
	else{
		
		system("cls");
		cout<<"No hay coincidencias\n\n";
		cout<<"Presione una tecla para regresar\n";
		getch();
		MenuInfo(Opcion, ContadorPisos, Piso);
		
	}
	
	return ;
	
}

void Informacion(int Opcion, int ContadorPisos, int Piso){
	
	system("cls");
	
	if(Acceso == false){
		cout<<"No hay ninguna oficina\nPresione cualquier tecla para regresar\n";
		getch();
		MenuInfo(Opcion, ContadorPisos, Piso);
	}
	
	if(Tamanio == 0){
		
		cout<<"No hay oficinas en este edificio\n\nPresione cualquier tecla para regresar\n";
		getch();
		MenuInfo(Opcion, ContadorPisos, Piso);
		
	}
	
	cout<<"Ingrese el número del piso > ";
	cin>>Piso;
	
	if(Piso > ContadorPisos || Piso > 100 || Piso <= 0 ){
		
		cout<<"El piso al que intenta acceder no existe\n\nPresione una tecla para reintentar\n";
		getch();
		Informacion(Opcion, ContadorPisos, Piso);
		
	}
	
	if(Oficinas[Piso] == 0){
		
		system("cls");
		cout<<"El piso seleccionado no tiene ninguna oficina\n\nPresione una tecla para reintentar\n";
		getch();
		Informacion(Opcion, ContadorPisos, Piso);
		
	}
	
	system("cls");
	cout<<"Ingrese el número de la oficina > ";
	cin>>Oficina;
	
	if(Oficina > Oficinas[Piso] || Oficina > 16){
		
		system("cls");
		cout<<"La oficina seleccionda no existe\n\nPresione una tecla para reintentar\n";
		getch();
		Informacion(Opcion, ContadorPisos, Piso);
		
	}
	
	system("cls");
	
	cout<<" ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___\n";	
		cout<<"¦ I ¦ N ¦ F ¦ O ¦ R ¦ M ¦ A ¦ C ¦ I ¦ O ¦ N ¦\n";
		cout<<" ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯\n";
		cout<<"Mostrando información del piso "<<Piso<<", oficina "<<Oficina<<endl;
		cout<<"Con nomencaltura: "<<Piso<<"	"<<Oficina<<"\n\n";
		cout<<"Tamaño de la oficina: "<<Ubicacion[Piso][Oficina].Space<<" m²"<<endl;
		cout<<"Nombre de la empresa: "<<Ubicacion[Piso][Oficina].Empresa<<endl;
		cout<<"NIT de la empresa: "<<fixed<<setprecision(0)<<Ubicacion[Piso][Oficina].NIT<<endl;
		cout<<"Nombres del oficinasta: "<<Ubicacion[Piso][Oficina].Nombre<<endl;
		cout<<"Apellidos del oficinista: "<<Ubicacion[Piso][Oficina].Apellido<<endl;
		cout<<"Número telefónico del oficinista: "<<fixed<<setprecision(0)<<Ubicacion[Piso][Oficina].Numero<<endl;
		cout<<"Estado de la oficina: ";
		
		if(Ubicacion[Piso][Oficina].MaximoEmpleado == true){
			
			cout<<"Ocupada\n\n";
			
		}
		
		else{
			
			cout<<"Desocupada\n\n";
			
		}
		
		cout<<"Presione cualquier tecla para regresar\n";
		getch();
		MenuInfo(Opcion, ContadorPisos, Piso);
	
	return ;
	
}

void InfoAdicional(int Opcion, int ContadorPisos, int Piso){
	
	system("cls");
	
	int Cont[100], Maximo = 0, Aux = 0;
	
	double EspacioOcupado;
	
	ofstream InfoAdicionalFile;
	
	if(Acceso == false){
	
		InfoAdicionalFile.open("Información Adicional.txt", ios::out);
		
		InfoAdicionalFile<<"No hay información para mostrar\n";
		
		InfoAdicionalFile.close();

		cout<<"No hay información para mostrar\n\nPresione cualquier tecla para regresar\n";
		getch();
		MenuInfo(Opcion, ContadorPisos, Piso);
		
	}
	
	for(int i = 1; i <= ContadorPisos; i++){
		
		Cont[i]=0;
		
	}
	
	for(int i = 1 ; i <= ContadorPisos; i++){
		
		for(int j = 1; j <= 16; j++){
			
			if(Ubicacion[i][j].MaximoEmpleado == true){	
				
				Cont[i]++;
								
			}
			
		}
		
	}
	
	for(int i = 1; i <= ContadorPisos; i++){
		
		if(Cont[i] > Aux){
			
			Maximo = i;
			Aux = Maximo;
			
		}
		
	}
	
	EspacioOcupado = Tamanio*100/3200;
	
	cout<<"---> El piso con más empleados es el piso "<<Maximo<<" con "<<Cont[Maximo]<<" empleados\n";
	cout<<"---> Pisos construidos (%): "<<ContadorPisos<<" %\n";
	cout<<"---> Espacio ocupado del edificio (%): "<<EspacioOcupado<<" %\n\n";
	cout<<"Presione cualquier tecla para regresar\n";

	InfoAdicionalFile.open("Información Adicional.txt", ios::out);
	
	InfoAdicionalFile<<"---> El piso con más empleados es el piso "<<Maximo<<" con "<<Cont[Maximo]<<" empleados\n";
	InfoAdicionalFile<<"---> Pisos construidos (%): "<<ContadorPisos<<" %\n";
	InfoAdicionalFile<<"---> Espacio ocupado del edificio (%): "<<EspacioOcupado<<" %\n";
	
	InfoAdicionalFile.close();
	
	getch();
	MenuInfo(Opcion, ContadorPisos, Piso);
	
	return ;
	
}

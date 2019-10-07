#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <iomanip>

using namespace std;

int Oficinas[100], Espacio[100], i=0, j=0, Aux=0, ii=0,jj=0, Opciones, Tamanio[100];
void Soporte(), Informacion(), MenuPrincipal(), NuevoPiso(), NuevaOficina(), Parametros(), Busqueda(), CambiarParametros();
void Buscador(), Desocupar(), PisoMaxEmpleado(), Porcentaje(), Creditos();
bool Info = false;
struct Datos{
		char Empresa[100];
		double NIT;
		char Nombre[20];
		char Apellido[20];
		double Numero;
		bool MaximoEmpleado;
		int Space;
	}Empresa[100][17];	

int main(){
	
	system("cls");
	
	setlocale(LC_ALL, "spanish");
	for(i=0; i<100;i++){
		for(j=0; j<17; j++){
			Espacio[i]=32;
		}
	}
	for(i=0; i<100;i++){
		for(j=0; j<17; j++){
			Empresa[i][j].MaximoEmpleado = false;
		}
	}
	
	for(i=0; i<100;i++){
		for(j=0; j<17; j++){
			Empresa[i][j].Space = 0;
		}
	}
	
	for(i=0; i<100;i++){
		
			Tamanio[i] = 0;
	}
	
	i=0;
	j=0;
	system("color 0B");
	MenuPrincipal();
	
	getch();
	
	return 0;
	
}

void MenuPrincipal(){
	
	system("cls");
	
	do{
		cout<<" ___ ___ ___ ___     ___ ___ ___ ___ ___ ___ ___ ___ ___\n";	
		cout<<"¦ M ¦ E ¦ N ¦ Ú ¦   ¦ P ¦ R ¦ I ¦ N ¦ C ¦ I ¦ P ¦ A ¦ L ¦\n";
		cout<<" ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯     ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯\n";
		cout<<"[1] Administración y soporte\n";
		cout<<"[2] Información\n";
		cout<<"[3] Creditos\n\n";
		cout<<"[4] Salir\n\n";
		cout<<"Digite una opción > ";
		cin>>Opciones;
		switch(Opciones){
			
			case 1:
				system("cls");
				Soporte();
			break;
			
			case 2:
				system("cls");
				do{
					
					MenuBusqueda:
					cout<<" ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___\n";	
					cout<<"¦ I ¦ N ¦ F ¦ O ¦ R ¦ M ¦ A ¦ C ¦ I ¦ Ó ¦ N ¦\n";
					cout<<" ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯\n";
					cout<<"[1] Buscar empresa por nombre\n";
					cout<<"[2] Buscar empresa por piso y oficina\n";
					cout<<"[3] Ver el piso con mayor número de empleados\n";
					cout<<"[4] Ver el porcentaje de ocupación del edificio\n\n";
					cout<<"[5] Volver al menú principal\n";
					cout<<"[6] Salir\n\n";
					cout<<"Digite una opción > ";
					cin>>Opciones;
					switch(Opciones){
						
						case 1:
							
							system("cls");
							
							if(Info == false){
								cout<<"No hay ninguna oficina\nPresione cualquier tecla para regresar\n";
								getch();
								system("cls");					
							}
							else{
								system("cls");
								Buscador();
							}
						break;
						
						case 2:
							
							system("cls");
							
							if(Info == false){
								cout<<"No hay ninguna oficina\nPresione cualquier tecla para regresar\n";
								getch();
								system("cls");					
							}
							else{
								system("cls");
								cout<<"Ingrese el número del piso > ";
								cin>>i;
								cout<<"Ingrese el número de la oficina > ";
								cin>>j;
								Informacion();
							}
							
						break;
						
						case 3:
							
							system("cls");
							
							if(Info == false){
								cout<<"No hay ningun piso\nPresione cualquier tecla para regresar\n";
								getch();
								system("cls");
							}
							else{
								PisoMaxEmpleado();
							}
														
						break;
						
						case 4:
							
							system("cls");
							
							if(Info == false){
					
								cout<<"No hay pisos ni oficinas\nPisos construidos (%): 0%\n";
								cout<<"Espacio ocupado del edificio (%): 0%\n\nPresione cualquier tecla para regresar\n";
								getch();
								system("cls");
								goto MenuBusqueda;
					
							}
							
							system("cls");
							Porcentaje();
						
						break;	
						
						case 5:
							system("cls");
							MenuPrincipal();
						break;
						
						case 6:
							system("cls");
							cout<<"Saliendo...\n";		
							system("pause");
							exit(0);
						break;
						
						default:
							if (Opciones < 1 || Opciones > 4){
								system("cls");
								cout<<"Ingrese una opcion válida\n";
								system("pause");
							}	
						
					}
					
					
				}
				while(Opciones != 6);
				
			break;
			
			case 3:
				Creditos();
			break;
			
			case 4:
				system("cls");
				cout<<"Saliendo...\n";
				system("pause");
				exit(0);
			break;
			
			default:
				if (Opciones < 1 || Opciones > 4){
					system("cls");
					cout<<"Ingrese una opcion válida\n";
					system("pause");
				}	
		}
	}
	while (Opciones != 4);		
	return ;
	
}
 
void Soporte(){
	
	system("cls");
	
	do{	
		cout<<" ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___     ___     ___ ___ ___ ___ ___ ___ ___ \n";	
		cout<<"¦ A ¦ D ¦ M ¦ I ¦ N ¦ I ¦ S ¦ T ¦ R ¦ A ¦ C ¦ I ¦ Ó ¦ N ¦   | Y |   ¦ S ¦ O ¦ P ¦ O ¦ R ¦ T ¦ E ¦\n";
		cout<<" ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯     ¯¯¯     ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ \n";
		cout<<"[1] Agregar un nuevo piso\n";
		cout<<"[2] Agregar una nueva oficina\n";
		cout<<"[3] Cambiar parámetros a una oficina existente\n";
		cout<<"[4] Desocupar una oficina\n\n";
		cout<<"[5] Volver al menú principal\n";
		cout<<"[6] Salir\n\n";
		cout<<"Digite una opción > ";
		cin>>Opciones;
		switch(Opciones){
				
			case 1:
				Info = true;
				system("cls");
				NuevoPiso();
			break;
			
			case 2:
				system("cls");
				cout<<"Digite el piso al cual quiere agregar la oficina\n";
				cout<<"Piso > ";
				cin>>i;
				system("cls");
				if (i == 0){
					cout<<"Ese piso no existe\n";
					Soporte();	
				}
				else if (Aux < i){
					cout<<"Aun no existe el piso al que quiere agregar la oficina\n";
					system("pause");
					system("cls");
				}
				else{		
					NuevaOficina();
				}    		    
			break;
			
			case 3:
				system("cls");
				CambiarParametros();
			break;
			
			case 4:
				
				if(Aux == 0){
					system("cls");
					cout<<"No hay pisos ni oficinas\nPresione cualquier tecla para volver\n";
					getch();
					Soporte();
				}
				else{
					Desocupar();	
				}
			break;	
			
			case 5:
				system("cls");
				MenuPrincipal();
			break;	
			
			case 6:
				system("cls");
				cout<<"Saliendo...\n";
				system("pause");
				exit(0);
			break;
			
			default:
				if (Opciones < 1 || Opciones > 5){
					system("cls");
					cout<<"Ingrese una opcion válida\n";
					system("pause"); system("cls");
				}	
		}
		
	}
	while (Opciones != 5);
	return ; 
	
} 

void Informacion(){
	
	system("cls");
	
	cout<<" ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___\n";	
	cout<<"¦ I ¦ N ¦ F ¦ O ¦ R ¦ M ¦ A ¦ C ¦ I ¦ Ó ¦ N ¦\n";
	cout<<" ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯\n";
	
	cout<<"Mostrando información del piso "<<i<<", oficina "<<j<<endl;
	cout<<"Con nomencaltura: "<<i<<"	"<<j<<"\n\n";
	cout<<"Tamaño de la oficina: "<<Empresa[i][j].Space<<" m²"<<endl;
	cout<<"Nombre de la empresa: "<<Empresa[i][j].Empresa<<endl;
	cout<<"NIT de la empresa: "<<fixed<<setprecision(0)<<Empresa[i][j].NIT<<endl;
	cout<<"Nombres del oficinasta: "<<Empresa[i][j].Nombre<<endl;
	cout<<"Apellidos del oficinista: "<<Empresa[i][j].Apellido<<endl;
	cout<<"Número telefónico del oficinista: "<<fixed<<setprecision(0)<<Empresa[i][j].Numero<<endl;
	cout<<"Estado de la oficina: ";
	if(Empresa[i][j].MaximoEmpleado == true){
			cout<<"Ocupada\n";
		}
		else{
			cout<<"Desocupada\n";
		}
	
	cout<<"\nPresione cualquier tecla para regresar\n";
	getch();
	system("cls");
	
	return ;
	
}

void Parametros(){
		
	Empresa[i][Oficinas[i]].MaximoEmpleado = true;	
	cout<<"Escriba el NIT de la empresa > ";
	cin>>Empresa[i][Oficinas[i]].NIT;
	fflush(stdin);
	cout<<"Escriba los nombres del oficinista > ";
	cin.getline(Empresa[i][Oficinas[i]].Nombre, 20, '\n');
	cout<<"Escriba los apellidos del oficinista > ";
	cin.getline(Empresa[i][Oficinas[i]].Apellido, 20, '\n');
	cout<<"Escriba el numero telefónico del oficinista > ";
	cin>>Empresa[i][Oficinas[i]].Numero;
	cout<<"¡¡¡Datos actualizados correctamente!!!\n";
	system("pause");
	NuevaOficina();
	
	return ;
	
}

void NuevoPiso(){
	
	system("cls");
	
	if(Aux == 0){
		cout<<"No hay ningún piso\nPresione cualquier tecla para agregar el primer piso\n";	
		getch();
		system("cls");
		Aux++;
		cout<<"¡Acción realizada con éxito!\n";
		system("pause");	
	}
	else{
	
		cout<<"Hay "<<Aux<<" pisos en este momento\n";
		cout<<"Presione cualquier tecla para agregar un piso\n";
		getch();
		Aux++;
		system("cls");
		cout<<"¡Acción realizada con éxito!\n";
		system("pause");
		
	}
	
	do{
		system("cls");
		cout<<" ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___     ___     ___ ___ ___ ___ ___ ___ ___ \n";	
		cout<<"¦ A ¦ D ¦ M ¦ I ¦ N ¦ I ¦ S ¦ T ¦ R ¦ A ¦ C ¦ I ¦ Ó ¦ N ¦   | Y |   ¦ S ¦ O ¦ P ¦ O ¦ R ¦ T ¦ E ¦\n";
		cout<<" ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯     ¯¯¯     ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ \n";
		cout<<"[1] Agregar otro piso\n";
		cout<<"[2] Agregar una oficina al último piso creado\n\n";
		cout<<"[3] Volver\n";
		cout<<"[4] Menú principal\n";
		cout<<"[5] Salir\n\n";
		cout<<"Digite una opción > ";
		cin>>Opciones;
		switch (Opciones){
			case 1:
				system("cls");
				NuevoPiso();
			break;
			
			case 2:
				system("cls");
				i=Aux;
				NuevaOficina();
			break;
			
			case 3:
				system("cls");
				Soporte();
			break;
			
			case 4:
				system("cls");
				MenuPrincipal();
			break;	
			
			case 5:
				system("cls");
				cout<<"Saliendo...\n";
				system("pause");
				exit(0);
			break;	
			
			default:
				if (Opciones < 1 || Opciones > 5){
					system("cls");
					cout<<"Ingrese una opcion válida\n";
					system("pause"); system("cls");
				}
		}
	}
	while (Opciones != 5);
	return ;	
} 

void NuevaOficina(){
	
	system("cls");
			
	while(Espacio[i] >= 0){
	
		if(Espacio[i] <= 0 ){
				cout<<"El espacio de este piso se ha agotado\nNo se pueden agregar más oficinas en este piso\n";
				Soporte();
			}
		cout<<" ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___     ___     ___ ___ ___ ___ ___ ___ ___ \n";	
		cout<<"¦ A ¦ D ¦ M ¦ I ¦ N ¦ I ¦ S ¦ T ¦ R ¦ A ¦ C ¦ I ¦ Ó ¦ N ¦   | Y |   ¦ S ¦ O ¦ P ¦ O ¦ R ¦ T ¦ E ¦\n";
		cout<<" ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯     ¯¯¯     ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ \n";
		cout<<"Seleccione el tamaño de la oficina\n";
		cout<<"Hay "<<Espacio[i]<< "m² del piso disponible\n\n";
		cout<<"Hay "<<Oficinas[i]<<" oficinas en este piso\n";
		cout<<"Piso: "<<i<<endl<<endl;
		cout<<"[1] 2 m²\n";
		cout<<"[2] 4 m²\n";
		cout<<"[3] 8 m²\n";
		cout<<"[4] 16 m²\n\n";
		cout<<"[5] Menu principal\n";
		cout<<"[6] Salir\n\n";
		cout<<"Digite una opción > ";
		cin>>Opciones;
		
		switch(Opciones){
			case 1:
				system("cls");
				
				if((Espacio[i] - 2) < 0 ){
					cout<<"No hay suficiente espacio en este piso para una oficina de 2 m²\n";
					system("pause");
					NuevaOficina();
				}
				else{
					Tamanio[i] = 2; 
					Oficinas[i]++;
					Espacio[i] = Espacio[i] - 2;
					Empresa[i][Oficinas[i]].Space = 2;
					Busqueda();
				}
			break;	
			
			case 2:
				system("cls");
				
				if((Espacio[i] - 4) < 0 ){
					cout<<"No hay suficiente espacio en este piso para una oficina de 4 m²\n";
					system("pause");
					NuevaOficina();
				}
				else{
					Tamanio[i] = 4; 
					Oficinas[i]++;
					Espacio[i] = Espacio[i] - 4;
					Empresa[i][Oficinas[i]].Space = 4;
					Busqueda();
				}
			break;
			
			case 3:
				system("cls");
				
				if((Espacio[i] - 8) < 0 ){
					cout<<"No hay suficiente espacio en este piso para una oficina de 8 m²\n";
					system("pause");
					NuevaOficina();
				}
				else{
					Tamanio[i] = 8; 
					Oficinas[i]++;
					Espacio[i] = Espacio[i] - 8;
					Empresa[i][Oficinas[i]].Space = 8;
					Busqueda();
				}
				
			break;
			
			case 4:
				system("cls");
				
				if((Espacio[i] - 16) < 0 ){
					cout<<"No hay suficiente espacio en este piso para una oficina de 16 m²\n";
					system("pause");
					NuevaOficina();
				}
				else{
					Tamanio[i] = 16; 
					Oficinas[i]++;
					Espacio[i] = Espacio[i] - 16;
					Empresa[i][Oficinas[i]].Space = 16;
					Busqueda();
				}
				
				
				
			break;
			
			case 5:
				system("cls");
				MenuPrincipal();
			break;
			
			case 6:
				system("cls");
				cout<<"Saliendo...\n";
				system("pause");
				exit(0);
			break;
			
			default:
				if (Opciones < 1 || Opciones > 6){
					system("cls");
					cout<<"Ingrese una opcion válida\n";
					system("pause"); system("cls");
				}
				
		}
	
	}
	
	return ;
	
}

void Busqueda(){
	
	system("cls");
	
	int Uso = 0;
	
	cout<<"Actualizar datos de la oficina piso: "<<i<<"\tnúmero de la oficina: "<<Oficinas[i]<<"\n";
	cout<<"Con nomencaltura: "<<i<<"	"<<Oficinas[i]<<"\n\n";
	cout<<"Escriba el nombre de la empresa > ";
	fflush(stdin);
	cin.getline(Empresa[i][Oficinas[i]].Empresa, 20, '\n');
	for(ii=0; ii<=Aux; ii++){
		for(jj=0; jj<=17; jj++){
			if(strcmp(Empresa[i][Oficinas[i]].Empresa, Empresa[ii][jj].Empresa) == 0){
				Uso++;	
			}	
		}
	}
	if(Uso >= 2){
		cout<<"Ya hay una empresa registrada con el nombre "<<Empresa[i][Oficinas[i]].Empresa<<" en este edificio\n";
		Empresa[i][Oficinas[i]].Empresa[0] = '\0';
		cout<<Empresa[i][Oficinas[i]].Empresa<<endl;
		Busqueda();
	}
	else{
		Parametros();
	}
	
	return ;
	
}

void CambiarParametros(){

	system("cls");

	int Uso=0;
	cout<<"Escriba el piso > ";
	cin>>i;
	if(i>Aux){
		cout<<"El piso al que intenta acceder no existe\n";
		do{
			cout<<" ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___     ___     ___ ___ ___ ___ ___ ___ ___ \n";	
			cout<<"¦ A ¦ D ¦ M ¦ I ¦ N ¦ I ¦ S ¦ T ¦ R ¦ A ¦ C ¦ I ¦ Ó ¦ N ¦   | Y |   ¦ S ¦ O ¦ P ¦ O ¦ R ¦ T ¦ E ¦\n";
			cout<<" ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯     ¯¯¯     ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ \n";
			cout<<"[1] Intentar de nuevo\n\n";
			cout<<"[2] Volver\n";
			cout<<"[3] Menú principal\n\n";
			cout<<"[4] Salir\n";
			cout<<"Digite una opción > ";
			cin>>Opciones;
			switch(Opciones){
				case 1:
					CambiarParametros();	
				break;
				
				case 2:
					Soporte();
				break;
				
				case 3:
					MenuPrincipal();
				break;
				
				case 4:
					system("cls");
					cout<<"Saliendo...\n";
					system("pause");
					exit(0);
				break;	
				
				default:
					if (Opciones < 1 || Opciones > 4){
					system("cls");
					cout<<"Ingrese una opcion válida\n";
					system("pause"); system("cls");
				}	
			}
		}
			while(Opciones != 4);
	}
	else{
		cout<<"Escriba el número de la oficina del piso "<<i<<" > ";
		cin>>j;
		if(j>Oficinas[i]){
			cout<<"La oficina del piso "<<i<<" a la que intenta acceder no existe\n";
			do{
				cout<<" ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___     ___     ___ ___ ___ ___ ___ ___ ___ \n";	
		        cout<<"¦ A ¦ D ¦ M ¦ I ¦ N ¦ I ¦ S ¦ T ¦ R ¦ A ¦ C ¦ I ¦ Ó ¦ N ¦   | Y |   ¦ S ¦ O ¦ P ¦ O ¦ R ¦ T ¦ E ¦\n";
	           	cout<<" ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯     ¯¯¯     ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ \n";
				cout<<"[1] Intentar de nuevo\n\n";
				cout<<"[2] Volver\n";
				cout<<"[3] Menú principal\n\n";
				cout<<"[4] Salir\n";
				cout<<"Digite una opción > ";
				cin>>Opciones;
				switch(Opciones){
					case 1:
						CambiarParametros();	
					break;
					
					case 2:
						Soporte();
					break;
					
					case 3:
						MenuPrincipal();
					break;
					
					case 4:
						system("cls");
						cout<<"Saliendo...\n";
						system("pause");
						exit(0);
					break;
					
					default:
						if (Opciones < 1 || Opciones > 4){
						system("cls");
						cout<<"Ingrese una opcion válida\n";
						system("pause"); system("cls");
					}	
				}
			}
			while(Opciones != 4);
		}	
		else{
			cout<<"Actualizar datos de la oficina piso: "<<i<<"\tnumero de la oficina: "<<j<<"\n";
			cout<<"Con nomencaltura: "<<i<<"	"<<j<<"\n\n";
			Empresa[i][j].MaximoEmpleado = true;
			Empresa[i][j].Empresa[0] = '\0';
			fflush(stdin);
			cout<<"Escriba el nombre de la empresa > ";
					
			cin.getline(Empresa[i][j].Empresa, 20, '\n');
			
			for(ii=0; ii<=Aux; ii++){
				for(jj=0; jj<=17; jj++){
					if(strcmp(Empresa[i][j].Empresa, Empresa[ii][jj].Empresa) == 0){
						Uso++;	
					}
					
				}
			}
			if(Uso >= 2){
				cout<<"Ya hay una empresa registrada con el nombre "<<Empresa[i][j].Empresa<<" en este edificio\n";
				Empresa[i][j].Empresa[0] = '\0';
				CambiarParametros();
			}
			else{
				cout<<"Escriba el NIT de la empresa > ";
				cin>>Empresa[i][j].NIT;
				fflush(stdin);
				cout<<"Escriba los nombres del oficinista > ";
				cin.getline(Empresa[i][j].Nombre, 20, '\n');
				cout<<"Escriba los apellidos del oficinista > ";
				cin.getline(Empresa[i][j].Apellido, 20, '\n');
				cout<<"Escriba el numero telefónico del oficinista > ";
				cin>>Empresa[i][j].Numero;
				cout<<"¡¡¡Datos actualizados correctamente!!!\n";
				system("pause");
				Soporte();
			}
		}
		
	}
	
	return ;
	
}

void Buscador( ){
	
	system("cls");
	
	char BuscarEmpresa[20];
	int PisoAux, OficinaAux, iAux, jAux;
	bool Hay = false;
	
	cout<<"Escriba el nombre de la empresa > ";
	fflush(stdin);
	cin.getline(BuscarEmpresa, 'n');
	
	for(iAux=0; iAux<=100; iAux++){
		
		for(jAux=0; jAux<=17; jAux++){
			
			if(strcmp(BuscarEmpresa, Empresa[iAux][jAux].Empresa) == 0){
				
				PisoAux = iAux;
				OficinaAux = jAux;
				Hay = true;
			}
			
		}
		
	}
	
	if(Hay == true){
		
		cout<<"Hay coincidencias de la empresa "<<BuscarEmpresa<<" en el piso "<<PisoAux<<", oficina "<<OficinaAux<<".\n";
		cout<<"Presione cualquier tecla para ver información de esta oficina\n";
		getch();
		system("cls");
		cout<<" ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___\n";	
		cout<<"¦ I ¦ N ¦ F ¦ O ¦ R ¦ M ¦ A ¦ C ¦ I ¦ O ¦ N ¦\n";
		cout<<" ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯\n";
		cout<<"Mostrando información del piso "<<PisoAux<<", oficina "<<OficinaAux<<endl;
		cout<<"Con nomencaltura: "<<PisoAux<<"	"<<OficinaAux<<"\n\n";
		cout<<"Tamaño de la oficina: "<<Empresa[PisoAux][OficinaAux].Space<<endl;
		cout<<"Nombre de la empresa: "<<Empresa[PisoAux][OficinaAux].Empresa<<endl;
		cout<<"NIT de la empresa: "<<fixed<<setprecision(0)<<Empresa[i][OficinaAux].NIT<<endl;
		cout<<"Nombres del oficinasta: "<<Empresa[PisoAux][OficinaAux].Nombre<<endl;
		cout<<"Apellidos del oficinista: "<<Empresa[PisoAux][OficinaAux].Apellido<<endl;
		cout<<"Número telefónico del oficinista: "<<fixed<<setprecision(0)<<Empresa[PisoAux][OficinaAux].Numero<<endl;
		cout<<"Estado de la oficina: ";
		if(Empresa[PisoAux][OficinaAux].MaximoEmpleado == true){
			cout<<"Ocupada\n";
		}
		else{
			cout<<"Desocupada\n";
		}
		Hay = false;
		cout<<"Presione cualquier tecla para regresar\n";
		getch();
		system("cls");
	}
	
	else{
		
		cout<<"No hay coincidencias\n";
		cout<<"Presione una tecla para regresar\n";
		getch();
		system("cls");		
	}
	
	return ;
	
}

void Desocupar(){
	
	system("cls");
	
	int Piso, Oficina;
		
	cout<<"Escriba el piso de la oficina > ";
	cin>>Piso;
	cout<<"Escriba la oficina > ";
	cin>>Oficina;
	system("cls");
	
	if(Empresa[Piso][Oficina].MaximoEmpleado == false){
		do{
			
			cout<<" ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___     ___     ___ ___ ___ ___ ___ ___ ___ \n";	
			cout<<"¦ A ¦ D ¦ M ¦ I ¦ N ¦ I ¦ S ¦ T ¦ R ¦ A ¦ C ¦ I ¦ Ó ¦ N ¦   | Y |   ¦ S ¦ O ¦ P ¦ O ¦ R ¦ T ¦ E ¦\n";
			cout<<" ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯     ¯¯¯     ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ \n";
			cout<<"Acción no válida. La oficina no existe o ya está desocupada\n";
			cout<<"[1] Reintentar\n\n";
			cout<<"[2] Volver\n";
			cout<<"[3] Salir\n\n";
			cout<<"Digite una opción > ";
			cin>>Opciones;
			switch(Opciones){
				
				case 1:
					Desocupar();
				break;
				
				case 2:
					system("cls");
					Soporte();
				break;
				
				case 3:
					system("cls");
					cout<<"Saliendo...\n";
					system("pause");
					exit(0);
				break;
				
				default:
					if(Opciones < 0 ||Opciones > 3){
						
						system("cls");
						cout<<"Digite una opción válida\n";
						system("pause");
						system("cls");
						
					}	
				
			}
			
		}
		while (Opciones !=3 );
			
	}
		
	else{
		system("cls");
		do{
			cout<<" ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___     ___     ___ ___ ___ ___ ___ ___ ___ \n";	
			cout<<"¦ A ¦ D ¦ M ¦ I ¦ N ¦ I ¦ S ¦ T ¦ R ¦ A ¦ C ¦ I ¦ Ó ¦ N ¦   | Y |   ¦ S ¦ O ¦ P ¦ O ¦ R ¦ T ¦ E ¦\n";
			cout<<" ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯     ¯¯¯     ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ ¯¯¯ \n";
			cout<<"Usted ha solicitado desocupar la oficina con los siguientes datos\n";
			cout<<"Nombre de la empresa: "<<Empresa[Piso][Oficina].Empresa<<endl;
			cout<<"NIT de la empresa: "<<fixed<<setprecision(0)<<Empresa[Piso][Oficina].NIT<<endl;
			cout<<"Nombres del oficinasta: "<<Empresa[Piso][Oficina].Nombre<<endl;
			cout<<"Apellidos del oficinista: "<<Empresa[Piso][Oficina].Apellido<<endl;
			cout<<"Número telefónico del oficinista: "<<fixed<<setprecision(0)<<Empresa[Piso][Oficina].Numero<<endl<<endl;
			cout<<"Es correcto o desea cambiarla\n";
			cout<<"1. Correcto\n";
			cout<<"2. Cambiar la oficina\n\n";
			cout<<"3. Salir\n\n";
			cout<<"Digite una opción > ";
			cin>>Opciones;
			switch(Opciones){
				case 1:
					goto Desocuparla;
				break;	
				
				case 2:
					Desocupar();
				break;
				
				case 3:
					system("cls");
					cout<<"Saliendo...\n";
					system("pause");
					exit(0);
				break;
				
				default:
					if (Opciones < 1 || Opciones > 3){
							system("cls");
							cout<<"Ingrese una opcion válida\n";
							system("pause"); system("cls");
						}
			}
			
		}
		
		while(Opciones != 3);
		
		Desocuparla:
		
		cout<<"Se ha desocupado la oficina exitosamente\n";
		
		Empresa[Piso][Oficina].MaximoEmpleado = false;
		Empresa[Piso][Oficina].Empresa[0] = '\0';
		Empresa[Piso][Oficina].NIT = '\0';
		Empresa[Piso][Oficina].Nombre[0] = '\0';
		Empresa[Piso][Oficina].Apellido[0] = '\0';
		Empresa[Piso][Oficina].Numero = '\0';
		Espacio[Piso]=Espacio[Piso]+Tamanio[Piso];
		system("pause");
		Soporte();
	}
			
	
	return ;
	
}

void PisoMaxEmpleado(){
	
	system("cls");
	
	int Cont[100];
	int Maximo;
	int Auxx = 0;
	int iii;
	
	for(iii=0; iii<100; iii++){
		
		Cont[iii]=0;
		
	}
	
	for(iii=1 ; iii<100; iii++){
		
		for(int jjj=1; jjj<17; jjj++){
			
			if(Empresa[iii][jjj].MaximoEmpleado == true){	
				
				Cont[iii]++;
								
			}
			
		}
		
	}
	
	for(iii=0; iii<100; iii++){
		
		if(Cont[iii] > Auxx){
			
			Maximo = iii;
			Auxx = iii;
			
		}
		
	}
	
	cout<<"El piso con más empleados es el piso "<<Maximo<<" con "<<Cont[Maximo]<<" empleados\n";	
	
	system("pause");
	system("cls");
		
	return ;
	
}

void Porcentaje(){
	
	system("cls");	
	
	int x, y;
	double EspacioOcupado;
	for(int x=0; x<100; x++){
		for(y=0; y<17; y++){
			
			EspacioOcupado = Empresa[x][y].Space + EspacioOcupado;
			
		}
	}
	
	EspacioOcupado = EspacioOcupado*100/3200;
	cout<<"Pisos construidos (%): "<<Aux<<" %\n";
	cout<<"Espacio ocupado del edificio (%): "<<EspacioOcupado<<" %\n";
	system("pause");
	system("cls");
		
	return ; 
	
}

void Creditos(){
	
	system("cls");
	setlocale(LC_ALL, "C");
	
	cout<<char(201);
	for(int i=0; i<117; i++){
		cout<<char(205);
	}
	cout<<char(187)<<endl;
	
	
	for(int i=0; i<10; i++){
		cout<<char(186);
		for(int i=0; i<117; i++){
			cout<<" ";
		}
		cout<<char(186)<<endl;
	}
	


	cout<<char(186)<<"                                      David Stiven Riscanevo Vanegas 11161815981                                     "<<char(186)<<endl;
	cout<<char(186)<<"                                                                                                                     "<<char(186)<<endl;
	cout<<char(186)<<"                                    Giovanny Alexander Zamora Bustos 111618121822                                    "<<char(186)<<endl;
	cout<<char(186)<<"                                                                                                                     "<<char(186)<<endl;
	cout<<char(186)<<"                                  Facultad de Ingenier"<<char(161)<<"a de Sistemas y Computaci"<<char(162)<<"n                                   "<<char(186)<<endl;
	cout<<char(186)<<"                                              UNIVERSIDAD ANTONIO NARI"<<char(165)<<"O                                             "<<char(186)<<endl;
	cout<<char(186)<<"                                                         UAN                                                         "<<char(186)<<endl;

	
	for(int i=0; i<10; i++){
			cout<<char(186);
		for(int i=0; i<117; i++){
			cout<<" ";
		}
		cout<<char(186)<<endl;	
	}
	
	
	cout<<char(200);
	for(int i=0; i<117; i++){
		cout<<char(205);
	}
	cout<<char(188)<<endl;
	cout<<"Presione cualquier tecla para regresar";
	getch();
	system("cls");
	main();
	
	return ;
	
}

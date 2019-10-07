#include <iostream>
#include <math.h>
using namespace std;

double Grados, Radianes, GradosRadianes(double, double), pi=acos(-1.0);
double Celsius, CelsiusFahrenheint(double);
double Metros, MetrosPulgadas (double);
double Horas, HorasSegundos(double);
void ImprimirRespuestas();
int opcion;

int main(){
	do {
		cout<<"Menu de opciones\n\n";
		cout<<"1. Convertir de grados a radianes.\n";
		cout<<"2. Convertir grados celsius a fahrenheit.\n";
		cout<<"3. Convertir de metros a pulgadas.\n";
		cout<<"4. Convertir de horas a segundos.\n\n";
		cout<<"5. Salir\n\n";
		cout<<"Ingrese una opcion > "; 
		cin>>opcion;
		switch (opcion){
			case 1:
				system ("cls");
				cout<<"Ingrese el valor a convertir (grados) > ";
				cin>>Grados;
				GradosRadianes(Grados, Radianes);
				ImprimirRespuestas();
			break; 
			
			case 2:
				system ("cls");
				cout<<"Ingrese el valor a convertir (grados celsius) > ";
				cin>>Celsius;
				CelsiusFahrenheint(Celsius);
				ImprimirRespuestas();
			break;
			
			case 3:
				system ("cls");
				cout<<"Ingrese el valor a convertir (metros) > ";
				cin>>Metros;
				MetrosPulgadas (Metros);
				ImprimirRespuestas();
			break;
			
			case 4:
				system ("cls");
				cout<<"Ingrese el valor a convertir (horas) > ";
				cin>>Horas;
				HorasSegundos(Horas);
				ImprimirRespuestas();
			break;
			
			case 5:
				system ("cls");
				cout<<"Saliendo del sistema... \n\n";
				system("pause");
			break;
			
			default:
				if(opcion <1 || opcion >5){
					system ("cls");
					cout<<"Opcion no valida... intente nuevamente\n";
					system ("pause");
					system ("cls");
				}	
		}
	}
	while (opcion != 5);	
	return 0;
	
}
double GradosRadianes(double Grados, double Radianes){
	Radianes = (Grados*pi)/180;
	return Radianes;
}

double CelsiusFahrenheint(double Celsius){
	Celsius = (Celsius * 9/5)+32;
	return Celsius;
}

double MetrosPulgadas(double Metros){
	Metros = Metros * 39.37;
	return Metros;
}

double HorasSegundos(double Horas){
	Horas = Horas * 3600;
	return Horas;
}

void ImprimirRespuestas(){
	system ("cls");
	cout<<"Resultado > ";
	if (opcion == 1){
		cout<<GradosRadianes(Grados, Radianes)<<" radianes."<<endl;
	}
	if (opcion == 2){
		cout<<CelsiusFahrenheint(Celsius)<<" grados Fahrenheint."<<endl;
	}
	if (opcion == 3){
		cout<<MetrosPulgadas (Metros)<<" pulgadas."<<endl;
	}
	if (opcion == 4){
		cout<<HorasSegundos(Horas)<<" segundos."<<endl;
	}
	system ("pause");
	system ("cls");
	return ;
}

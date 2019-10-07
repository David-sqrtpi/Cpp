#include <iostream>
using namespace std;

int opcion, x;
int dato, conversion[100];
void DecimalBinario(), DecimalOctal(), DecimalHexadecimal();
void BinarioDecimal(), OctalDecimal(), HexadecimalDecimal();
int main(){
	
	do{
		cout<<"Menu de opciones\n\n";
		cout<<"1. Convertir de decimal a binario\n";
		cout<<"2. Convertir de decimal a octal\n";
		cout<<"3. Convertir de decimal a hexadecimal\n";
		cout<<"4. Convertir de binario a decimal \n";
		cout<<"5. Convertir de octal a decimal\n";
		cout<<"6. Convertir de hexadecimal a decimal\n\n";
		cout<<"7. Salir\n\n";
		cout<<"Opcion > ";
		cin>>opcion;
		
		switch (opcion){
			case 1:
				DecimalBinario();
			break;
			
			case 2:
				DecimalOctal();
			break;
			
			case 3:
				DecimalHexadecimal();
			break;
			
			case 4:
				BinarioDecimal();
			break;
			
			case 5:
				OctalDecimal();
			break;
			
			case 6:
				HexadecimalDecimal();
			break;
			
			case 7:
				cout<<"Saliendo...\n";
			break;
			
			default:
				if (opcion <1 || opcion >7){
					cout<<"Digite una opcion valida\n";
				}	
		}
	}
	while (opcion != 7);
	
	return 0;
}

void DecimalBinario(){
	
	cout<<"Digite el dato > ";
	cin>>dato;
	for (int i=0; i<=dato; i++){
		conversion[i] = dato % 2;
		cout<<conversion[i]<<"	";
		dato = dato / 2;
	}
	cout<<"\n";
	return ;
}

void DecimalOctal(){
	
	cout<<"Digite el dato > ";
	cin>>dato;
	
	return ;
}

void DecimalHexadecimal(){
	
	cout<<"Digite el dato > ";
	cin>>dato;
	
	return ;
}

void BinarioDecimal(){
	
	cout<<"Digite el dato > ";
	cin>>dato;
	
	return ;
}

void OctalDecimal(){
	
	cout<<"Digite el dato > ";
	cin>>dato;
	
	return ;
}

void HexadecimalDecimal(){
	
	cout<<"Digite el dato > ";
	cin>>dato;
	
	return ;
}

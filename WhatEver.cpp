#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	
	int what, one;
	
	cout<<"Ingrese dos numeros\n";
	
	cin>>what>>one;
	
	system ("cls");
	
	cout<<"El primer numero que ingreso es "<<what<<endl;
	
	system ("pause");
	system ("cls");
	
	cout<<"El segundo numero que ingreso es "<<one<<endl;
	
	system ("pause");
	system ("cls");
	
	if(what==one){
		
		cout<<"Los numeros son iguales";
		
	}
	else{
	
	cout<<"Los numeros son diferentes";
	
	}
	
	
	
	return 0;
}

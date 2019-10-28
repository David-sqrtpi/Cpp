#include <iostream>
#include <string.h>

using namespace std;

int ContarVocales(char *, int &, int &, int &, int &, int &);

int main(){
	
	char Cadena[30];
	
	int a=0, e=0, i=0, o=0, u=0;
	
	cout<<"Escriba una cadena > ";
	cin.getline(Cadena, 30, '\n');
	
	ContarVocales(Cadena, a, e, i, o, u);
	
	cout<<"Cantidad de 'a' > "<<a<<endl;
	cout<<"Cantidad de 'e' > "<<e<<endl;
	cout<<"Cantidad de 'i' > "<<i<<endl;
	cout<<"Cantidad de 'o' > "<<o<<endl;
	cout<<"Cantidad de 'u' > "<<u<<endl;
	
	return 0;
	
}

int ContarVocales(char *Cadena, int &a, int &e, int &i, int &o, int &u){
	
	strupr(Cadena);
		
	while(*Cadena){
		
		switch(*Cadena){
			
			case 'A':
				a++;
			break;	
			
			case 'E':
				e++;
			break;
			
			case 'I':
				i++;
			break;
			
			case 'O':
				o++;
			break;
			
			case 'U':
				u++;
			break;
			
		}
		
		Cadena++;
		
	}
	
	return 0;	
	
}
	
	
	
	

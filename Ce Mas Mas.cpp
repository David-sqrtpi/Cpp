#include <iostream>
#include <locale>
using namespace std;

char datos[100], b[10] , c;

int i, n, numeros=0, letras=0, opcion, p, nprimo, a;

double primo;

int main(){
	
	for (a=130; a<233; a++){
		
	  	b[a]=a;
	  	
	}
		
	cout<<"Digite el n"<<char(163)<<"mero de datos que quiere ingresar...\n";
	cin>>n;
	
	system("cls");
	
	for (i=0; i<n; i++){
		
		cout<<"Ingrese un n"<<char(163)<<"mero o letra\n";
		cout<<"\nFaltan "<<n-i<<endl;
		cin>>datos[i];
		system("cls");	
		
		if((datos[i]>= 48) && (datos[i] <= 57)){
			
		  	numeros++;
		  	
		}
		
		else if((datos[i]>= 65) && (datos[i] <= 90)){
			
		  	letras++;
		  	
		}
		
		else if((datos[i]>= 97) && (datos[i] <= 122)){
			
		  	letras++;
		  	
		}
		
		else if((datos[i]>= b[160]) && (datos[i] <= b[165])){
			
		  	letras++;
		  	
		}
		
	    else if((datos[i] == b[130]) || (datos[i] == b[181]) || (datos[i] == b[144]) || (datos[i] == b[214]) || (datos[i] == b[224]) || (datos[i] == b[233])){
	    	
		  	letras++;
		  	
		}
		 
		else{
			
		  	cout<<"Digite una letra/n"<<char(163)<<"mero v"<<char(160)<<"lido\n";
		  	n++;
		  	
		}	
    }
    
    system("cls");
    
	while(1){
		
		menuu:
		system("cls");
		cout<<"Ingrese un opci"<<char(162)<<"n...\n";
		menu:
		cout<<"1. Ver la cantidad de n"<<char(163)<<"meros ingresados y si el conteo es par o impar...\n";
		cout<<"2. Ver la cantidad de letras ingresadas, si el conteo es un n"<<char(163)<<"mero primo y si es divisible entre 7...\n";
		cout<<"3. Salir... \n\n";
		cout<<"Su  opci"<<char(162)<<"n --> ";
		cin>>opcion;
		switch (opcion){
			
			case 1:
				
				system("cls");
				cout<<"La cantidad de n"<<char(163)<<"meros que usted ingres"<<char(162)<<"--> "<<numeros<<endl<<endl;
				
			if (numeros%2 == 0){
				
				cout<<"El conteo es par!\n";
				
			}
			
			else{
				
			    	cout<<"El conteo es impar!\n";
			    	
			}
			
			system("pause");
			
			goto menuu;
			
			break;
			
			case 2:
				
			system("cls");	
			
			cout<<"La cantidad de letras que usted ingres"<<char(162)<<"--> "<<letras<<endl<<endl;
			
			for (p=1; p<=letras; p++){
				
			  	primo = letras%p;
				if (primo == 0){
					
				  	nprimo++;
				  	
				}
				  
			}
			
			if (nprimo == 2){
				
			  	cout<<"Es un n"<<char(163)<<"mero primo\n";
			  	
			}
			
			else{
				
			  	cout<<"No es un n"<<char(163)<<"mero primo\n";
			  	
			}
			 	
			if (letras%7 == 0){
				
			  	cout<<"Es divisible entre 7\n";
			  	
			}
			
			else{
			 
			  cout<<"No es divisible entre 7\n";
			  
			}
			
			system("pause");
			
			goto menuu;
			
			break;
			
			case 3:
				
				exit(0);
				
			break;		
			
			default:
				
			if(opcion<0 || opcion >3){
				
			  	cout<<"Ingrese un opci"<<char(162)<<"n v"<<char(160)<<"lida\n";
			  	goto menu;
			  	
			}
		
		}
		
		exit(0);
		
	} 	
	
	return 0;
	
}

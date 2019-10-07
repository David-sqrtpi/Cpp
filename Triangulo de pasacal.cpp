#include <iostream>

using namespace std;

int Coeficiente[100][100], Grado, i, j;

int main(){

	do{
		
		cout<<"Grado del polinomio deseado > ";
		cin>>Grado;
		if(Grado<0){
			
			cout<<"Dato invalido\nIntente nuevamente\n";
			system("pause");
			system("cls");
			
			
		}
		
	}
	while(Grado<0);
	
	system("cls");
	
	for(int i=0; i<=Grado; i++){
		
		for(int j=0; j<=Grado; j++){
			
			if( i==0 or i==j){
				
				Coeficiente[i][j]=1;
				
			}
			
			else if(j>i){
				
				Coeficiente[i][j]=0;
				
				
			}
			
			else{
				
				Coeficiente[i][j]=Coeficiente[i-1][j-1]+Coeficiente[i-1][j];
				
			}
			
		}
		
	}
	
	for(int i=0; i<=Grado; i++){
		
		for(int j=0; j<=Grado; j++){
			
			
			if(j>i){
				
				cout<<"";
				
			}
			else{
				
				cout<<Coeficiente[i][j]<<"\t";
				
			}
			
			
		}
		
		cout<<endl;
		
	}
	
	return 0;
	
}

#include <iostream>
using namespace std;

int Dato[3], aux, j, i;
void Ordenados();

int main(){
	
	cout<<"Digite tres datos\n";
	cin>>Dato[0];
	cin>>Dato[1];
	cin>>Dato[2];
	Ordenados();
	return 0;
}

void Ordenados(){
	
	for (i=0; i<3; i++){
		for (j=i+1; j<3; j++){
			if (Dato[i]>Dato[j]){
				aux=Dato[j];
				Dato[j]=Dato[i];
				Dato[i]=aux;
			}
		}
	}
	
	for(i=0; i<3; i++)
	  	{  	
	  		cout<<Dato[i]<<"	";
	  	}
	
	return ;
	
}

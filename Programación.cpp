#include<iostream>

using namespace std;
int inicio[10], final[10];
int aux=0;
int main(){
	
for(int i=0; i<10; i++){
	
	cout<<"Digite el dato "<<i+1<<endl;
	cin>>aux;
	inicio[i]=aux;
	if(aux > 4){
		aux = aux - 4;
		final[i] = aux;
	}
	else{
		inicio[i] = aux;
		final[i] = aux;
	}
	system("cls");
}	
cout<<"Los datos del arreglo inicial son \n\n";
for(int i = 0; i<10; i++){
	
	cout<<inicio[i]<<"\t";
}
	

cout<<"\n\nLos datos del arreglo final son \n\n";
for(int i = 0; i<10; i++){
	
	cout<<final[i]<<"\t";
}

	return 0;
}


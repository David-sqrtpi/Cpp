#include <iostream>

using namespace std;

void Llenar(int Matriz[][100], int, int);

int NMenorFila (int Matriz[][100], int, int);

int main(){
	
	int Matriz[100][100];
	int NFilas, NColumnas;
	Llenar(Matriz, NFilas, NColumnas);
	cout<<"\nEl menor numero de la fila de la matriz es > "<<NMenorFila(Matriz, NFilas, NColumnas)<<endl;
	
	return 0;
	
}

void Llenar(int Matriz[][100], int NFilas, int NColumnas){
	
	cout<<"Ingrese el numero de filas de la matriz > ";
	cin>>NFilas;
	cout<<"\nIngrese el numero de columnas de la matriz > ";
	cin>>NColumnas;
	
	for(int i=0; i<NFilas; i++){
		
		for(int j=0; j<NColumnas; j++){
			
			cout<<"Ingrese el numero, posicion ["<<i<<"]["<<j<<"] > ";
			cin>>Matriz[i][j];
			
		}
		
	}
	
	return ;
	
}

int NMenorFila (int Matriz[][100], int NFilas, int NColumnas){
	
	int Fila, Menor=999;
	
	cout<<"\nDigite el numero de la fila que desea consultar > ";
	cin>>Fila;
	Fila--;
	
	for(int j=0; j<NColumnas; j++){
		
		if(Matriz[Fila][j] < Menor){
			
			Menor = Matriz[Fila][j];
			
		}
		
	}
	
	return Menor;
	
}

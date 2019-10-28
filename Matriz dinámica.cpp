#include <iostream>

using namespace std;

void PedirDatos(), SumarMostrar(int **, int**, int, int);

int **Matrix, **Matrix2;

int NumeroF, NumeroC;

int main(){
	
	PedirDatos();
	SumarMostrar(Matrix, Matrix2, NumeroF, NumeroC);
	
	for(int i=0; i<NumeroF; i++){
		
		delete[] Matrix[i];
		delete[] Matrix2[i];
		
	}
	
	delete[] Matrix;
	delete[] Matrix2;
	
	return 0;
	
}

void PedirDatos(){
	
	cout<<"Digite la cantidad de filas de las martrices > ";
	cin>>NumeroF;
	cout<<"Digite la cantidad de columnas de las matrices > ";
	cin>>NumeroC;
	
	Matrix = new int*[NumeroF];
	for(int i=0; i<NumeroC; i++){
		
		Matrix[i] = new int[NumeroC];
		
	}
	
	cout<<"\nPrimer Matriz\n\n";
	
	for(int i=0; i<NumeroF; i++){
		
		for(int j=0; j<NumeroC; j++){
			
			cout<<"Digite un dato para la matriz 1 ["<<i<<"]["<<j<<"] > ";
			cin>>*(*(Matrix+i)+j);
			
		}
		
	}
	
	cout<<"\nSegunda Matriz\n\n";
	
	Matrix2 = new int*[NumeroF];
	for(int i=0; i<NumeroC; i++){
		
		Matrix2[i] = new int[NumeroC];
		
	}
	
	for(int i=0; i<NumeroF; i++){
		
		for(int j=0; j<NumeroC; j++){
			
			cout<<"Digite un dato para la matriz 2 ["<<i<<"]["<<j<<"] > ";
			cin>>*(*(Matrix2+i)+j);
			
		}
		
	}
	
}

void SumarMostrar(int **Matrix1, int **Matrix2, int NumeroF, int NumeroC){
	
	for(int i=0; i<NumeroF; i++){
		
		for(int j=0; j<NumeroC; j++){
			
			*(*(Matrix+i)+j) += *(*(Matrix2+i)+j);
			
		}
		
	}
	
	cout<<"\nMatriz resultante\n\n";
	
	for(int i=0; i<NumeroF; i++){
		
		for(int j=0; j<NumeroC; j++){
			
			cout<<*(*(Matrix+i)+j)<<"\t";
			
		}
		
		cout<<"\n";
		
	}
	
}

#include <iostream>
using namespace std;
int matriz_a[100][100], matriz_b[100][100], matriz_c[100][100], i, j, componente[100], h, filas_a, columnas_a, filas_b, columnas_b; 
int main(){
	for (i=0; i<=100; i++){
		matriz_c[i][i]=0;
		matriz_b[i][i]=0;
		matriz_a[i][i]=0;
		componente[i]=0;
	}
	cout<<"Digite el orden de la matriz 'A' \n";
	cout<<"Numero de filas: ";
	cin>>filas_a;
	system("cls");
	cout<<"Digite el orden de la matriz 'A' \n";
	cout<<"Digite el numero de columnas: ";
	cin>>columnas_a;
	system("cls");
	cout<<"Digite el orden de la matriz 'B' \n";
	cout<<"Nota: El numero de filas de la matriz 'B' debe ser igual al numero de columnas de la matriz 'A'.\n";
	cout<<"Numero de filas: ";
	cin>>filas_b;
	system("cls");
	while (filas_b != columnas_a){
		cout<<"Digite el orden de la matriz 'B' \n";
		cout<<"El numero de filas de la matriz 'B' debe ser igual al numero de columnas de la matriz 'A'.\n";
		cout<<"Numero de filas: ";
	    cin>>filas_b;
	    system("cls");
	}
	cout<<"Digite el orden de la matriz 'B' \n";
	cout<<"Digite el numero de columnas: ";
    cin>>columnas_b;
    system("cls");
    for (i=0; i<filas_a; i++){
		for (j=0; j<columnas_a; j++){
			cout<<"Escriba las componentes de la matriz 'A'\n";
			cout<<"Fila "<<i+1<<endl;
			cout<<"Columna "<<j+1<<endl;
			cout<<"---> ";
			cin>>matriz_a[i][j];		
			system("cls");
		}
	}
	cout<<"Matriz A= ";
	for (i=0; i<filas_a; i++){
		for (j=0; j<columnas_a; j++){
			cout<<"\t"<<matriz_a[i][j]<<" ";
		}
		cout<<"\n\n\t";
	}
	system("pause");
	system("cls");
    for (i=0; i<filas_b; i++){
		for (j=0; j<columnas_b; j++){
			cout<<"Escriba las componentes de la matriz 'B'\n";
			cout<<"Fila "<<i+1<<endl;
			cout<<"Columna "<<j+1<<endl;
			cout<<"---> ";
			cin>>matriz_b[i][j];		
			system("cls");
		}
	}
	cout<<"Matriz B= ";
	for (i=0; i<filas_b; i++){
		for (j=0; j<columnas_b; j++){
			cout<<"\t"<<matriz_b[i][j]<<" ";
		}
		cout<<"\n\n\t";
	}
	system("pause");
	for (i=0; i<filas_a; i++){
	    for (j=0; j<columnas_b; j++){
			for (h=0; h<filas_b; h++){
				componente[h]=matriz_a[i][h]*matriz_b[h][j];
				matriz_c[i][j]=matriz_c[i][j]+componente[h];								
			}
		}
	}
	system("cls");
	cout<<"Matriz C= ";
	for (i=0; i<filas_a; i++){
		for (j=0; j<columnas_b; j++){
			cout<<"\t"<<matriz_c[i][j]<<" ";
		}
		cout<<"\n\n\t";
	}
	cout<<":')";
	return 0;
}

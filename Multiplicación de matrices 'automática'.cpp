#include <iostream>
using namespace std;
int matriz_a[3][3]={1, 2, 3, 4, 5, 6, 7, 8, 9}, matriz_b[3][3]={1, 2, 3, 4, 5, 6, 7, 8, 9}, matriz_c[3][3], i=0, j=0, h, componente_matriz[3]; 
int main(){	
	cout<<"Multiplicacion de dos matrices!\n\n";
	cout<<"Matriz A= ";
	for (i=0; i<3; i++){
		for (j=0; j<3; j++){
			cout<<"\t"<<matriz_a[i][j]<<" ";
		}
		cout<<"\n\n\t";
	}
	cout<<endl<<"---------------------------------\n\n";
	cout<<"Matriz B= ";
	for (i=0; i<3; i++){
		for (j=0; j<3; j++){
			cout<<"\t"<<matriz_b[i][j]<<" ";
		}
		cout<<"\n\n\t";
	}		
    for (i=0; i<3; i++){
	    for (j=0; j<3; j++){
			for (h=0; h<3; h++){
				componente_matriz[h]=matriz_a[i][h]*matriz_b[h][j];
				matriz_c[i][j]=matriz_c[i][j]+componente_matriz[h];								
			}
		}
	}
	cout<<endl<<"---------------------------------\n\n";
	cout<<"Matriz C= ";
	for (i=0; i<3; i++){
		for (j=0; j<3; j++){
			cout<<"\t"<<matriz_c[i][j]<<" ";
		}
		cout<<"\n\n\t";
	}
	return 0;
}

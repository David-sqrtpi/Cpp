#include <iostream>
using namespace std;

int Estudiantes;
double Notas[100][5], Max[100]; 
void Definitivas (), NotaMaxyMin();

int main(){
	
	cout<<"Digite el numero de estudiantes > ";
	cin>>Estudiantes;
	Definitivas ();
	NotaMaxyMin();
	return 0;
}

void Definitivas(){
	
	for (int i=0; i<Estudiantes; i++){
		for (int j=0; j<3; j++){
			cout<<"Digite la nota "<<j+1<<" del estudiante "<<i+1<<" > ";
			cin>>Notas[i][j+1];
		}
	}
	
	for (int i=0; i<Estudiantes; i++){	
		Notas[i][4]=(Notas[i][1]+Notas[i][2]+Notas[i][3])/3;
		Max[i]=Notas[i][4];
	}
	
	for (int i=0; i<Estudiantes; i++){
			for (int j=0; j<Estudiantes; j++){
			Notas [i][0]=i+1;
		}
	}
	
	cout<<"\nCodigo	Nota 1	Nota 2	Nota 3	Definitiva\n\n";
	for (int i=0; i<Estudiantes; i++){
		for (int j=0; j<5; j++){
			cout<<Notas[i][j]<<"	";
		}
		cout<<endl;
	}
	return ;

}

void NotaMaxyMin(){
	double aux;
	for (int i=0; i<Estudiantes; i++){
		for (int j=i+1; j<Estudiantes; j++){
			if (Max[i] > Max[j]){
				aux = Max[j];
				Max[j]=Max[i];
				Max[i]=aux;
			}		
		}
	}
	
	cout<<"\nNota maxima, "<<"estudiante codigo >"<<Notas[Estudiantes-1][0]<<"< con nota >"<<Max[Estudiantes-1]<<"<";
	//cout<<"\nNota minima > "<<Max[0];
	cout<<"\nNota minima, "<<"estudiante codigo >"<<Notas[0][0]<<"< con nota >"<<Max[0]<<"<";
	return ;
}

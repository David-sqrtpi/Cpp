#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int Numero;
int cubo (int);

int main (){

cout<<"Digite un numero X para calcular su cubo (X"<<char(252)<<")\nX = ";
cin>>Numero;
cout<<Numero<<char(252)<<" = "<<fixed<<setprecision(2)<<cubo(Numero);
	
	return 0;
}

int cubo(int Numero){
	Numero = pow (Numero, 3);
	return Numero;
}

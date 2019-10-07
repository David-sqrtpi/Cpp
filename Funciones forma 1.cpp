//Lee un número y halla su raiz cuadrada usando funciones.
#include <iostream>
#include <math.h>
using namespace std;
float raiz(float); 
float a;
int main(){
	cout<<"Digite un dato\n";
	cin>>a;
	if (a>=0.0)
	   {
	   	cout<<"La raiz cuadrada de "<<a<<" es "<<raiz(a)<<endl;
	   }
	else 
	   {
	   	cout<<"Es casi imposible hallar la raiz cuadrada de un numero negativo\n";
	   }   
	return 0;
}
float raiz(float a)
{
	return sqrt(a);
}

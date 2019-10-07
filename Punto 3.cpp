#include <iostream>
#include <iomanip>
using namespace std;

double DistanciaMillas;
void DistanciaMetros ();

int main(){
	
	cout<<"Escriba una distancia en millas para convertir a metros\n";
	cout<<"Distancia en millas >	";
	DistanciaMetros();
	return 0;
}
void DistanciaMetros(){
	double x;
	cin>>DistanciaMillas;
	x = DistanciaMillas*1852; //1 milla marina equivale a 1852 metros.
	cout<<fixed<<setprecision(3)<<DistanciaMillas<<" millas equivalen a "<<fixed<<setprecision(3)<<x<<" metros."<<endl;
	return ;
}

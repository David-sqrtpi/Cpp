#include <iostream>
#include <math.h>
using namespace std;

double Velocidad, Angulo, X, Y=1, Time=0.1, Gravedad=9.8, VelX, VelY;

int main(){
	
	
	do{
		
		cout<<"Ingrese la velocidad de lanzamiento > ";
		cin>>Velocidad;
		
		cout<<"Ingrese el angulo de lanzamiento > ";
		cin>>Angulo;
		
		if(Angulo < 0 or Angulo > 90 or Velocidad < 0){
			
			cout<<"Los datos no son validos\nIntente nuevamente\n";
			system("pause"); system("cls");
			
		}
		
			
	}
	while(Velocidad < 0 or Angulo < 0 or Angulo > 90);
	
	Angulo=(Angulo*M_PI)/360;
	
	/*do{
		
		
		
	}*/	
	while(Y>0){
		
		VelX=cos(Angulo)*Velocidad;
		VelY=sin(Angulo)*Velocidad;
		X=VelX*Time;
		//Y=(VelY*Time) + ((Gravedad*Time*Time)/2);
		Y = VelY * Time - 40 /2 * Time * Time; //why?
		
		if(Y>0){
			
			cout<<"Posicion de la coordenada X > "<<X<<endl;
			cout<<"Posicion de la coordenada Y > "<<Y<<endl;
			cout<<"Velocidad en el eje X > "<<VelX<<endl;
			cout<<"Velocidad en el eje Y > "<<VelY<<endl;
			Time +=0.1;
			
		}	
		
	}
	
	
	
	return 0;
	
}

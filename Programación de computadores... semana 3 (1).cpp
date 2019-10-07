
/*#include<iostream>
using namespace std;
int n, dato, i, cont;
int main(){
    
    cout<<"Digite el numero de datos para verificar\n\n";
    cin>>n;
	system("cls");  
    for(i=1;i<=n;i++){
    cout<<"Digite el dato "<<i<<endl<<endl;   
    cin>>dato;
	system("cls");
	if(dato>10){
        cont++;
    }	 
    }
     
    cout<<"Hay "<<cont<<" datos mayores que 10 en los "<<n<<" numeros que ingreso\n";
    
    return 0;
}*/
#include <iostream>
#include <iomanip>
using namespace std;
float dato, prom;
int i, j=0;
int main(){
	
	for(i=1;i<=6;i++){
		
		cout<<"Digite un dato...\n";
		cin>>dato;
		if(dato>0){
	    j++;
		prom=dato+prom;
	}
	}
	
	cout<<"El promedio de los datos positivos que ingreso es "<<prom/j<<endl;

	return 0;
}

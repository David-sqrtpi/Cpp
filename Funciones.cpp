#include <iostream>
#include <math.h>
using namespace std;
int n, opc, fac(int);
void fibo(int);
int main(){
	cout<<"Digite el valor a comprobar\n";
	cin>>n;
	cout<<"Digite una opcion\n";
	cout<<"1. Hallar factorial...\n";
	cout<<"2. Hallar serie de fibonacci...\n";
	cin>>opc;
	switch (opc)
	   {	   
	   case 1:
	   	  cout<<"El valor de "<<n<<"! es "<<fac(n)<<endl;
	   break;
	   
	   case 2:
	   	  cout<<"El valor de "<<n<<" fibonacci es "<<endl;
	   	  fibo(n);
	   break;  
	   
	   case 3:
	   	cout<<"bai\n";
	   	exit(0);
	   break;	
	   }
	return 0;	
}
int fac(int n)
   {
   	
   }
void fibo(int n)
   {
   	int i=1, a=0, b=1;
   	cout<<a<<"	"<<b<<"	";
   	
   	while (i<=n-2)
   	   {
		a=a+b;
		cout<<a<<"	";
		b=b+a;
		cout<<b<<"	";
	    i++;
	   }
return;
   }               

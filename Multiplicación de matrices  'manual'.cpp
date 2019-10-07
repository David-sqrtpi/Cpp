#include <iostream>
using namespace std;
int a[3][3]={1, 2, 3, 4, 5, 6, 7, 8, 9}, b[3][3]={1, 2, 3, 4, 5, 6, 7, 8, 9}, c[3][3], i=0, j=0;
int main(){
	cout<<"\tMultiplicacion de matrices...\n\n"; 
	cout<<"A=\t";
	for(i=0; i<3; i++)
	    {
	    	for(j=0; j<3; j++)
	    	  {
	    	  	cout<<a[i][j]<<" \t";	
			  }	
	    	cout<<endl<<endl<<"\t";
	    }
    cout<<"\n-------------------------------------\n";
	cout<<"\n\nB=\t";
	for(i=0; i<3; i++)
	    {
	    	for(j=0; j<3; j++)
	    	  {	
	    	  	cout<<b[i][j]<<" \t";
			  }
	    	cout<<endl<<endl<<"\t";
	    }	    
	cout<<"\n\tResultado...\n\n";
	cout<<"C=\t";
	for(i=0; i<3; i++)
	  {
	  	for(j=0; j<3; j++)
	  	  {
	  	  	c[i][j]=(a[i][0]*b[0][j]) + (a[i][1]*b[1][j]) + (a[i][2]*b[2][j]);
	  	  	
		  }
	  }	  
	  for(i=0; i<3; i++)
	    {
	    	for(j=0; j<3; j++)
	    	  {
	    	  	cout<<c[i][j]<<" \t";	
			  }	
	    	cout<<endl<<endl<<"\t";
	    }
	return 0;
}

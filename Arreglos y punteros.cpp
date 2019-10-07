#include <iostream>

using namespace std; 

int main(){
	
	int Numeros[] = {1, 2, 3, 4, 5};
	int *dir_Numeros;
	
	dir_Numeros = Numeros;
	
	for(int i = 0; i < 5; i++){
		
		cout<<"Elemento del vector ["<<i<<"]: "<<*dir_Numeros++<<endl;
		
	} 
	
	return 0;
	
}

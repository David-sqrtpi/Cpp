#include <iostream>
#include <stdlib.h>
#include <fstream>
#define MAX_V 100     
#define MAX_PV 100
 
using namespace std;   
struct unProducto {
    char name_prod[25];  
    int  cantidad;
    int  precio  ;
    int  subtotal;
};
 
struct variosProductos {
    int numProd ;             
    unProducto vp[MAX_PV];     
    int precioTotal ;
};
 
struct Vendedor {

	int b, c=0;
    char nombre[25]   ;
    char apellido[25] ;
    char direccion[25];
    int  cedula     ;
    variosProductos P  ;
    
};
void registrar_productos(int , int );
void registrar_vendedores(int );
void datosVendedor(int , int );
void prodVendedor(int , int );
void mostrar_productos(int );
void mostrar_vendedores(int );
void eliminar_vendedor( int , int &);
void buscar_vendedor( int );
void menu1(int & opcion);
struct Vendedor lista[MAX_V]; 
struct Vendedor aux;
int main()
{
    int num=0;  
    int opcion=0;   
    int num_vendedor;
    int nv;
    int np;
   
    system("color 0b");
 
    do
    {
        menu1(opcion);  
 
        switch(opcion)
        {
            case 1:
                cout<<"\n Numero de vendedores: ";
                cin>> num;
                registrar_vendedores(num);  
				cout<<endl;
                break;
 
            case 2:
                mostrar_vendedores(num);
                break;
 
            case 3:
                cout<<"\n Ingrese numero de vendedor: ";
                cin>> num_vendedor;
                datosVendedor( num_vendedor-1, num);
                break;
 
            case 4:
                cout<<"\n Ingrese numero de vendedor: ";
                cin>> num_vendedor;
                prodVendedor( num_vendedor-1, num);
                break;
 
            case 5:
                cout<<"\n Ingrese numero de vendedor: ";
                cin>> num_vendedor;
                eliminar_vendedor( num_vendedor-1, num);
                cout<<"\n\n\t\tVendedor eliminado ..!"<<endl;
                break;
 
            case 6:
                cout<<"\n Ingrese numero de Cedula: ";
                cin>> aux.cedula;
                buscar_vendedor(num);
                break;
 
        }
       
        cout<<endl<<endl;
        system("pause");  system("cls");
 
    } while(opcion != 7);
 
 
    return 0;
} 
 
void registrar_productos(int nv, int np)
{
   
 
    for(int i=0; i<np; i++)
    {
        ofstream d;
		d.open("datos1.txt",ios::app);
		if(!d)
		cout<<"Error al crear archivo"<<endl;
		else
		{	
		cout<<"\n\tProducto "<< i+1 <<endl;
        cin.ignore();
        cout<<"\t\tNombre   : " ;
        cin.getline( lista[nv].P.vp[i].name_prod, 25 );
 
        
        cout<<"\t\tCantidad : ";
        cin>> lista[nv].P.vp[i].cantidad ;
 
        
        cout<<"\t\tPrecio   : ";
        cin>> lista[nv].P.vp[i].precio ;
 
        lista[nv].P.vp[i].subtotal = lista[nv].P.vp[i].cantidad * lista[nv].P.vp[i].precio ;  // subtotal = precio*cantidad
 
        if(lista[nv].P.vp[i].subtotal==0)
            cout<<"Subtotal 0";
 
        lista[nv].P.precioTotal = lista[nv].P.precioTotal +  lista[nv].P.vp[i].subtotal ;
 		d<<"\n\tProducto "<< i+1<<endl;
 		d<<"\n\tNombre "<<lista[nv].P.vp[i].name_prod<<endl;
 		d<<"\n\tPrecio "<<lista[nv].P.vp[i].precio<<endl;
 		d<<"\n\tSubtotal "<<lista[nv].P.vp[i].subtotal<<endl;
 	
 		d.close();
    }
 }
}
void registrar_vendedores(int n)
{
	int c;
	int b;
    int np;  
    b=b+n;
    for(int i=c; i<b; i++)
    {
       ofstream d;//of significa salida porque en archivo es al reves
		d.open("datos1.txt",ios::app); //aqui vamos a escribir los datos 
		if(!d)
		cout<<"Error al crear archivo"<<endl;
		else
		{
	    cout<<"\nVENDEDOR "<< i+1 << "\n";
 		d<<"\nVENDEDOR "<< i+1;
        cin.ignore();  cout << "   Nombres   : ";  cin.getline( lista[i].nombre, 25   ); //limpiando los espacios y carga con espacios
        cin.ignore();  cout << "   Apellidos : ";  cin.getline( lista[i].apellido, 25 );
        cin.ignore();  cout << "   Direccion : ";  cin.getline( lista[i].direccion, 25);
        cin.ignore();  cout << "   CEDULA    : ";  cin>> lista[i].cedula ;
 		d<<"\tNombre  : " << lista[i].nombre<<"  "<<lista[i].apellido<<endl;
 			d.close();
		cout<<"\n   > Numero de productos: ";      cin>> lista[i].P.numProd ;
 		c++;
        registrar_productos( i ,lista[i].P.numProd );
	
    	}
	}
	
	}
void datosVendedor(int x, int num)
{
    if(num>0)
    {
        cout<<endl<<endl;
        cout << "\t" << lista[x].nombre <<' '<< lista[x].apellido << endl;
        cout << "   Cedula   :  "<< lista[x].cedula       << endl;
        cout << "   Direccion:  "<< lista[x].direccion << endl;
    }
    else
        cout<<"\n\tRegistro vacio..!";
 
}
 
void prodVendedor(int x, int num)
{
    if(num>0)
    {
        cout<<endl<<endl;
        
        cout << "   Productos de " << lista[x].nombre <<' '<< lista[x].apellido << endl<<endl;
 	        for(int i=0; i<lista[x].P.numProd; i++)
	        {
	        	
            cout<<"\n   Producto "<< i+1                      <<endl;
            cout<<"\tNombre  : " << lista[x].P.vp[i].name_prod  <<endl;
            cout<<"\tCantidad: " << lista[x].P.vp[i].cantidad <<endl;
            cout<<"\tPrecio  : " << lista[x].P.vp[i].precio     <<endl;
            cout<<"\tSubtotal: " << lista[x].P.vp[i].subtotal <<endl ;
            }
        cout<<endl;
        cout<<"  ---------------------------"<<endl;
        cout<<"  PRECIO TOTAL:   "<< lista[x].P.precioTotal;
       
        }
 

    else
        cout<<"\n\tRegistro vacio..!";
}

 
void mostrar_productos(int nv)
{
    cout<<"   Productos: \n\n";
    for(int i=0; i<lista[nv].P.numProd; i++)
    {
        cout<<"\t- " << lista[nv].P.vp[i].name_prod <<endl ;
    }
}
 
void mostrar_vendedores(int num)
{
    if( num>0)
    {
        cout<<"\n\nMostrando lista de Vendedores\n";
        for(int i=0; i<num; i++)
        {
            cout<<endl<<endl;
            cout<< i+1<<". "<< lista[i].nombre <<' '<< lista[i].apellido << endl;
            cout << "   Cedula      :  "<< lista[i].cedula       << endl;
            cout << "   Direccion:  "<< lista[i].direccion << endl;
 
            mostrar_productos( i );
            cout<<endl;
 
        }
    }
    else
        cout<<"\n\tRegistro vacio..!";
}
 
void eliminar_vendedor( int x, int &num)// &num es un archivo de memoria 
{
    if(num>0)
    {
        for(int i=x; i<num-1; i++)
            lista[i] = lista[i+1];//es como si estuviera reemplazandolo en el archivo anterior
 
        num--;//aqui elimina el registro ej de 5 ahora seria 4
    }
    else
        cout<<"\n\tRegistro vacio..!";
 
}
 
void buscar_vendedor( int num)
{
    int band = 0;
 
    if(num>0)
    {
        for(int i=0; i<num; i++)
        {
            if(lista[i].cedula==aux.cedula)
            {
                cout<<"\n\n La direccion de "<<lista[i].nombre<<" "
                    <<lista[i].apellido<<" es : "
                    <<lista[i].direccion <<endl ;
                band = 1 ;
                break;
            }
        }
    }
    else
        cout<<"\n\tRegistro vacio..!";
 
    if(band==0)
        cout<<"\n\n\tEl vendedor no fue encontrado..! :S"<<endl;
 
}
 
void menu1(int &opcion)
{
    cout<<"\n\t\tREGISTRO DE VENDEDORES\n\n";
    cout<<" 1. Registrar vendedores                       "<<endl;
    cout<<" 2. Mostrar registro de vendedores y productos "<<endl;
    cout<<" 3. Mostrar datos de un vendedor               "<<endl;
    cout<<" 4. Mostrar productos vendidos de un vendedor  "<<endl;
    cout<<" 5. Eliminar vendedor del registro             "<<endl;
    cout<<" 6. Buscar direccion de vendedor por Cedula    "<<endl;
    cout<<" 7. Salir                                      "<<endl;
 
    cout<<"\n Ingrese opcion : ";
    cin>>opcion;
}

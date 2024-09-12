/*
Escriba un programa recursivo que busque un valor x en un arreglo unidimensional de enteros
*/ 

#include <iostream> 
#include <cstdlib>
#include <ctime>

using namespace std; 

int busquedaX(int[], int, int); 

int main(){
	srand(time(0)); 
	
	int n, x; 
	
	cout<<"Digite la cantidad de elementos que tendra el arreglo: "; 
	cin>>n; 
	
	int enteros[n]; 
	
	for(int i=0; i<n; i++){
		enteros[i] = 1 + rand()% 9; 
	}
	
	cout<<"\nSe acaba de generar un arreglo aleatorio: "; 
	for(int i=0; i<n; i++){
		cout<<enteros[i]<<" "; 
	}
	cout<<endl; 
	
	cout<<"\nDigite algun elemento del arreglo, para comprobar que esta dentro del arreglo: "; 
	cin>>x; 
		
	int valor; 
	
	valor = busquedaX(enteros, n , x); 
		
	if(valor== 1){
		cout<<"\nEl elemento existe en el arreglo. "; 
	}
	else{
		cout<<"\nEl elemento no existe en el arreglo. ";
	}
		
	return 0; 
}

int busquedaX(int a[], int elemen, int numero){
	if(elemen==0){
		return 0; 
	}
	else if(a[elemen-1]==numero){
		return 1;  
	}
	else{
		return busquedaX(a, elemen-1, numero); 
	}
}


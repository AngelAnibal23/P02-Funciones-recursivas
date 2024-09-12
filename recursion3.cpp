/*
Encuentre al maximo elemento de un arreglo unidimensional usando recursividad
*/

#include <iostream> 
#include <ctime>
#include <cstdlib>

using namespace std; 

int encontrarMaximo(int[], int); 

int main(){
	srand(time(0)); 
	
	int n, x; 
	
	cout<<"Digite la cantidad de elementos que tendra el arreglo: "; 
	cin>>n; 
	
	int array[n]; 
	
	for(int i=0; i<n; i++){
		array[i] = 1 + rand()% 40; 
	}
	 
	
	cout<<"\nSe acaba de generar un arreglo aleatorio: "; 
	for(int i=0; i<n; i++){
		cout<<array[i]<<" "; 
	}
	cout<<endl; 
	
	cout<<"\nEl elemento maximo del arreglo es: "<<encontrarMaximo(array, n); 
			
	return 0; 
}

int encontrarMaximo(int A[], int elementos){
	int mayor; 
	if(elementos==0){
		mayor = A[elementos]; 
		
		return	mayor;
	} 
	else{
		mayor = encontrarMaximo(A, elementos-1); 
		
		if(A[elementos-1]>mayor){
			mayor = A[elementos-1]; 
		}
		
		return mayor; 
	}
}
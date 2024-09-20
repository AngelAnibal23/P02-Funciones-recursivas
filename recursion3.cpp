#include <iostream> 
using namespace std; 

int Maximo(int A[], int elementos){
	int mayor; 
	if(elementos==0){
		return A[elementos]; 
	} 
	else{
		mayor = Maximo(A, elementos-1); 
		
		if(A[elementos-1]>mayor){
			mayor = A[elementos-1]; 
		}
		
		return mayor; 
	}
}
int main(){
	int n; 
	
	cout<<"Digite la cantidad de elementos que tendra el arreglo: "; 
	cin>>n; 
	
	int array[n]; 
	
	for(int i=0; i<n; i++){
		cout<<"Digite el elemento ["<<i<<"]: "; 
		cin>>array[i];  
	} 
	
	cout<<"\nSe acaba de generar un arreglo aleatorio: "; 
	for(int i=0; i<n; i++){
		cout<<array[i]<<" "; 
	}
	cout<<endl; 
	
	cout<<"\nEl elemento maximo del arreglo es: "<<Maximo(array, n); 
			
	return 0; 
}


#include <iostream> 
using namespace std; 

int busqueda(int a[], int e, int num){
	if(e==0){
		return 0; 
	}
	else if(a[e-1]==num){
		return 1;  
	}
	else{
		return busqueda(a, e-1, num); 
	}
}

int main(){
	int n, x; 
	
	cout<<"Digite la cantidad de elementos que tendra el arreglo: "; 
	cin>>n; 
	
	int enteros[n]; 
	
	for(int i=0; i<n; i++){
		cout<<"Digite el elemento ["<<i<<"]: "; 
		cin>>enteros[i];  
	} 
	
	cout<<"\nArreglo: "; 
	for(int i=0; i<n; i++){
		cout<<enteros[i]<<" "; 
	}
	cout<<endl; 
	
	cout<<"\nDigite algun elemento del arreglo, para comprobar que esta dentro del arreglo: "; 
	cin>>x; 
		
	int valor; 
	
	valor = busqueda(enteros, n , x); 
		
	if(valor== 1){
		cout<<"\nEl elemento existe en el arreglo. "; 
	}
	else{
		cout<<"\nEl elemento no existe en el arreglo. ";
	}
		
	return 0; 
}




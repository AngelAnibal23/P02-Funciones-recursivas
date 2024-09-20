#include <iostream> 
using namespace std; 

int invertirNumero(int a, int aux){
	if(a==0){
		return aux; 
	}
	else{
		aux = (10 * aux) + (a%10); 
		
		return invertirNumero(a/10, aux); 
	}
}

int main(){
	int numero, aux = 0;  
	cout<<"Escriba un numero: "; 
	cin>>numero; 
	
	cout<<"\nEl resultado es: "<<"f("<<numero<<") = "<<invertirNumero(numero, aux); 
	
	return 0; 
}


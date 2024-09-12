/*
Escriba un metodo recursivo que calcule la potencia de n de un numero x (n es un numero natural)
*/

#include <iostream> 
using namespace std; 

int potencia(int, int); 

int main(){
	int a, b; 
	
	cout<<"Digite un numero: "; 
	cin>>a; 
	cout<<"Digite la potencia a la que elevara el numero: "; 
	cin>>b; 
	
	cout<<"\nEl resultado de "<<a<<" elevado a "<<b<<" es: "<<potencia(a,b); 
	
	
	return 0;
}

int potencia(int x, int y){
	if(y==0){
		return 1; 
	}
	else if(y==1){
		return x; 
	}
	else{
		return x * potencia(x,y-1); 
	}
}
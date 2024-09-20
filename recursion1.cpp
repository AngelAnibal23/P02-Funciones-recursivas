#include <iostream> 
using namespace std; 

int potencia(int a, int b){
	if(b==0){
		return 1; 
	}
	else if(b==1){
		return a; 
	}
	else{
		return a * potencia(a,b-1); 
	}
}

int main(){
	int n, x; 
	
	cout<<"Digite un numero: "; 
	cin>>n; 
	cout<<"Digite la potencia a la que elevara el numero: "; 
	cin>>x; 
	
	cout<<"\nEl resultado de "<<n<<" elevado a "<<x<<" es: "<<potencia(n,x); 
	
	
	return 0;
}


#include <iostream>
using namespace std; 

int main(){
	int n, fattoriale=1, i=1; 
	cout<<"Inserire il numero di cui si vuole calcolare il fattoriale: "; 
	cin>>n; 
	
	while(i<=n){
		fattoriale *= i;
		i++; 
	}
	
	cout<<""<<n<<"! = "<<fattoriale<<endl;
	 
	return 0; 
}

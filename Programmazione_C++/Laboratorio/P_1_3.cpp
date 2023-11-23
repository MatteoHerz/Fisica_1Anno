#include <iostream>
using namespace std; 

int main(){
	int i,j=0,n; 
	
	cout<<"Quanti asterischi per lato stampare: "; 
	cin >>n; 
	
	while(j<n){ 
		i=0;
		while(i<n){
			cout<<"*";
			i++;
		}
		cout<<"\n";
		j++; 
	}
	cout<<"\n"; 
	
	return 0; 
}

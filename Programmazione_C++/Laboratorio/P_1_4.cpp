#include <iostream>
using namespace std; 

int main(){
	int j=0,n; 
	int i;
	int k=0;   
	
	cout<<"Quanti asterischi stampare alla base della piramide: "; 
	cin >>n; 
	
	/*while(j<n){
		i=0;
		while(i<=j){
			cout<<"*";
			i++;
		}
		cout<<"\n";
		j++; 
	}*/
	
	while(j<n){
		i=0;
		while(i<n){
		if(i<k){
			cout<<" ";
		} else{
			cout<<"*";
		}
			i++;
		}
		k++; 
		j++; 
		cout<<"\n";
	}	
	
	return 0; 
}

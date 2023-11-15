#include <iostream>
using namespace std; 

int main(){
	
	int a,b; 
	
	cout<<"Inserire il primo numero ";
	cin >>a; 
	cout<<"\n";
	 
	cout<<"Inserire il secondo numero ";
	cin >>b; 
	cout<<"\n"; 
	
	if(a%b==0){
		cout<<"Il primo numero è multiplo del secondo\n"; 
	} else if(b%a==0){
		cout<<"Il secondo numero è multiplo del primo\n"; 
	} else {
		cout<<"I due numeri non sono multipli\n"; 
	}
	
	return 0; 
}

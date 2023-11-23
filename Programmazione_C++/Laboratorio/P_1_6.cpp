#include <iostream>
using namespace std; 

int main(){
	int i=0, a;
	int max, min;  
	while(i<10){
		cout<<"inserire il "<<i+1<<" numero: "; 
		cin>>a; 
		if(i==0){
			max = a;
			min = a;
		} else {
			if(a>max){
				max = a; 
			} else if(a<min){
				min = a; 
			}
		}
		i++; 
	}
	
	cout<<"\nIl minimo numero e' : "<< min;
	cout<<"\nIl massimo numero e' : "<< max;
	cout<<endl;
	
	return 0; 
}

#include <iostream>
using namespace std; 

int c=0; 

int fib(int n){
	if(n==0||n==1){
		c++; 
		return n;
	}else {
		c++;
		return fib(n-1)+fib(n-2); // recursion
	}
}
	
int main(){
	int n;
	cout<<"N-esimo numero della frequenza di Fibonacci: ";
	cin >> n;
	cout<< fib(n)<<endl;
	cout<<"Numero di chiamate alla funzione: "<<c<<endl;
	return 0;
}


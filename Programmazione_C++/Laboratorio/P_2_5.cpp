#include <iostream>
using namespace std; 

int c = 0; 

int main(){
	int n, k, k1=1, k2=0;
	
	cout<<"Numero della sq. di Fibonacci da calcolare: "; 
	cin >>n;
	
	if(n==0 || n == 1){
		cout<<n<<endl; 
	} else {
		for(int i=2;i<=n;i++){
			k = k1 + k2;
			k2=k1;
			k1=k; 
		}
	}
	
	cout<<"Il "<<n<<" numero della sq. di Fibonacci e': "<<k<<endl; 
	
	return 0; 
}

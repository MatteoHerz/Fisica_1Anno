#include <iostream>
#include <cmath>
using namespace std; 

void floyd(int n){
	int j, i=1, k=1;
	
	for(i; i<=n; i++){
		for(j=1; j<=i; j++ , k++){
			cout<<k<<" ";
		}
		cout<<endl; 			
	}
}

int main(){
	int n; 
	cout<<"Quante righe vuoi stampare: "; 
	cin >> n; 
	floyd(n); 
	return 0; 
}

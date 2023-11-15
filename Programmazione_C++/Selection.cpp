#include <iostream>
using namespace std; 

void read_array(int v[], int n){
	for(int i=0; i<n; i++){
		cin >> v[i]; 
	}
}

void print_array(int v[], int n ){
	for(int i=0; i<n; i++){
		cout << v[i] << " "; 
	}
}

void swap(int &a, int &b){
	int c=a; 
	a = b; 
	b = c; 
}

int search_min(int v[], int first, int last){
	int pos=first; 
	for(int k=first; k<=last; k++)
	  if(v[k]<v[pos]) pos=k; 
	return pos;
}

void selection(int v[], int n){
	int p; 
	for(int i=0; i<=n-2; i++){
	p=search_min(v,i,n-1); 
	swap(v[i],v[p]); 
	}
}

int main()
{
	int x[10]; 
	read_array(x,10); 
	//print_array(x,10);
	// cout << "\nL'indice del minimo numero nel vettore e': " << search_min(x,0,9); 
	selection(x,10);
	print_array(x,10);
	
	return 0; 
}

#include <iostream>
using namespace std;

int contatore = 0; 

int recursive_power(int a, int n){
	if (n==0){
		a=1;
		contatore++; 
		return a; 
	} else if (n%2==0) {
		contatore++;
		return recursive_power(a,n/2)*recursive_power(a,n/2);
	} else {
		contatore ++;
		return a*recursive_power(a,n/2)*recursive_power(a,n/2);
	}
}

int main(){
	int a,n; 
	
	cout<<"Inserire un numero: "; 
	cin >> a; 
	while (a<0){
		cout<<"ERRORE: Inserire numero positivo: "; 
		cin >> a; 
	}
	
	cout<<"Inserire l'esponente: ";
	cin >> n; 
	while (n<0){
		cout<<"ERRORE: Inserire numero positivo: "; 
		cin >> n; 
	}
	
	cout<<"Risultato: "<<recursive_power(a,n)<<endl;
	cout<<"Numero di chiamate alla funzione: "<<contatore<<endl; 
	
	return 0; 
}
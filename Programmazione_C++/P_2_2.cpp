#include <iostream>
#include <cmath>
using namespace std; 

bool point(float Px, float Py, float Cx, float Cy, float r){
	bool trovato; 
	// if(Cx-r < Px && Px < Cx+r && Cy-r < Py && Py < Cy+r)
	if(Cx-r < Px && Px < Cx+r && Cy-r < Py && Py < Cy+r){
		trovato = true; 
	} else {
		trovato = false; 
	}
	return trovato; 
}

int main(){

	float Cx,Cy,Px,Py,r; 
	cout<<"Inserire le coordianate del punto: ";
	cin >> Px >> Py; 
	cout<<"Inserire coordinate del Centro del cerchio e il suo raggio: "; 
	cin >> Cx >> Cy >> r; 
	
	if (point(Px, Py, Cx, Cy, r)){
		cout<<"Il punto è interno al cerchio\n"; 
	} else {
		cout<<"Il punto è esterno al cerchio\n"; 
	}
	 
	return 0; 
}

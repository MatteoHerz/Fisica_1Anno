#include <iostream>
#include <cmath>
 using namespace std; 
 
float vel(float t, float a, float v0, float s0){
	//s = s0 + v0*t + 0.5*a*pow(t,2)
	return s0 + v0*t + 0.5*a*pow(t,2); 
}
 
 int main(){
	float deltaT, t=0, a, v0, s0, s;
	int i=0, n; 
	cout<<"Dammi l'accelerazione, la velocita' e la posizione iniziali: "; 
	cin >> a >> v0 >> s0; 
	cout<<"\nOgni quanti secondi vuoi stampare la posizione?"; 
	cin >> deltaT; 
	cout<<"\nPer quante volte vuoi stampare la posizione?"; 
	cin >> n; 
	
	while(i<=n){
		s = vel(t, a, v0, s0); 
		cout<<"\n\nPosizione: "<<s<<" al tempo: "<<t; 
		t += deltaT; 
		i++; 
	}
	cout<<endl; 	
 	return 0; 
 }

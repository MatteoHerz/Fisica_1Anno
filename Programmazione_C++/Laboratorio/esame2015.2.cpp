/*
Migliore approssimazione della radice cubica di un numero n senza funzioni matematiche. 
*/

#include <iostream>
#include <cmath>
using namespace std;

int cube(int n){

    int cubo,i=1;

    if(i==n) cubo=n; 
    else 
    {
        while(i*i*i<=n)
        {   
            i++;
        }
        cubo = i-1;
    }

    return cubo; 
}

int main(){

    int n; 

    cout<<"Inserire il numero di cui si vuole calcolare la radice terza: "; 
    cin >> n; 

    int cubo = cube(n); 
    cout<<"la migliore approsimazione della radice terza di n e': "<<cubo;

    return 0; 
}
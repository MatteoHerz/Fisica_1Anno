/*
Scrivere una funzione che, dato un array a di n numeri interi, ritorni un nuovo array che contiene solo i numeri non negativi 
presenti in a nello stesso ordine in cui compaiono in a. 
Per esempio, se a `e {0, −1, 5, 3, −2, −3}, la funzione deve ritornare {0, 5, 3}. 
Fare in modo che l’array ritornato sia allocato nello heap e che la sua dimensione sia esattamente 
il numero di elementi non-negativi in a. La funzione deve avere un parametro, passato per riferimento, che viene settato 
al numero di elementi del vettore ritornato.
*/

#include <iostream>
#include <cmath>
using namespace std;

int* funzione(int v[], int n, int& numeripositivi){

    for(int i=0; i<n; i++)
    {
        if(v[i]>=0){
            numeripositivi ++; 
        }
    }

    int* vetpos = new int[numeripositivi]; 
    int d=0; 

    for(int i=0; i<n; i++)
    {
        if(v[i]>=0){
            vetpos[d] = v[i];
            d++; 
        }
    }

    return vetpos; 
}

int main(){

    int a[] = {0, -1, 5, 3, -2, -3};
    int numeripositivi = 0; 

    int* array = funzione(a,6,numeripositivi); 

    for(int i=0; i<numeripositivi; i++)
    {
        cout << array[i] << " "; 
    }

    delete[] array; 
    return 0; 
}
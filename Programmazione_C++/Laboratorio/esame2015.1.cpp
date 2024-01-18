/*
Scrivere una funzione che, dati due array ordinati a e b contenenti rispettivamente m ed n numeri interi, 
stampi a video l’intersezione di a e b, ovvero i numeri presenti sia in a che in b. 
Per esempio, l’intersezione di {1, 2, 3} e {2, 3, 4} `e {2, 3}, mentre l’intersezione di {1, 2, 3} e {0, 2, 4} `e {2}.
*/

#include <iostream>
#include <cmath>
using namespace std;

void intersect(int v1[], int m, int v2[], int n){
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(v2[j]!=v2[j-1] && v1[i]==v2[j]) cout<<v1[i]<<" ";  
        }
    }
}

int main(){

    int v1[] = {1, 2, 3};
    int v2[] = {2, 2, 3, 4};

    int m = sizeof(v1)/sizeof(v1[0]), n = sizeof(v2)/sizeof(v2[0]);

    cout<<"il vettore intersezione e': ";
    intersect(v1,m,v2,n); 

    return 0; 
}
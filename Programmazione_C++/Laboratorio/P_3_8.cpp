#include<iostream>
#include<cmath>
#include<iomanip>
#include<cstdlib>
#include<ctime>

using namespace std;

int* alloca_vettore(int n){
  int *v;
  v=new int[n];
  return v;
}


void dealloca_vettore(int *v){
  delete[] v;
}


int* legge_vettore(int n){
  int *v;
  v=alloca_vettore(n); // alloca memoria per l'array
  for(int i=0;i<n;i++){
    cout << "elemento numero " << i+1 << ": ";
    cin >> v[i];
  }
  return v; // restituisce l'indirizzo dell'array
}


void stampa_vettore(int *s, int k){
  for(int j=0;j<k;j++)
    cout << s[j] << " ";
  cout << endl;
}

// restituisce un int casuale fra m e M
int numero_casuale(int m, int M){
  int r;
  r=rand()%(M-m+1)+m;
  return r;
}


int* vettore_casuale(int k, int mm, int MM){
  int *r = alloca_vettore(k); 
  numero_casuale(mm,MM); 
  for (int i = 0; i < k; i++)
        r[i] = numero_casuale(mm, MM);
  
  return r;
}


int* somma_vettori(int *v1, int *v2, int k){
  int *ris = alloca_vettore(k); 
  
  for(int i=0; i<k; i++)
  	ris[i]=v1[i]+v2[i];
  
  return ris; 
}

int massimo_vettore(int *v1, int sup){
	int i,max,t=0; 
	max = v1[0];  
	for(i=1; i<=sup; i++){
		if(v1[i]>max){
			max=v1[i];
			t=i; 
		}
	}
	return t; 
}

int* diff(int *v1, int *v2, int s, int r, int &differenza){
  int contatore=0;

  for(int i=0; i<s; i++){
  	for(int j=0; j<r; j++){
  		if(v1[i]==v2[j]){ 
  			break; 		
  		}
  		if(j==r-1){
  			differenza++;   
  		}
  	}
  }
  
  int* v3 = alloca_vettore(differenza);
  
  for(int i=0; i<s; i++){
  	for(int j=0; j<r; j++){
  		if(v1[i]==v2[j]){ 
  			break;
  		}
  		if (j==r-1){
  			v3[contatore]=v1[i]; 
  			contatore++;
  		}
  	}
  }
  
  return v3; 
}

int main()
{
  srand(time(0)); // si inizializza la generazione di numeri casuali
                  // e' necessario farlo una volta all'inizio dell'esecuzione

  int *v1,*v2,*v3,s,r,differenza=0; 

  do{
    cout << "Dimensione del vettore? ";
    cin >> s;
    if(s<=0)
      cout << "La dimensione deve essere > 0" << endl;
  }while(s<=0);
  
  v1 = legge_vettore(s);
  
  do{
    cout << "Dimensione del vettore? ";
    cin >> r;
    if(r<=0)
      cout << "La dimensione deve essere > 0" << endl;
  }while(r<=0);
  
  v2 = legge_vettore(r);
 
  v3 = diff(v1,v2,s,r,differenza);
  
  stampa_vettore(v3,differenza);

  delete[] v1;
  delete[] v2;
  delete[] v3;
  return 0;
}


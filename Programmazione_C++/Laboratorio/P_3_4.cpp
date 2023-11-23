#include<iostream>
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
    cout << "elemento numero " << i+1 << ":";
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
  int *r;
  alloca_vettore(k); 
  numero_casuale(mm,MM); 

  return r;
}


int* somma_vettori(int *v1, int *v2, int k){
  int *ris;

  alloca_vettore(k); 
  
  for(int i=0; i<k; i++){
  	ris[i]=v1[i]+v2[i];   
  }
  
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

int* sorting(int *v1, int s){
	int indice_max, a; 
	for(int j=s-1; j>0; j--){
		indice_max = massimo_vettore(v1,j); 
		a = v1[j];
		v1[j]=v1[indice_max];
		v1[indice_max]=a; 
	}
	
	return v1; 
}

int main()
{
  srand(time(0)); // si inizializza la generazione di numeri casuali
                  // e' necessario farlo una volta all'inizio dell'esecuzione

  int *v1,*v2,s,inf,sup;

  do{
    cout << "Dimensione del vettore? ";
    cin >> s;
    if(s<=0)
      cout << "La dimensione deve essere > 0" << endl;
  }while(s<=0);

  v1=legge_vettore(s);
  stampa_vettore(v1,s);

  /*cout << "Inserire estremo inferiore di ricerca: ";
  cin >> inf; 
  cout << "Inserire estremo superiore di ricerca: ";
  cin >> sup; */
  
  double start = clock();
  v1 = sorting(v1,s);
  double end = clock();
  double seconds = (end - start) / CLOCKS_PER_SEC;
  
  stampa_vettore(v1,s);
  cout<<"Il tempo di esecuzione del programma è: "<<seconds<<endl; 
  

  delete[] v1;
  return 0;
}


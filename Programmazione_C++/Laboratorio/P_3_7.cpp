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

void swap(int *v1, int a, int b){
	int c=v1[a]; 
	v1[a]=v1[b]; 
	v1[b]=c; 
}

int partizione(int *v1, int inf, int sup){

	int p=v1[inf],i=inf+1,j=sup; 
	 
	while(i<=j){
		if(v1[i]<=p){
			i++; 
		} else if(v1[i]>p && v1[j]>p){
			j--;
		} else if(v1[i]>p && v1[j]<=p){
			 swap(v1,i,j); 
			 i++; 
			 j--; 
		}
	}
	swap(v1,inf,j); 
	return j;
}

void quick_sorting(int *v, int inf, int sup){
	/*cout << "Debug: inf=" << inf << ", sup=" << sup << endl;
	stampa_vettore(v,sup+1); */
	if(inf>=sup){		
		return;
	}
	int k = partizione(v,inf,sup);
	quick_sorting(v,inf,k-1);
	quick_sorting(v,k+1,sup); 
}

int* max_seq(int *v, int s){

	int n=0, inf=0, sup=0; 
	int *r = alloca_vettore(s);
	 
	for(int i=1; i<s; i++){
	
	if(v[i]>v[i-1]){
	
	} else if(){
		
	}

	}

	int *p = alloca_vettore(n); 
	return p; 
}

int main()
{
  srand(time(0)); // si inizializza la generazione di numeri casuali
                  // e' necessario farlo una volta all'inizio dell'esecuzione

  int *v,*v2,s,inf,sup;

  do{
    cout << "Dimensione del vettore? ";
    cin >> s;
    if(s<=0)
      cout << "La dimensione deve essere > 0" << endl;
  }while(s<=0);

  v=legge_vettore(s);

  /*cout << "Inserire estremo inferiore di ricerca: ";
  cin >> inf; 
  cout << "Inserire estremo superiore di ricerca: ";
  cin >> sup;*/
 
  //cout<<"L'indice finale del perno e': "<<partizione(v1,inf,sup)<<endl;
  
  quick_sorting(v,0,s-1); 
  
  stampa_vettore(v,s);
  
  delete[] v;
  return 0;
}


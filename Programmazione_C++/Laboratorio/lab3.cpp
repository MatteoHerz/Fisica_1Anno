#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>

using namespace std;

// alloca memoria per un array di n int
// restituisce l'indirizzo dell'array
int* alloca_vettore(int n){
  int *v;
  v=new int[n];
  return v;
}

// libera la memoria occupata da un array di int
void dealloca_vettore(int *v){
  delete[] v;
}

// legge dalla tastiera un array di n int
// l'array � creata nella funzione con allocazione dinamica
// restituisce l'indirizzo dell'array
int* legge_vettore(int n){
  int *v;
  v=alloca_vettore(n); // alloca memoria per l'array
  for(int i=0;i<n;i++){
    cout << "elemento numero " << i+1 << ":";
    cin >> v[i];
  }
  return v; // restituisce l'indirizzo dell'array
}

// stampa un array di k int a video
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

// genera un array di k int casuali
// alloca memoria per l'array
// riempie l'arrauy con numero casuali fra mm e MM
// restituisce l'indirizzo dell'array
int* vettore_casuale(int k, int mm, int MM){
  int *r;

  // allocare memoria per il vettore casuale chiamando alloca_vettore

  // riempire l'array con numeri casuali con un ciclo
  // chiamando numero_casuale

  // restituire l'indirizzo dell'array
}

// calcola la somma di due vettori v1 e v2 ciascuno con k elementi
// alloca memora per il vettore risultante
// calcola la somma elemento per elemento con un ciclo
// restituisce l'indirizzo dell'array risultante
int* somma_vettori(int *v1, int *v2, int k){
  int *ris;

  // allocare memoria per il vettore risultante chiamando alloca_vettore

  // riempire l'array ris con la somma di v1 e v2 elemento per elemento
  // con un ciclo

  // restituire l'indirizzo dell'array
}

int main()
{
  srand(time(0)); // si inizializza la generazione di numeri casuali
                  // e' necessario farlo una volta all'inizio dell'esecuzione

  int *v1,*v2,s;

  do{
    cout << "Dimensione del vettore? ";
    cin >> s;
    if(s<=0)
      cout << "La dimensione deve essere > 0" << endl;
  }while(s<=0);

  v1=legge_vettore(s);
  stampa_vettore(v1,s);

  // dopo aver completato vettore_casuale
  // si pu� testarlo con le seguenti righe:
  // v2=vettore_casuale(20, 5, 10);
  // stampa_vettore(v2,20);
  // delete[] v2;

  delete[] v1;
  return 0;
}


#include <stdio.h>

int main(void){
	//elenco variabili
	int x;
	double m;

  //input
  printf("Inserisci il numero: ");
  scanf("%d",&x);

  //assegnazione e output
	if (x!=0){
		m=1.00/x;
		printf("Il risultato è %f.\n",m);
	}
	else
		printf("ERRORE: impossibile dividere per 0\n",m);

return 0;
}

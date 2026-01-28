#include <stdio.h>

int main(void){
	//elenco variabili
	int x, y, d;

	//input
	printf("Inserisci il primo numero: ");
	scanf("%d",&x);

	printf("Inserisci il secondo numero: ");
	scanf("%d",&y);

	//assegnazione
	d=x-y;

	//output
	printf("Il risultato è %d.\n",d);
return 0;
}

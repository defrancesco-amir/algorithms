#include <stdio.h>

int main(void){
	//elenco variabili
	int x, y, p;

	//input
	printf("Inserisci il primo numero: ");
	scanf("%d",&x);

	printf("Inserisci il secondo numero: ");
	scanf("%d",&y);

	//assegnazione
	p=x*y;

	//output
	printf("Il risultato è %d.\n",p);
return 0;
}

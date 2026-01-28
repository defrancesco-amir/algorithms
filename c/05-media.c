#include <stdio.h>

int main(void){
	//elenco variabili
	int x, y, z;
	double m;

	//input
	printf("Inserisci il primo numero: ");
	scanf("%d",&x);

	printf("Inserisci il secondo numero: ");
	scanf("%d",&y);

	printf("Inserisci il terzo numero: ");
	scanf("%d",&z);

	//assegnazione
	m=(x+y+z)/3.0;

	//output
	printf("Il risultato è %f.\n",m);
return 0;
}

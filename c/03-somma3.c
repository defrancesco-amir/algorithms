#include <stdio.h>

int main(void){
	//elenco variabili
	int x, y, z, s;

	//input
	printf("Inserisci il primo numero: ");
	scanf("%d",&x);

	printf("Inserisci il secondo numero: ");
	scanf("%d",&y);

        printf("Inserisci il terzo numero: ");
        scanf("%d",&z);

	//assegnazione
	s=x+y+z;

	//output
	printf("Il risultato è %d.\n",s);
return 0;
}


#include <stdio.h>

int main(void){
	//elenco variabili
	int a, b, c;

	//input
	printf("Inserisci il primo numero: ");
	scanf("%d",&a);

	printf("Inserisci il secondo numero: ");
	scanf("%d",&b);

	//assegnazione
	c=a+b;

	//output
	printf("Il risultato è %d.\n",c);
return 0;
}

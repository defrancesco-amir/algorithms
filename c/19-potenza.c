#include <stdio.h>
#include <math.h>

int main(void){
	//elenco variabili
	double b, e, r;

	//input
	printf("Inserisci il primo numero: ");
	scanf("%lf",&b);

	printf("Inserisci il secondo numero: ");
	scanf("%lf",&e);

	//assegnazione
	r = pow(b, e);

	//output
	printf("Il risultato è %.0f.\n",r);
return 0;
}

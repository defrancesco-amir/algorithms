#include <stdio.h>

int main(void){
	//elenco variabili
	double r, a, c;

	//input
	printf("Inserisci il raggio del cerchio: ");
	scanf("%lf",&r);

	//assegnazione
	a=3.14159*r*r;
	c=3.14159*r*2;

	//output
	printf("L'area è %f\n",a);
	printf("La circonferenza è %f\n",c);

return 0;
}

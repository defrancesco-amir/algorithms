#include <stdio.h>

int main(void){
	//elenco variabili
	int l, a, p;

	//input
	printf("Inserisci il lato del quadrato: ");
	scanf("%d",&l);

	//assegnazione
	a=l*l;
	p=l*4;

	//output
	printf("L'area è %d\n",a);
	printf("Il perimetro è %d\n",p);

return 0;
}

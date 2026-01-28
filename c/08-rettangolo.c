#include <stdio.h>

int main(void){
	//elenco variabili
	int b, h, a, p;

	//input
	printf("Inserisci la base del rettangolo: ");
	scanf("%d",&b);

	printf("Inserisci l'altezza del rettangolo: ");
	scanf("%d",&h);

	//assegnazione
	a=b*h;
	p=b+b+h+h;

	//output
	printf("L'area è %d\n",a);
	printf("Il perimetro è %d\n",p);

return 0;
}

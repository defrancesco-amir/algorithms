#include <stdio.h>

int main(void){
	//elenco variabili
  int q;
	double c, p, i;

	//input
	printf("Inserisci il prezzo del prodotto: ");
	scanf("%lf",&c);

	printf("Inserisci la quantità di prodotti: ");
	scanf("%d",&q);

	//assegnazione
	p=c*q;
	i=p+(0.22*p);

	//output
	printf("Prezzo totale: €%.2f\n",p);
	printf("Prezzo con IVA del 22%: €%.2f\n",i);

return 0;
}

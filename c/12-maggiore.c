#include <stdio.h>

int main(void){
	//elenco variabili
	int x;

	//input
	printf("Inserisci il numero: ");
	scanf("%d",&x);

	//output
  if (x>=0)
	  printf("Il numero inserito è positivo (maggiore o uguale a 0)\n");
  else
	  printf("Il numero inserito è negativo (minore di 0)\n");

return 0;
}

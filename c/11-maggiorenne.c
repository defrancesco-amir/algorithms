#include <stdio.h>

int main(void){
	//elenco variabili
	int e;

	//input
	printf("Inserisci la tua età: ");
	scanf("%d",&e);

	//output
  if (e>=18)
	  printf("Sei maggiorenne\n");
  else
	  printf("Sei minorenne\n");

return 0;
}

#include <stdio.h>

int main(void){
	//elenco variabili
	int x, y;

	//input
	printf("Inserisci il primo numero: ");
	scanf("%d",&x);
  
  printf("Inserisci il secondo numero: ");
	scanf("%d",&y);

	//output
  if ((x%y) == 0)
	  printf("%d è un multiplo di %d.\n", x, y);
  else
	  printf("%d non è un multiplo di %d.\n", x, y);

return 0;
}

#include <stdio.h>

int main(void){
	//elenco variabili
	int x;

	//input
	printf("Inserisci un numero: ");
	scanf("%d",&x);

	//output
  if ((x%2) == 1)
	  printf("Il numero inserito è dispari\n");
  else
	  printf("Il numero inserito è pari\n");

return 0;
}

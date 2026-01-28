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
 	if (x==y)
	printf("I numeri sono uguali\n");

	else
		if (x>y)
		printf("%d è il più piccolo.\n", y);

		else
		printf("%d è il più piccolo.\n", x);

return 0;
}

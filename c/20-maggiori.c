#include <stdio.h>

int main(void){

	//elenco variabili
	int a, b, c;

	//input
	printf("Inserisci il primo numero: ");
	scanf("%d",&a);
	printf("Inserisci il secondo numero: ");
	scanf("%d",&b);
	printf("Inserisci il terzo numero: ");
	scanf("%d",&c);

	//output
	if (a>b) {
		if (a>c)
			printf("Il maggiore è %d\n", a);

		else
			printf("Il maggiore è %d\n", c);
      	}
	 else {
		if (b>c)
			printf("Il maggiore è %d\n", b);

		else
			printf("Il maggiore è %d\n", c);
   	}
return 0;
}

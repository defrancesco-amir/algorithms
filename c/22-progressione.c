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
  if (b-a==c-b)
      printf("I numeri sono in successione.\n");
  else
      printf("I numeri non sono in successione.\n");
  
return 0;
}

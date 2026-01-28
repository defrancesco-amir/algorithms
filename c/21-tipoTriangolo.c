#include <stdio.h>

int main(void){

	//elenco variabili
	int a, b, c;

	//input
	printf("Inserisci il primo lato: ");
	scanf("%d",&a);
	printf("Inserisci il secondo lato: ");
	scanf("%d",&b);
	printf("Inserisci il terzo lato: ");
	scanf("%d",&c);

	//output
  if (a==b) {
    if (b==c)
      printf("Il triangolo è equilatero\n");
    
    else
      printf("Il triangolo è isoscele\n");
      }
  else if (b==c)
    printf("Il triangolo è isoscele\n");
  
  else if (a==c)
    printf("Il triangolo è isoscele\n");
    
  else
    printf("Il triangolo è scaleno\n");

  

return 0;
}

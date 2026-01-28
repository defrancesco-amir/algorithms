#include <stdio.h>
#include <stdlib.h>

int main(void){
  //elenco variabili
  int x, m;

  //input
  printf("Inserisci il numero: ");
  scanf("%d",&x);

  //assegnazione
  m=abs(x);

  //output
  printf("Il risultato è %d.\n",m);
return 0;
}

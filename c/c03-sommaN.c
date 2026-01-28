#include <stdio.h>

int main(void){
  //var
  int n, s;
  
  //in
  printf("Inserisci il numero: ");
  scanf("%d", &n);
  
  //calcolo
  if (n<=0){
    printf("ERRORE: Inserire un numero positivo (N>0)\n\n");
    return 0;
  }
  
  s=0;
  
  for (int i=1; i<=n; i++){
    s=s+i;
  }
  
  
  //out
  printf("La somma di tutti i numeri interi tra 1 e %d è \n%d\n\n", n, s);

return 0;
}

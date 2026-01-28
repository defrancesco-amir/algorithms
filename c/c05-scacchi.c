#include <stdio.h>

int main(void){
  //var
  int n, s;
  
  //in
  printf("Inserisci il numero di caselle: ");
  scanf("%d", &n);
  
  //calcolo usando for (ma sostituibile con s=2^n)
  s=1;
  for (int i=1; i<=n; i++)
    s=s*2;
    
  //out
  printf("La ricompensa è di %d chicchi di riso.\n\n",s);

return 0;
}

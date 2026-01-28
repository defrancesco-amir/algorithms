#include <stdio.h>

int main(void){
  //var
  int n, m;
  
  
  //in
  printf("Inserisci la base: ");
  scanf("%d", &n);
  
  printf("Inserisci l'altezza: ");
  scanf("%d", &m);
   
  
  //out
	printf("\n");
  for (int c=1; c<=m; c++){
    for (int i=1; i<=n; i++)
      printf("*");
    
    printf("\n");
  }

printf("\n");
return 0;
}

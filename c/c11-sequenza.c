#include <stdio.h>

int main(void){
  //var
  int n;
  
  
  //in
  printf("Inserisci un numero: ");
  scanf("%d", &n);
  
  if(n<=1){
    printf("ERRORE: inserire un numero maggiore di 1.\n\n");
    return 0;
  }
  
  //out
  for(int c=n; c>=0; c--){
  
    for(int i=1; i<=c; i++)
      printf("%d,", i);
      
  }
	
	printf("\b \n\n");

return 0;
}

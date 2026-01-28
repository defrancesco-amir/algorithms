#include <stdio.h>

int main(void){

  //out
  for (int i=0; i<=99; i++)
    printf("%d, ", i);

  printf("\n\n");

  for (int i=99; i>=0; i--)
    printf("%d, ", i);

  printf("\n\n");


  for (int i=1; i<=100; i++)
    printf("%d, ", i);

  printf("\n\n");

  for (int i=100; i>=1; i--)
    printf("%d, ", i);

  printf("\n\n");

return 0;
}

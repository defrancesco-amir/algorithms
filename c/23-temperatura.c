#include <stdio.h>

int main(void){
  //elenco variabili
  double t;

  //input
  printf("Inserisci la temperatura in °C: ");
  scanf("%lf",&t);

  //output
  printf("= %.2f°F\n",(9.00/5.00*t)+32.00);
  printf("= %.2f°K\n",t+273.15);

return 0;
}

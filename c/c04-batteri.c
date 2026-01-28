#include <stdio.h>

int main(void){
  //var
  int h, u;
  
  
  //in
  printf("Inserisci il numero di ore trascorse: ");
  scanf("%d", &h);
  
  printf("Inserisci la consistenza iniziale della popolazione batterica in UFC (unità di carica batterica): ");
  scanf("%d", &u);  
  
  
  //calcolo
  for (int i=1; i<=h; i++)
    u=u*2;
    
  //out
  printf("La consistenza della popolazione batterica finale raggiunta è di %d UFC.\n\n",u);

return 0;
}

#include <stdio.h>

int main(void){

  int t;
  printf("Di quale figurea vuoi calcolare area e perimetro?\n1=Rettangolo\n2=Quadrato\n");
  scanf("%d",&t);
  
  if (t==1){
    //elenco variabili
    int b, h, a, p;
  
    //input
    printf("Inserisci la base del rettangolo in m: ");
    scanf("%d",&b);
  
    printf("Inserisci l'altezza del rettangolo in m: ");
    scanf("%d",&h);
  
    //assegnazione
    a=b*h;
    p=b+b+h+h;
  
    //output
    printf("L'area è %d m²\n",a);
    printf("Il perimetro è %d m\n",p);
  }
  else if (t==2){
    //elenco variabili
    int l, a, p;
  
    //input
    printf("Inserisci il lato del quadrato in m: ");
    scanf("%d",&l);
  
    //assegnazione
    a=l*l;
    p=l*4;
  
    //output
    printf("L'area è %d m²\n",a);
    printf("Il perimetro è %d m\n",p);
  }
  else
  printf("ERRORE");
return 0;
}

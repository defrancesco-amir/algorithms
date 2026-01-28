#include <stdio.h>

int main(void){
	//elenco variabili
	int m, a;

	//input
	printf("Inserisci il numero del mese: ");
	scanf("%d",&m);
  
	//output
  if (m==1)
	  printf("Il mese di Gennaio ha 31 giorni.\n");
  else if (m==2){
  printf("Inserisci l'anno: ");
	scanf("%d",&a);
    if ((a%4==0 && !(a%100==0))||(a%400==0))
	    printf("Quest'anno il mese di Febbraio ha 29 giorni.\n");
    else
      printf("Quest'anno il mese di Febbraio ha 28 giorni.\n");
  }
  else if (m==3)
	  printf("Il mese di Marzo ha 31 giorni.\n");
  else if (m==4)
	  printf("Il mese di Aprile ha 30 giorni.\n");
  else if (m==5)
	  printf("Il mese di Maggio ha 31 giorni.\n");
  else if (m==6)
	  printf("Il mese di Giugno ha 30 giorni.\n");
  else if (m==7)
	  printf("Il mese di Luglio ha 31 giorni.\n");
  else if (m==8)
	  printf("Il mese di Agosto ha 31 giorni.\n");
  else if (m==9)
	  printf("Il mese di Settembre ha 30 giorni.\n");
  else if (m==10)
	  printf("Il mese di Ottobre ha 31 giorni.\n");
  else if (m==11)
	  printf("Il mese di Novembre ha 30 giorni.\n");
  else if (m==12)
	  printf("Il mese di Dicembre ha 31 giorni.\n");
  else
    printf("ERRORE\n");
    
return 0;
}
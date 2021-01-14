
/* Ecrivez un programme en C qui va te permettre d'afficher vos informations personnelles : Nom, prenom , Age , Sex et numero de telephone 
Les données sont saisies à partir du clavier */

#include <stdio.h>
#include <stdlib.h>

int main()
{
  //Variables
  char Nom[20] ,Prenom [20] ,Sex , GSM [20];
  int Age ; 
  
  //Entrees

  printf("Saisir Votre Nom\n");
  scanf("%s", Nom);
  printf("Saisir Votre Prenom\n");
  scanf("%s", Prenom);
  printf("Saisir Votre Sex\n");
  scanf(" %c", &Sex);
  printf("Saisir Votre GSM\n");
  scanf("%s", GSM);
  printf("Saisir Votre Age\n");
  scanf("%d", &Age);
  
  //Sortie

  printf("Bonjour %s %s\n%c\n%s\n%d\n", Nom, Prenom, Sex, GSM, Age);



   return 0;


    
}
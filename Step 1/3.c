/* 
    Ecrivez un programme en C qui déclare la variable constante pi et la variable r.
    Déclarez trois variables D, P et S calculez respectivement les valeurs du diamètre, du périmètre et de la surface d’un cercle dont le rayon est r.
    On affichera à l’écran le contenu de ces différentes variables selon le format suivant :
    Un cercle de rayon r a pour diamètre D, pour périmetre P et pour surface S.
    NB : Le rayon est une entrée du programme (entrer au clavier par l’utilisateur). 
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  // Variables
  float r,D,P,S;
  const float pi = 3.14;

  // Entree
  printf("Entre la valeur du rayon r\n");
  scanf("%f", &r);


   if (r == 0) {
        printf("error\n");
        exit(2);
    }


  // Traitement
  P =  2 * pi * r ;
  D = P / pi ;
  S = pi * r * r;

  //Affichage 
    
  printf("le cercle de rayon %.2f\n a pour diametre %.2f\n ,pour périmetre %.2f\n et pour surface %.2f\n",r,D,P,S);

  return 0;
}

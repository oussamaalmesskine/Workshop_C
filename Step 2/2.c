/* Creez votre calculatrice conditionnée : 
* Ecrivez un programme qui permettra d'entrer deux nombres aux claviers et les afficher avec leur taille en Octet et en Hexadecimal.
* Maintenant Controller les signes : + , - , * , / , % comme char.
* si le signe est + on va faire l'addition des deux nombres
  si le signe est - on va faire la soustraction etc ...
 
* pour le cas de la division vérifiez si la valeur du diviseur est différente de 0 
  si oui faire la division sinon afficher erreur
  
* Affichez le resultat à l'écran.
* Créez votre arbre de décision

Refaite le meme exercice en utilisant `switch Case` */


#include<stdio.h>
#include<stdlib.h>


int main() {

  //Variables
  float a, b;
  char operator;
  double result;
  
  //Entree
  printf("Entrer le nombre 1:\n");
    scanf("%f", &a);

    printf("Entrer le nombre 2:\n");
    scanf("%f", &b);


  //Affichage de leur taille en Octet et en Hexadecimal
  printf("number 1 (%f) : \n\t- Octal : %f\n\t- Hex : %x",a, a, (unsigned char)a);
  printf("number 2 (%f) : \n\t- Octal : %f\n\t- Hex : %x",b, b, (unsigned char)b);


   //Entree
  printf("\n Donnez l'operateur : ");
  scanf(" %c", &operator);


  //Traitement(Calcul)
  switch (operator)
    {
        case '*' :
            result = a * b;
            break;
        
        case '+' :
            result = a + b;
            break;
        
        case '-' :
            result = a - b;
            break;
        
        case '/'  :{ if (b!=0)
            result = a / b;
            else
                printf("Error calcul\n");
                exit(2);
            
            break;}  

        case '%' :{ if (b!=0)
            result = (int)a % (int)b;
            else
                printf("Error calcul\n");
                exit(2);
            break;}
      default:
          printf("\nError! operator is not correct");
          exit(2);
          break;
    }


   // Result
    printf("\nLa Resultat est : %.2lf\n", result);
   
  return 0;
}

/* a et b sont deux entiers saisies au clavier, calculez et affichez a+b, a-b, a*b, a/b, a%b en
format décimal, et en soignant l’interface homme/machine.
(a/b donne le quotient de la division, a%b donne le reste de la division) */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variables
    int a, b;
    long result;
    char operateur;

    //Entrees
    printf("Entrer le nombre a:\n");
    scanf("%i", &a);

    printf("Entrer le nombre b:\n");
    scanf("%i", &b);

    printf("Donnez l'operateur :\n");
    scanf("%s", &operateur);

    //Calcul
    switch (operateur)
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
            result = a % b;
            else
                printf("Error calcul\n");
                exit(2);
            break;}


        default:
        printf("Error! operator is not correct \n");
            exit(2);
    }

    //result
     printf("Le résultat de votre calcul est: %ld\n", result);

 }    



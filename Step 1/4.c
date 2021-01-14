/* 
    Ecrire un programme qui affiche la moyenne d'une suite d'entiers positifs entrés au clavier. On arrêtera la saisie quand le nombre -1 est entré,
    comme dans l'exemple suivant :  
    Entrez un entier positif : 5
    Entrez un entier positif :2 
    Entrez un entier positif :3 
    Entrez un entier positif :-1 
    La moyenne de ces 3 entiers vaut 3.333333 
*/

#include<stdio.h>
#include<stdlib.h>

int main()

{
        //Variables
       int n,count=0,total=0;
        
        //Traitement
        do{

             printf("Donner une valeur positif \n");
             scanf("%d",&n);

        if(n > -1){

            count++;
            total += n; }
                
        }
         while (n > -1);

    printf("count : %d ,total : %d , moyenne : %.3f \n",count,total,(float)total/count);
    
    return 0;

} 
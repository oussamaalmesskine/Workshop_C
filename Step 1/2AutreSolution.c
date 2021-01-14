#include <stdio.h>
#include <stdlib.h>

int main  ()

 {
    //Variables
    int nombre1, nombre2;
    long result;
    char operateur;

    // Entree
    printf("Veuillez taper votre opération (par exemple: 1 + 2):\n");
    scanf("%i %c %i", &nombre1, &operateur, &nombre2);
    while (operateur != '+' && operateur != '-' && operateur != '*' && !(operateur == '/' && nombre2 != 0)) {
        printf("Cet opérateur n'est pas disponible ou vous essayer de diviser par ZÉRO!\nSaisissez à nouveau votre opération: ");
        scanf("%i %c %i", &nombre1, &operateur, &nombre2);
    }     
    
    
    
    // Calculs
    if (operateur == '+') 
        result = nombre1 + nombre2;
    
    
    if (operateur == '-') 
        result = nombre1 - nombre2;
    
    
    if (operateur == '*') 
        result = nombre1 * nombre2;
    
    
    if (operateur == '/') 
        result = nombre1 / nombre2;
    

    if (operateur == '%') 
        result = nombre1 % nombre2;
        printf("Le résultat est: %.2ld\n", result);
    
    
    return 0; 
 }
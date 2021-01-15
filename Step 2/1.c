/* 
Pour une gestion du mémoire il est recommandé de creer des constantes sous forme d'expression (Macros), 
ce qui est demandé est de creer une constante qui te permet de vérifier si un nombre est superieure à un autre le resultat du retour soit 0 soit 1 ,pour formater le resultat de retour créez un constante qui permet d'afficher si 0 = False si 1 = true
Macro : MAX(a,b)
Nota bene : il faut creer votre premier type boolean afin de permettre la bonne marche du programme 
*/

#include<stdio.h>
#include<stdio.h>
#include<stdbool.h>
#define false 0
//#define true !false

bool max(int a,int b);
bool res=true;

int main() {
    int a,b;
    printf("Enter a:\n");
    scanf("%d",&a);
    printf("Enter b:\n");
    scanf("%d",&b);

    if (max(a,b))
            printf("%d > %d\n", a, b);
    else    
            printf("%d > %d\n",b ,a);

    return 0;
    
    
}

bool max(int x, int y){
    if (x<y) 
        res = false;

    return res;

}


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i ;
    int tab1[5]= {1,2,3,4,5};
    int tab2[4];

    //Affichage du tableau 1
    for(i=0; i<5; i++)
    {
        printf("%d | ",tab1[i]);
    }

    //Remplissage du tableau 2
    for (i=0; i<4; i++)
    {
        printf("\nentrer une valeur");
        scanf("%d",&tab2[i]);
    }

    //Affichage du tableau 2
    for(i=0; i<4; i++)
    {
        printf("%d | ",tab2[i]);
    }
    return 0;
}

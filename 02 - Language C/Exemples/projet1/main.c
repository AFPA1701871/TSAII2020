#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nb,i,age;
    char genre;
  /*  printf("Entrer un nombre : ");
    scanf("%d",&nb);
    printf("le nombre est %d\n",nb);
    if(nb>10)
    {
        printf("superieur à 10\n");
    }
    else
    {
        printf("inférieur à 10\n");
    }
    for (i=0;i<10;i++)
    {
        printf("coucou\n");
    }
    age=-1;
    while (age<0)
    {
        printf("quel age ");
        scanf("%d",&age);
    }
*/
    printf("\n");
    do
    {
        printf("entrer le genre");
        scanf("%c",&genre);
    }
    while(genre!='F' && genre!='H');



/* commentaires
sur plusieurs l lignes */
// commentaire sur une ligne
    return 0;
}

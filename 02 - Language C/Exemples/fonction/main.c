#include <stdio.h>
#include <stdlib.h>


int addition (int x,int y)
{
    int somme;
    somme=x+y;
    return somme;
}
int factorielle(int nb)
{
    int i,fact=1;
    for (i=1;i<=nb;i++)
    {
        fact = fact *i;
    }
    return fact;

}
void affichageEtoile(char texte[100])
{
    printf("*********************************\n");
    printf("***** %s*****\n",texte);
    printf("*********************************\n");

}
void affichageEtoileInt(int texte)
{
    printf("*********************************\n");
    printf("***** %d *****\n",texte);
    printf("*********************************\n");

}
void deco()
{
    printf("*********************************\n");
}
int main()
{
    int a=1,b=2;
    int total;
  /*  total=addition(a,b);
    printf("total : %d\n",total);

    total = addition(4,5);

    printf("total : %d\n",total);

    total=addition(3,addition(4,5));

    */
    deco();
    total = factorielle(5);
    printf("factorielle de 5 : %d\n",total);
    affichageEtoile("toto");

    deco();

    affichageEtoile("bonjour tout le monde");
    affichageEtoileInt(total);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int demanderNombre(char* texte);

int main()
{
    int nbLigne,numLigne,espace,etoile;
    printf("Mon beau Sapin!\n");
    nbLigne = demanderNombre("Combien d'etages au sapin : ");

    //pour chaque étage du sapin
    for (numLigne=1; numLigne<=nbLigne; numLigne++)
    {


        //on affiche les espaces
        for (espace=1; espace <= nbLigne-numLigne; espace++)
        {
            printf(" ");
        }
        //on affiche les étoiles
        for (etoile=1; etoile <= 2*numLigne-1; etoile++)
        {
            printf("*");
        }
        //on passe à la ligne pour l'étage suivant
        printf("\n");
    }
    return 0;
}



int demanderNombre(char* texte)
{
    int nb;
    int retour;
    do
    {
        fflush(stdin); //on vide les caratères dans le buffer d'entrée du clavier
        printf(texte);
        retour=scanf("%d",&nb); // on recupere le retour du scanf pour savoir si l'utilisateur a saisi ce que l'on attendait
        //sinon, on boucle
    }
    while(retour==0);
    return nb;
}

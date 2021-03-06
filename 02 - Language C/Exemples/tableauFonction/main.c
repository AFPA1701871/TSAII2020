#include <stdio.h>
#include <stdlib.h>



int demanderNombre(char* texte)
{
    int nb;
    int retour;
    do
    {
        fflush(stdin); //on vide les carat�res dans le buffer d'entr�e du clavier
        printf(texte);
        retour=scanf("%d",&nb); // on recupere le retour du scanf pour savoir si l'utilisateur a saisi ce que l'on attendait
        //sinon, on boucle
    }
    while(retour==0);
    return nb;
}

void remplirTableau(int* tab,int taille)
{
    int i;
    for (i=0;i<taille;i++)
    {
        tab[i]=demanderNombre("Entrer une valeur");
    }
}

void afficherTableau(int* tab,int taille)
{
    int i;
    for(i=0;i<taille;i++)
    {
        printf("%d |",tab[i]);
    }
}

int main()
{
    int taille; //taille du tableau
    int i, positif=0, negatif=0;
    taille= demanderNombre("Combien de valeur :");
    int tableau[taille];

    remplirTableau(tableau,taille);

    for(i=0;i<taille;i++)
    {
        if (tableau[i]>=0)
        {
            positif++;
        }
        else{
            negatif++;
        }
    }

    afficherTableau(tableau,taille);
    printf("\n %d positifs %d negatifs",positif,negatif);
    return 0;
}

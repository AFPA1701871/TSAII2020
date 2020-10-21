#include <stdio.h>
#include <stdlib.h>

/* Prototypes */
void remplirTableau(int* tab,int taille);
void afficherTableau(int* tab,int taille);
int demanderNombre(char* texte);
int sommeTableau(int* tab, int taille);

/*programme principal*/
int main()
{
    int i,somme, moyenne,compteur=0;
    //demander la taille du tableau
    int tailleTableau = demanderNombre("Entrer le nombre de notes : ");
    //déclarer les tableaux
    int notes[tailleTableau];
    //remplit les tableaux
    printf("Entrer les notes\n");
    remplirTableau(notes,tailleTableau);
    somme=sommeTableau(notes,tailleTableau);
    moyenne = somme / tailleTableau;

    for (i=0; i<tailleTableau; i++)
    {
        if (notes[i]>moyenne)
        {
            compteur++;
        }
    }
    printf("la moyenne est de  % d , il y a %d notes au dessus de la moyenne",moyenne,compteur);
    return 0;
}

/* fonctions*/
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

void remplirTableau(int* tab,int taille)
{
    int i;
    for (i=0; i<taille; i++)
    {
        tab[i]=demanderNombre("Entrer une note ");
    }
}

void afficherTableau(int* tab,int taille)
{
    int i;
    for(i=0; i<taille; i++)
    {
        printf("%d |",tab[i]);
    }
}

int sommeTableau(int* tab, int taille)
{
    int i, somme=0;
    for (i=0; i<taille; i++)
    {
        somme+=tab[i];  // correspond à somme = somme+tab[i]
    }
    return somme;
}

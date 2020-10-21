#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//bibliotheque pour le nombre aleatoire
#include <math.h>
#include <time.h>

/* Prototypes */
void remplirTableau(int* tab,int taille);
void remplirTableauAlea(int* tab,int taille);
void afficherTableau(int* tab,int taille);
int demanderNombre(char* texte);
void tri_bulles(int* tab,int taille);
void tri_insertion(int* tab,int taille);
void copieTableau(int* tab1,int* tab2,int taille);

/*programme principal*/
int main()
{
    int tailleTableau = demanderNombre("Entrer la taille du tableau : ");
    int tab[tailleTableau],tab2[tailleTableau];
    printf("Entrer les valeurs du tableau\n");
    remplirTableauAlea(tab,tailleTableau);
    copieTableau(tab,tab2,tailleTableau);
    afficherTableau(tab,tailleTableau);
    printf("\n");
    tri_bulles(tab,tailleTableau);

    printf("\n");
    printf("\n");
    afficherTableau(tab2,tailleTableau);
    printf("\n");
    tri_insertion(tab2,tailleTableau);
    return 0;
}


/* fonctions*/

void tri_insertion(int* tab,int taille)
{
    int i,j;
    int min, pos,temp;
    for (i=0; i<taille-1; i++)
    {

        min=tab[i];
        pos=i;
        //on cherche le plus petit dans le reste du tableau
        for(j=i+1; j<taille; j++)
        {
            if (tab[j]<min)
            {
                min=tab[j];
                pos=j;
            }
        }
        // inverser les valeurs
        if (i!=pos)
        {
            temp = tab[i]   ;
            tab[i]=tab[pos];
            tab[pos]=temp;
        }
        //pas de sinon parce que si i=pos => le plus petit est à sa place

        afficherTableau(tab,taille);
        printf("\n");
    }
}

void tri_bulles(int* tab,int taille)
{
    bool flag;
    int i,temp;
    do
    {
        //on baisse le flag pour redemarrer la ligne
        flag=false;
        for (i=0; i<taille-1; i++)
        {
            if (tab[i+1]<tab[i])
            {
                //on inverse
                temp=tab[i];
                tab[i]=tab[i+1];
                tab[i+1]=temp;
                //on leve le flag
                flag=true;
            }
        }
        afficherTableau(tab,taille);
        printf("\n");
    }
    while(flag);  // equivalent à flag==true

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

void remplirTableau(int* tab,int taille)
{
    int i;
    for (i=0; i<taille; i++)
    {
        tab[i]=demanderNombre("Entrer une valeur ");
    }
}
void remplirTableauAlea(int* tab,int taille)
{
    int i;
    // On commence par initialiser le générateur de nombre pseudo-aléatoires.
    srand( time( NULL ) );
    for (i=0; i<taille; i++)
    {
        tab[i]=rand()%100;
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

void copieTableau(int* tab1,int* tab2,int taille)
{
    int i;
    for(i=0; i<taille; i++)
    {
        tab2[i]=tab1[i];
    }

}

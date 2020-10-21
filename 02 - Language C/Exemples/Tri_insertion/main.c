#include <stdio.h>
#include <stdlib.h>


/* Prototypes */
void remplirTableau(int* tab,int taille);
void afficherTableau(int* tab,int taille);
int demanderNombre(char* texte);
void tri_insertion(int* tab,int taille);

/*programme principal*/
int main()
{
    int tailleTableau = demanderNombre("quelle est la taille du tableau");
    int tab[tailleTableau];
    remplirTableau(tab,tailleTableau);
    tri_insertion(tab,tailleTableau);

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

void afficherTableau(int* tab,int taille)
{
    int i;
    for(i=0; i<taille; i++)
    {
        printf("%d |",tab[i]);
    }
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int occurenceUneLettre(char mot[50],int debut,char lettre);


int main()
{
    char mot[50]="                         "; // pour eviter un caractere special dans le tableau
    char motCopie[50]="                         "; // pour eviter un caractere special dans le tableau
    char lettre;
    int nombreOccurence=0; //nb d'occurrence
    int indexMot=0;


    printf("entrer un mot: \n");
    scanf("%s",mot);
    fflush(stdin);
    strcpy(motCopie,mot); // garde une copie du mot

    do //on parcours le mot
    {
        lettre = mot[indexMot]; //on prend une lettre, on recherche le nombre d'occurence dans le reste du mot
        if (lettre !='$') // si la lettre =$, cette lettre a d�j� �t� trait�e
        {
            nombreOccurence = occurenceUneLettre(mot,indexMot+1,lettre); //on cherhce la lettre dans le mot en commencant � la lettre indexMot+1
        printf("la lettre %c est presente %d fois dans %s \n",lettre,nombreOccurence+1,motCopie);
        printf("%s\n",mot); //on affiche le mot d�grad�
        }

        indexMot++; //on passe � la lettre suivante
    }
    while (mot[indexMot]!='\0'); //on s'arrete � la fin du mot

    return 0;
}
/*
int occurenceUneLettre(char mot[50],char lettre) // cherche le nombre de lettre dans un mot
{
    int i=0, nb=0; //nb d'occurrence
    do
    {
        if (lettre==mot[i])
        {
            nb+=1; //on ajoute une occurence
        }
        i=i+1;
    }
    while(mot[i]!='\0'); //on s'arrete quand on est � la fin du mot
    return nb;
}
*/

int occurenceUneLettre(char mot[50],int debut,char lettre) // cherche le nombre de lettre dans un mot en commencant � la lettre debut ex : debut =2 , recherche � partir de la 2eme lettre
//remplace la lettre par $
{
    int i=debut, nb=0; //nb d'occurrence
    do
    {
        if (lettre==mot[i])
        {
            nb+=1; //on ajoute une occurence
            mot[i]='$'; //on enl�ve la lettre pour ne pas la recompter
        }
        i=i+1; //on avance d'une lettre dans le mot
    }
    while(mot[i]!='\0'); //on s'arrete quand on est � la fin du mot
    return nb; //on retourne le nombre d'occurence
}

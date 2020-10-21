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

    do
    {
        lettre = mot[indexMot];
        nombreOccurence = occurenceUneLettre(mot,indexMot+1,lettre);
        printf("la lettre %c est presente %d fois dans %s \n",lettre,nombreOccurence,motCopie);
        printf("%s",mot);
    }
    while (mot[indexMot]!='\0');




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
    while(mot[i]!='\0'); //on s'arrete quand on est à la fin du mot
    return nb;
}
*/

int occurenceUneLettre(char mot[50],int debut,char lettre) // cherche le nombre de lettre dans un mot en commencant à la lettre debut ex : debut =2 , recherche à partir de la 2eme lettre
//remplace la lettre par $
{
    int i=debut, nb=0; //nb d'occurrence
    do
    {
        if (lettre==mot[i])
        {
            nb+=1; //on ajoute une occurence
            mot[i]='$';
        }
        i=i+1;
    }
    while(mot[i]!='\0'); //on s'arrete quand on est à la fin du mot
    return nb;
}

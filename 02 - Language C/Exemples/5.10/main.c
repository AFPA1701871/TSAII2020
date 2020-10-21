#include <stdio.h>
#include <stdlib.h>


int demanderEntier(char* texte)
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

double factorielle(int nb)
{
    int i;
    double fact=1;
    for (i=1;i<=nb;i++)
    {
        fact = fact *i;
    }
    return fact;

}


int main()
{
   int partant,joue;
   double ordre, desordre;

   partant = demanderEntier("Entrer le nombre de partants : ");
   joue=demanderEntier("Entrer le nombre de chevaux joues : ");
   ordre = factorielle(partant)/factorielle(partant-joue);
   desordre=factorielle(partant)/(factorielle(joue)*factorielle(partant-joue));
   printf("dans l'ordre %.5lf\n",ordre);
   printf("dans le desordre %.2lf\n",desordre);
    return 0;
}

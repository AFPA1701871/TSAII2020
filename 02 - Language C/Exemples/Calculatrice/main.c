#include <stdio.h>
#include <stdlib.h>

//    Mes fonctions

double addition(double nb1, double nb2) //nb1 et nb2 sont les valeurs en entrée : paramètre d'entrée
{//permet d'additionner 2 nombres
    // les variables en entrées et les variables déclarées dans les fonctions meurent à la fin de la fonction
    // les variables du programme principal n'existe pas dans les fonctions
    double somme;
    somme=nb1+nb2;
    return somme; // on renvoi somme pour que le programme principale puisse le récuperer
    // la variable retournée doit etre du meme type que le type avant le nom de la fonction
}
double soustraction(double nb1, double nb2)
{
    double difference;
    difference=nb1-nb2;
    return difference;
}
double multiplication(double nb1, double nb2)
{
    double produit;
    produit=nb1*nb2;
    return produit;
}
double division(double nb1, double nb2)
{
    double quotient;
    quotient=nb1/nb2;
    return quotient;
}

double demanderEntier()
{
    double nb;
    int retour;
    do
    {
        fflush(stdin); //on vide les caratères dans le buffer d'entrée du clavier
        printf("Entrer un entier : ");
        retour=scanf("%d",&nb); // on recupere le retour du scanf pour savoir si l'utilisateur a saisi ce que l'on attendait
        //sinon, on boucle
    }
    while(retour==0);
    return nb;
}
double demanderReel()
{
    double nb;
    int retour;
    do
    {
        fflush(stdin);
        printf("Entrer un reel : ");
        retour=scanf("%lf",&nb);
    }
    while(retour==0);
    return nb;
}
int demanderSigne()
{
    char op;
    do
    {
        fflush(stdin);
        printf("Entrer un caractere");
        scanf("%c",&op);
    }
    while(op !='/' && op !='*' && op !='-' && op !='+' );
    return op;
}


//      Fonction Principales
int main()
{
    double a,b,total;
    char operateur;
    //on appele la fonction DemanderReel, on stocke la valeur saisie dans a
    a=demanderReel();
    b=demanderReel();
    operateur=demanderSigne();
    //en fonction de la valeur de l'operateur, on appelle la fonction associée
    switch(operateur)
    {
    case '+' :
        total=addition(a,b);
        // total recupere le resultat de la fonction
        break;
    case '-' :
        total=soustraction(a,b);
        break;
    case '*' :
        total=multiplication(a,b);
        break;
    case '/' :
        if (b!=0)
        {
            total=division(a,b);
        }
        else
        {
            printf("division par zero impossible");
        }

        break;

    }
    //on affiche le resultat
    printf("Le resultat de l'operation %.2lf %c %.2lf = %.2lf",a,operateur,b,total);
    //%.2lf permet de limiter le nombre de chiffres après la virgule
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char chaine[100]={0};
    printf("entrer une chaine : ");
    scanf("%s",chaine);
    printf("\n%s\n", chaine);
    if(strcmp(chaine,"test")==0)
    {
        printf("ceci est un %s", chaine);
    }
    else{
        printf("tu as ecris %s",chaine);
    }
    return 0;
}

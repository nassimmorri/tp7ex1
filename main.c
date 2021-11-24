#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>


int main()
{
    char mot[20],c ;
    int i ,nb=0,n;
    do{

    printf("donne une chaine de caractere de la chaine \n");
    gets(mot); //scanf("%S",mot)
    }while(!strlen(mot));
    n=strlen(mot);
    printf("le premier caractere est : %c \n",mot[0]);
    printf("le dernier caractere est : %c \n",mot[n-1]);
 if(n%2!=0)
        printf("le  caractere de milieu= %c \n",mot[n/2]);
 printf("donne un caractere a recherche  %c \n");
 c = getchar();
 for(i=0;i<strlen(mot);i++){


    if(mot[i]==c){
            nb++;
    }
 }
 printf("\n %c se repete %d fois dans le mot  \n",c,nb);


    return 0;
}

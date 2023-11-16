#include <stdio.h>
int main(){
int i, cont;
char S[100];
printf("Escreva uma palavra:");
scanf("%s", &S);
//esse algoritmo lê a palavra e conta quantas vogais ela tem
for(i=0, cont=0; S[i] != '\0';i++)
{
    if (
        (S[i] == 'A') || (S[i] == 'a') ||
        (S[i] == 'E') || (S[i] == 'e') ||
        (S[i] == 'I') || (S[i] == 'i') ||
        (S[i] == 'O') || (S[i] == 'o') ||
        (S[i] == 'U') || (S[i] == 'u') ||
        (S[i] == 'Y') || (S[i] == 'y'))
    {
        cont++;
    }
}
   printf("%d", cont);
return 0;
}

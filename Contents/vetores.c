#include <stdio.h>
int main(){
int i;
char S[100];
printf("Escreva uma palavra:");
scanf("%s", &S);

for(i=0; S[i] != '\0';i++)
{
    printf("%c\n", S[i]);
}
return 0;
}

#include <stdio.h>

int main (){
int A;
int *pA;
pA = &A;
A= 5;

printf("o valor guardado em A....... [%d]\n", A);
printf("o endereço de A............ [%d]\n", &A);
printf("o valor guardado em pA..... [%d]\n", pA);
printf("o valor apontado por pA... [%d]\n", *pA);
printf("\n");
}

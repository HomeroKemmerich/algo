#include <stdio.h>

int main (){
int B[5] = {10, 11, 12, 13, 14};
int *pB;
pB = &B;

printf("valor guardado em B[0]... [%d]\n", B[0]);
printf("valor guardado em B[1]... [%d]\n", B[1]);
printf("valor guardado em B[2]... [%d]\n", B[2]);
printf("valor guardado em B[3]... [%d]\n", B[3]);
printf("valor guardado em B[4]... [%d]\n", B[4]);
printf("valor guardado em B[5]... [%d]\n", B[5]);
printf("endereço de B............ [%d]\n", &B);
printf("valor apontado por pB.... [%d]\n", *pB);
pB = pB+1;
printf("valor apontado por pB.... [%d]\n", *pB);
pB = pB+1;
printf("valor apontado por pB.... [%d]\n", *pB);
pB = pB+1;
printf("valor apontado por pB.... [%d]\n", *pB);
pB = pB+1;
printf("valor apontado por pB.... [%d]\n", *pB);
pB = pB+1;
printf("valor apontado por pB.... [%d]\n", *pB);
}

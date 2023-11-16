#include <stdio.h>
#define TAM 12

int main(){

double M[TAM][TAM], soma;
char O;
int lin, col, qtd;
soma =0;
qtd=0;

do
{
    scanf("%c", &O);
    if((O == 'M')||(O == 'S'))break;
}while (1);

for(lin=0; lin<TAM; lin++)
    {
        for(col=0; col<TAM; col++)
        {
         //scanf("%f", &M[lin][col]);
M[lin][col]=2;
        }
    }
for(lin=0; lin<(TAM-1); lin++)
{
    for(col=lin+1; col<TAM; col++)
    {
        soma += M[lin][col];
        qtd++;
    }
}
switch(O)
{
case 'S':printf("%.1f", soma);break;
case 'M':printf("%.1f", soma/qtd);break;
}
}

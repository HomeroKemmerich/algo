#include <stdio.h>
#define TAM 12 //criação de uma constante
int main()
{
    char O;
    double M[TAM][TAM], soma=0;
    short int lin, col, qtd=0;//"inteiro curto": valores de 8bits
    //Leitura da opção de soma ou média
    do
    {
        scanf("%c", &O);
        if((O=='S') || (O=='M')) break;
    }
    while(1);
    //preenchimento dos valores da matriz
    for(lin=0; lin<TAM; lin++)
    {
        for(col=0; col<TAM; col++)
        {
            scanf("%f", &M[lin][col]);
        }
    }
    //cálculo
    for(lin=0; lin<(TAM-1); lin++)
    {
        for(col=lin+1; col<TAM; col++)
        {
            soma += M[lin][col];
            qtd ++;
        }
    }
    switch(O)//apenas posições inteiras (char ou int)
    {
    case 'S':
        printf("%.1f", soma);
        break;
    case 'M':
        printf("%.1f", soma/qtd);
        break;
    }
}

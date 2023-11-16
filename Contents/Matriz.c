#include <stdio.h>
#define TAM 12
int main()
{
    int M[TAM][TAM];
    char S;
    for(lin=0; lin<TAM; lin++)
    {
        for(col=0; col<TAM; col++)
        {
           scanf("%f", &M[lin][col]);
        }
    }
}

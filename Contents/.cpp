/*máximo de 100 valores inteiros
0 para parar
mostrar os 10 primeiros valores em ordem crescente
se  não chegar a 10, fazer com os valores digitados*/
#include <stdio.h>

int main(){
//declaração das variáveis
int A,B,X,i;
int n[100];
int cont = 0, c = 0;
//leitura dos valores
for(cont=0; cont<100; cont++)
{
    printf("Informe %do. numero: ", cont+1);
    scanf("%d", &n[cont]);
    if(n[cont]== 0) break;
}
//Ordenar os 10 primeiros elementor do vetor
for(A=0; A<9; A++)
{
    for(B=A;B<10;B++)
    {
        if(n[A]>n[B])
        {
            X=n[A];
            n[A]=n[B];
            n[B]=X;
        }
    }
}
for(A=0; A<10; A++)
{
 printf("[%d] = %d\n", A, n[A]);
}
}

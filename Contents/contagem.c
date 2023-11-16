#include <stdio.h>
int main (){
int v;
v = 10;//Inicialização da var de controle
do
{
  v = v - 2;//atualização da var
  printf("%d\n",v);
}while(v != 0);//Teste da var
}

#include <stdio.h>
int main (){
int v;
v = 10;//Inicializa��o da var de controle
do
{
  v = v - 2;//atualiza��o da var
  printf("%d\n",v);
}while(v != 0);//Teste da var
}

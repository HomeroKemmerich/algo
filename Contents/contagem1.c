#include <stdio.h>
 int main () {
     int v;
     for(v = 10, x = 5; v >= 0; v = v-2)//(Inicializa��o; teste; atualiza��o), especificamente nessa ordem;
     {
         printf("%d\n",v);
     }
}

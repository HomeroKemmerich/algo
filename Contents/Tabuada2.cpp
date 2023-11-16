#include <iostream>
using namespace std;
int main()
{
    int numero,c;
    do{
    cout << "Tabuada\n";
do{
         //interface de entrada de dados
        cout << "Informe um numero entre 1 e 10: ";
        cin >> numero;
        if(numero == 0) return 0;
        //testar a validade do número
       if ( (numero < 1) || (numero > 10) )
        {
            cout << "Valor fora do intervalo, digite outro. ";
        }
   } while ( (numero < 1) || (numero > 10) );
        cout << "Tabuada do " << numero << endl;
        c = 0;
        while (c < 10){
            c = c + 1;
            cout << c << " x "<<numero<<" = "<<c*numero<<endl;
        }
}while (1);
    }


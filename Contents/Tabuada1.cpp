#include <iostream>
using namespace std;
int main()
{
    int numero,c;
    cout << "Tabuada\n";
    do{
         //interface de entrada de dados
        cout << "Informe um numero entre 1 e 10: ";
        cin >> numero;
        //testar a validade do número
       if ( (numero < 1) || (numero > 10) )
        {
            cout << "Valor fora do intervalo, digite outro";
        }
   } while ( (numero < 1) || (numero > 10) );
        cout << "Tabuada do " << numero << endl;
        c = 0;
        while (c < 10){
            c = c + 1;
            cout << c << " x "<<numero<<" = "<<c*numero<<endl;
        }
    }
    return 0;
}

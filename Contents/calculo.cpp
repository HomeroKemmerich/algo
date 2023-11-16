#include <iostream>
using namespace std;
int main ()
{
    int numero, SomaPar, QtdPar, Qtd;
    SomaPar = 0;
    QtdPar = 0;
    Qtd = 0;
    cout << "digite numeros inteiros (encerre com zero):";

    do
    {
        cin >> numero;
        if (!numero) // se "=", o programa FAZ "numero = 0". Se "==", o  programna VERIFICA se "numero = 0".
        {
            break;
        }
        else
        {
            if (!(numero%2))
            {
                SomaPar = SomaPar + numero; //acumulação
                QtdPar = QtdPar + 1; //contagem
            }
            Qtd = Qtd + 1;
        }
    }
    while (1);
    cout << "Total de numeros: " << Qtd << endl;
    cout << "Media dos pares: " << (SomaPar/QtdPar);
}

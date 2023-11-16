#include <iostream>
using namespace std;
main()
{
//declaração das variáveis
    int hi, hf, mi, mf, th, tm;
//interface de inserção de dados
    cin >> hi;
    cin >> mi;

    cin >> hf;
    cin >> mf;


    if (hi < hf)
    {
        th = hf - hi;
        if (mi = mf)
        {
            tm = 00;
        }
        else
        {
            if (mi < mf)
        {
            tm = mf - mi;
        }

        else
        {
            th = th - 1;
            tm = (mf + 60) - mi;
        }
        }
    }
    cout << th << ":" << tm;
}

#include <iostream>
using namespace std;
main (){
int idade, anos, resto, meses, dias;
//cout << "Informe a sua idade em dias";
cin >> idade;
anos = idade/365;
resto = idade%365;
meses = resto/30;
dias = resto%30;
cout << anos << " ano(s)" << endl;
cout << meses << " mes(es)" << '\n';
cout << dias << " dia(s)\n";
}

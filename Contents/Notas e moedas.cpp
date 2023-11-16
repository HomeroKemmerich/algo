#include <iostream>
using namespace std;
main (){
//Declaração das variáveis;
int N100, N50, N20, N10, N5, N2, M1, M50, M25, M10, M5, M01;
float valor, resto100, resto50, resto20, resto10, resto5, resto2, resto1, resto05, resto25, resto01, resto005;
//Interface de entrada de dados;
cin >> valor;
N100 = valor/100;
resto100 = (int)valor%100;
N50 = resto100/50;
resto50 = (int)resto100%50;
N20 = resto50/20;
resto20 = (int)resto50%20;
N10 = resto20/10;
resto10 = (int)resto20%10;
N5 = resto10/5;
resto5 = (int)resto10%5;
N2 = resto5/2;
resto2 = (int)resto5%2;
M1 = resto2/1;
resto1 = (int)(resto2*100)%1;
M50 = resto1/0.5;
resto05 = (resto1*100)%0.5;
M25 = resto05/0.25;
resto25 = (resto05*100)%0.25;
M10 = resto25/0.1;
resto01 = (resto25*100)%0.1;
M5 = resto01/0.05;
resto005 = (resto01*100)%0.05;
M1 = resto005/0.01;

cout << "NOTAS:" << endl;
cout << N100 << " notas de R$100,00" << endl;
cout << N50 << " notas de R$50,00" << endl;
cout << N20 << " notas de R$20,00" << endl;
cout << N10 << " notas de R$10,00" << endl;
cout << N5 << " notas de R$5,00" << endl;
cout << N2 << " notas de R$2,00" << endl;
cout << "MOEDAS:" << endl;
cout << M1 << " moedas de R$1,00" << endl;
cout << M50 << " moedas de R$0,50" << endl;
cout << M25 << " moedas de R$0,25" << endl;
cout << M10 << " moedas de R$0,10" << endl;
cout << M5 << " moedas de R$0,05" << endl;
cout << M01 << " moedas de R$0,01";
}

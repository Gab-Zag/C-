#include <iostream>
#include <cmath>
using namespace std;
int fat1(int n1)
{
	//fatoraï¿½ï¿½o
	int i1;
	int fat = 1;
	for(i1 = 1; i1 <= n1; i1++)//estrutura de repetiï¿½ï¿½o
	{
		fat = fat * i1;//primeira parte da conta da fatoraï¿½ï¿½o
	}
	return fat;
}
double soma(double x1, int n1)
{
    double resultado;
	int resultado1 = 0;
	double resultado2;
	double resultado3 = 0;
	double resultado4;
	int i;
	int numero = 2;
	for(i = 0; i <= n1; i++)
	{
		resultado2 = (pow(x1, numero)) / (fat1(numero));
		resultado1 = resultado1 + resultado2;
		if(resultado1 % 2 == 0)
        {
		    resultado3 = resultado1 + resultado3;
		}
		else
        {
		    resultado3 = resultado1 - resultado3;
        }
		resultado = 1 - resultado3;
	}
	return resultado;
}
int main()
{
	//variaveis
	int n;
	double x;
	double resultadofinal;
	//entrada de dados
	cout << "NO. termos (>= 1 e <= 20): ";
	cin >> n;
	while(n < 1)
	{
		cout << "NO. invalido por favor entre com um numero correto: ";
		cin >> n;
	}
	while(n > 20)
	{
		cout << "No. invalido por favor entre com um numero correto: ";
		cin >> n;
	}
	cout << "Valor de X: ";
	cin >> x;
	cout << soma(x,n);
	return 0;
}

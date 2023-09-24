#include <iostream>//sistema padrão c++
#include <cmath>//biblioteca de matematica
#include <iomanip>//sistema de manipulação

using namespace std;//sistema de entra I/O stream std

int main()
{
	setlocale(LC_ALL,"portuguese");//sistema para a linguagem portuguesa
	//variaveis para os numeros da função
	int i = 1;//variavel para repetição do for
	double x1;//primeiro numero
	double x2;//segundo numero
	double x3;//terceiro numero
	double x4;//quarto numero
	double x5;//quinto numero
	//variaveis para as contas da função
	double r1;//formula para o primeiro numero
	double r2;//formula para o segundo numero
	double r3;//formula para o terceiro numero
	double r4;//formula para o quarto numero
	double r5;//formula para o quinto numero
	double f;//formula para a função
	//entrada de dados
	cout << "Digite o primeiro numero da função " << endl;//mensagem para o usuario
	cin >> x1;//entrada do usuario
	for(i; i <= x1; i++)//sistema de repetição for
	{
		r1 = x1 * i;
	}
	cout << "Digite o segundo numero da função " << endl;//mensagem para o usuario
	cin >> x2;//entrada do usuario
	for(i; i <= x2; i++)//sistema de repetição for
	{
		r2 = x2 * i;
	}
	cout << "Digite o terceiro numero da função " << endl;//mensagem para o usuario
	cin >> x3;//entrada do usuario
	for(i; i<=x3; i++)//sistema de repetição for
	{
		r3 = x3 * i;
	}
	cout << "Digite o quarto numero da função " << endl;//mensagem para o usuario
	cin >> x4;
	for(i;i<=x4;i++)//sistema de repetição for
	{
		r4 = x4 * i;
	}
	cout << "Digite o quinto numero da função " << endl;//mensagem para o usuario
	cin >> x5;
	for(i;i <=x5; i++)//sistema de repetição for
	{
		r5 = x5 * i;
	}
	f = (x1/r1)+(x2/r2)+(x3/r3)+(x4/r4)+(x5/r5);
	cout << fixed << setprecision(5) << "O resultado da função e " << f << endl;
	return 0;
}

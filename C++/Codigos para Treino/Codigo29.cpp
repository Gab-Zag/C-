#include <iostream>//biblioteca padrão c++
#include <locale>//bilioteca para a ligua brasileira
using namespace std;//sistema padrão i/o std
double fat(int n, int i , double fat1)//função para a fatoração
{
	fat1 = 1;
	for(i = 1; i <= n; i++)//estrutura de repetição
	{
		fat1 = fat1 * i;//primeira parte da conta da fatoração
	}
	return fat1;
}
int main()//função principal
{
	setlocale(LC_ALL, "Portuguese"); //estrutura principal
	//variaveis
	double fat2;
	double n1;//variavel para a entrada
	double i1;//variavel para o resultado
	//entrada de dados
	cout << "Entre com o numero para realizar o fatorial: ";
	cin >> n1;
	//saida de dados,
	if(n1 < 1)
	{
		cout << "Numero invalido";//mensagem para o usuario
	}
	else
	{
		cout << "O fatorial de " << n1 << " sera " << fat(n1, i1, fat2);//mensagem para o usuario
	}
	return 0;
}

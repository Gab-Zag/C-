#include <iostream>//sistema padrão c++
#include <iomanip>//sistema de manipulação
using namespace std;//sistema de entra I/O stream std

int main()
{
	setlocale(LC_ALL, "portuguese"); //sistema para a lingua portuguesa
	//variaveis
	double x;//denominador da divisão
	double r;//numero de repedlções
	double i;//variavel para for
	double f;//variavel para a função
	double d;//variavel para divisão
	double s = 0 ;//variavel para amarzenamento da soma
	//entrada de dados
	cout << "Entre com o número de X " << endl;//mensagem para o usuario
	cin >> 	x;//entrada de dado do usuario
	cout << "Entre com o número de repetições " << endl;//mensagem para o usuario
	cin >> r;//entrada de dado do usuario
	//saida de dados
	for(i = 1; i <= r; i++) //estrutura de repetição
	{
		d = i / x;//divisão da função
		s = s + d;//soma da função
		f = s;//resultado da função
	}
	if(f <= 0)//estrutura de decisão
		cout << "Cálculo imposível";//mensagem caso seja verdadeiro
	else//estrutura de decisão
	{
		cout << "A função de " << x << " Será " << fixed << setprecision(5)  << f << endl;//resultado caso seja falso
	}
	return 0;
}
 

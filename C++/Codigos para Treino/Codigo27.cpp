#include <iostream>//biblioteca base para c++
#include <locale>//biblioteca para a lingua portuguesa
using namespace std;//sistema padrão i/o std c++
double converte(double mph1, double kmh1)//função para a conta
{
	//teste para realizar a conta
	if(mph1 > 0)
	{
		kmh1 = mph1 * 1.60934;//conta para caso o teste seja verdadeiro
	} 
	else//resultado para caso o teste seja falso
	{
		return 0;
	}
	return kmh1;
}
int main()//função principal
{
	setlocale(LC_ALL,"Portuguese");//estrutura principal
	//variaveis
	double kmh;//variavel para o resultado
	double mph;//variavel para a entrada
	//entrada de dados
	cout << "Entre com o valor em mph: ";//mensagem para o usuario
	cin >> mph;//entrada do suario
	//saida de dados
	if(converte(mph, kmh) > 0)
	{	
		cout << "Se convertemos " << mph << " Mph para Khm ele valera " << converte(mph, kmh) << " Kmh" << endl;//saida do usuario
	}
	else
	{
		cout << "Numero invalido";//mensagem para o usuario
	}
	return 0;
}

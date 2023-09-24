#include <iostream> //sistema de padrão pase de c++
#include <cmath>//biblioteca de matematica
using namespace std; //sistema de entrada I/O std
int main()
{
	setlocale (LC_ALL, "portuguese");//padrão para a lingua portuguesa
	
	//variaveis;

	double x;//varivel para o primeiro numero
	double y;//variavel para o segundo numero
	double f;//variavel para o resultado das equações matematicas

	//entrada de dados

	cout << "Entrada com o primeiro valor: ";//mensagem para o usuario
	cin >> x;//dado para a primeira variavel
	cout << "Entrada com o primeiro valor: ";//mensagem para o usuario
	cin >> y;//entrada para a segunda variavel

	//saida de dados

	if(x > y)//condição caso x seja maior que y
	{
		f = pow(x, 2) - pow(y, 2) + 2 * (x * y); //formula da fução
		cout << "A função de " << x << " e " << y << " sera de: " << f;//resultado da conta
	}
	else 
		if(x < y)//condição caso x seja menor que y 
	{
		f = pow(y, 2) + pow(x, 2) + 2 * (x * y); //formula da função 
		cout << "A função de " << x << " e " << y << " sera de: " << f;//resultando da conta
	}
	else 
		if(x = y)//condição caso x seja igual a y
	{
		f = 2 * (x * y) + x + y;//formula da função
		cout << "A função de " << x << " e " << y << " sera de: " << f;//resultado da conta
	}

	return 0;
}

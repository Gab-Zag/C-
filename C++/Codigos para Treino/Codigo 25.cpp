#include <iostream>//sistema de padrão de c++
#include <cmath>//biblioteca de matematica
#include <iomanip>//sistema de manipulação
using namespace std;//sistema de entrada I/O std
int main()
{
	setlocale (LC_ALL, "portuguese"); //padrão para a liguagem portuguesa

	//variaveis

	double p;//valor do preço atual
	int vm;//quantidade vendida no mês
	double r;//o novo valor em real

	// entrada de dados

	cout << "Preço atual: ";//mensagem para o usuario
	cin >> p;//entrada do preço atual
	cout << "Quantidade vendida no mês: ";//mensagem para o usuario
	cin >> vm;//entrada do preço atual

	//saida de dados

	cout << "========================================================================" << endl;
	if(p <= 0)
	{
		cout << "Erro de entrada" << endl;
	}
	else
	{
		if(vm < 0)
		{
			cout << "Erro de entrada" << endl;
		}
		else
		{
			if(vm <= 0)
			{
				r = p - (p * 0.10);
				cout << fixed << setprecision(2) << "Novo preço: R$ " << r << " (preço reduzido)" << endl;
			}
			else
			{
				if(vm > 0 && vm < 500)
				{
					cout << fixed << setprecision(2) << "Novo preço: R$ " << p << " (valor sem reajuste)" << endl;
				}
				else
				{
					if(vm >= 500 && vm < 1000)
					{
						r = p + (p * 0.10);
						cout << fixed << setprecision(2) << "Novo preço: R$ " << r << " (preço aumentado)" << endl;
					}
					else
					{
						if(vm >= 1000)
						{
							r = p + (p * 0.15);
							cout << fixed << setprecision(2) << "Novo preço: R$ " << r << " (preço aumentado)" << endl;
						}

					}

				}
			}

		}

	}
	cout << "========================================================================" << endl;		
	return 0;
}

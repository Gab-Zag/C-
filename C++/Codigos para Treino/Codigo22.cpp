#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "portuguese");
	//variaveis
	int s, su, m;
	double d, n1, n2;
	string resposta;
	//entrada de dados
	cout << "ola sou a calculadora matematica eu realizo funçôes de:" << endl;
	cout << "SOMA, SUBTRAÇÃO, MULTIPLICAÇÃO, DIVISÃO" << endl;
	cout << "qual operação deseja realizar?";
	cin >> resposta;
	cout << "digite o primeiro numero que deseja:";
	cin >> n1;
	cout << "digite o segundo numero que deseja:";
	cin >> n2;
	//sainda de dados
	cout << "===================================================================" << endl;
	if(resposta == "+")
	{
		s = n1 + n2;
		cout << "a soma de " << n1 << " com " << n2 << " sera: " << s << endl;
	}
		else
			if(resposta == "-")
			{
				
				su = n1 - n2;
				cout << "a subtração de " << n1 << " com " << n2 << " sera: " << su << endl;
			}
				else
					if(resposta == "*")
					{
						m = n1 * n2;
						cout << "A multiplicação de " << n1 << " com " << n2 << " sera: " << m << endl;
					}
						else
							if(resposta == "/" )
							{
								d = n1 / n2;
								cout << "A divisão de " << n1 << " com " << n2 << " sera: " << d << endl;
							}
	cout << "===================================================================";
	return 0;
}

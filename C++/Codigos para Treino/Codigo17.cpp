#include <iostream>
#include <locale>
using namespace std;
struct ficha
{
	char equipes[10][30];
	int acertos;
	int erros;
	int tempo;
	int quantidadedeequipes;
	double nf[10];
	double vencedor;
	char equipevencedora[10][30];
};
int main()
{
	setlocale(LC_ALL, "Portuguese");//sistema para a lingua portuguesa
	//variaveis
	int i;
	int i1;
	ficha dados;
	//entrada de dados
	cout << "Seja bem vindo a Olimpíada de Algarismos do Inatel" << endl;
	cout << "Quantos equipes participaram da competição esse ano?" << endl;
	cin >> dados.quantidadedeequipes;
	cout << "Certo agora me passem os dados das equipes: ";
	dados.vencedor = -999;
	for (i = 1; i <= dados.quantidadedeequipes; i++)
	{
		cout << i << "º Participantes qual o nome da sua equipe?: " << endl;
		cin.ignore();
		cin.getline(dados.equipes[i], 30);
		cout << "Quantos acertos vocês tiveram ?" << endl;
		cin >> dados.acertos;
		cout << "Quantos erros vocês tiveram ?" << endl;
		cin >> dados.erros;
		cout << "Quanto tempo vocês levaram em minutos ? " << endl;
		cin >> dados.tempo;
		dados.nf[i] = (5 * dados.acertos) - (2 * dados.erros) + (1 / dados.tempo);
		if(dados.nf[i] < dados.vencedor)
		{
			dados.vencedor = dados.nf[i];
			dados.equipevencedora = dados.equipes;
		}
	}
	cout << "O 1º lugar foi:" << endl << dados.vencedor << "   "; 
	return 0;
}

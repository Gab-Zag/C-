#include <iostream>
using namespace std;
struct ficha
{
	char nome[50][50];
	int participantes;
	int nota1[50];
	int nota2[50];
	int nota3[50];
	int nota4[50];
	int soma[50];
	char campeao[1][50];
};
int main()
{
	//variaveis
	ficha dados;
	int i;
	int vencedor = -999;
	int venceu;
	//entrada de dados
	cin >> dados.participantes;
	for (i = 0; i < dados.participantes; i++)
	{
		cin.ignore();
		cin.getline(dados.nome[i], 50);
		cin >> dados.nota1[i];
		cin >> dados.nota2[i];
		cin >> dados.nota3[i];
		cin >> dados.nota4[i];
		dados.soma[i] = dados.nota1[i] + dados.nota2[i] + dados.nota3[i] + dados.nota4[i];
	}
	for(i = 0; i < dados.participantes; i++)
	{
		if(dados.soma[i] > vencedor)
		{
			venceu = i;
		}
	}
	cout << "Vencedor: " << dados.nome;
	return 0;
}

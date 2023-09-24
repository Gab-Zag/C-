#include <iostream>//sistema padrão c++
#include <locale>//biblioteca lingua portuguesa
using namespace std;//sistema de entra I/O stream std
struct ficha//registro
{
	char nome[200][80];//variavel para o nome dos participantes
	char cpf[200][20];//variavel para o CPf dos participantes
	int idade[20];//variavel para a idade dos participantes
	int participantes;//variavel para a quantidade de participantes
};
int main()//bloco principal
{
	setlocale(LC_ALL, "Portuguese");//sistema para a lingua portuguesa
	//variaveis
	int i;//variavel para a estrutura for
	ficha dados;
	//entrada de dados
	cout << "OLA!" << endl;//mensagem para o usuario
	cout << "Seja bem vinda a 16º corrida Pró Asilo" << endl;//mensagem para o usuario
	cout << "Por favor informe a quantidade de participantes: " << endl;//mensagem para o usuario
	cout << "Lembrese so pode participar se for maior de 10 anos e menor de 80 anos" << endl;//mensagem para o usuario
	cin >> dados.participantes;//entrada do usuario
	for (i = 1; i <= dados.participantes; i++)//etrutra de repetição for
	{
		cout << "Por favor participante " << i << " informe seu nome: " << endl;//mensagem para o usuario
		cin.ignore();//debug de cin.getline
		cin.getline(dados.nome[i], 80);//entrada do usuario
		cout << "Seja bem vindo " << dados.nome[i] << " Qual o seu cpf?" << endl;//mensagem para o usuario
		cin.getline(dados.cpf[i], 20);//entrada do usuario
		cout << "Qual a sua idade?" << endl;//mensagem para o usuario
		cin >> dados.idade[i];//entrada do usuario
		while(dados.idade[i] < 10 || dados.idade[i] > 80)//estrutura de deição
		{
			cout << "Desculpe mais a sua idade não e permitida por favor cadastre outro participante: " << endl;//mensagem para o usuario
			cout << "Por favor participante " << i << " informe seu nome: " << endl;//mensagem para o usuario
			cin.ignore();//debug de cin.getline
			cin.getline(dados.nome[i], 80);//entrada do usuario
			cout << "Seja bem vindo " << dados.nome[i] << " Qual o seu cpf?" << endl;//mensagem para o usuario
			cin.getline(dados.cpf[i], 20);//entrada do usuario
			cout << "Qual a sua idade?" << endl;//mensagem para o usuario
			cin >> dados.idade[i];//entrada do usuario
		}
	}
	for (i = 1; i <= dados.participantes; i++)//estrutura de repetição
	{
		cout << i << "º participante" << endl;//mensagem para o usuario
		cout << "Nome: " ;//mensagem para o usuario
		cout << dados.nome[i] << endl;//mensagem para o usuario
		cout << "Cpf: ";//mensagem para o usuario
		cout << dados.cpf[i] << endl;//mensagem para o usuario
	}
	return 0;
}

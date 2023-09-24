#include <iostream>//sistema padrão c++
using namespace std;//sistema padrão I/O std

int main()
{
	setlocale(LC_ALL,"portuguese");
	//variaveis
	int n;//varivel para a quantidade de pessoas
	int i;//variavel para o for
	char nome[51];//variavel para o nome da pessoa
	char cpf[12];//variavel para o cpf da pessoa
	int mg=0;//variavel para a contagem de pessoas que são do estado de Minas Gerais
	int estado;//variavel para a resposta do estado da pessoa baseado em 1 ou 0
	//entrada de dados
	cout << "Ola!!." << endl;//mensagem para o usuario
	cout << "Seja bem vindo ao INATEL." << endl;//mensagem para o usuario
	cout << "Quantos alunos possui no grupo de vocês?" << endl;//mensagem para o usuario
	cin >> n;//entrada do usuario
	for(i=1; i<=n; i++)//estrutura de repetição for
	{
		cout << "\nCadastro ("<<i<<"):"<<endl;//mensagem para o usuario
		cout << "Seu nome: "; //mensagem para o usuario
		cin.ignore(); //codigo para evitar bug com char
		cin.getline(nome, 51); //entrada do usuario em base char
		cout << "Por favor digite seu CPF: "; //mensagem para o usuario
		cin.getline(cpf, 12); //entrada do usuario em base char
		cout << "Se vc for de mg digite 1 se for de outro estado digite 0: "; //mensagem para o usuario
		cin >> estado; //entrada do usuario
		if(estado == 1) //estrututra de decisão if
		{
			mg++; //variavel para contagem de pessoas do estado de minas gerais
		}
		if(mg > 1)
		{
			cout << " O total e de " << mg << " Alunos , que moram em Minas Gerais"; //mensagem para o usuario
		}
		else
		{
			cout << " O total e de "<< mg << " Aluno , que moram em Minas Gerais"; //mensagem para o usuario
		}
			
	}
	return 0;
}

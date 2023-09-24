#include <iostream>//sistema padrão c++
#include <locale>//biblioteca lingua portuguesa
using namespace std;//sistema de entra I/O stream std
struct ficha//registros
{
	int placas [10];//variavel para o numeros das placas
	int renavam[11];//variavel para o numeros do renavam
	int veiculos;//variavel para os veiculos
};
int main()//bloco principal
{
	setlocale(LC_ALL, "Portuguese");//sistema para a lingua portuguesa
	//variaveis
	ficha dados;//pegando informações dos registros
	int i;//variavel apra for
	//entrada de dados
	cout << "Bem vindo! Ao sistema inteligente de cadastros de veiculos o SICV" << endl;//mensagem ao usuario
	cout << "A seguir por favor digite os dados dos seus 10 veiculos" << endl;//mensagem ao usuario
	cout << "Quantos veículos deseja cadastrar? " << endl;//mensagem ao usaurio
	cin >> dados.veiculos;//entrada do usuario
	while(dados.veiculos <= 0 || dados.veiculos > 10)//teste para ver se o numero de veiculos esta correto
	{
		cout << "Por favor digite novamente a quantidade de veiculos correta" << endl;//mensagem ao usuario
		cout << "Não se esqueça so e permitido ate 10 veiculos" << endl;//mesagem ao usuario
		cin >> dados.veiculos;//entrada do usaurio
	}
	for (i = 1; i <= dados.veiculos; i++) //estrutura de repetição
	{
		cout << "Digite a placa do " << i << "º veiculo" << endl;//saida para o usuario
		cin >> dados.placas[i];//entrada do usuario
	}
	for(i = 1; i <= dados.veiculos; i++)//estrutura de repetição
	{
		cout << "Digite a renavam do " << i << "º veiculo" << endl;//mensagem para o usuario
		cin >> dados.renavam[i];//entrada do usuario
	}
	for (i = 0; i <= dados.veiculos; i++) //estrutura de repetição
	{
		cout << "Os dados do " << i << "º Veiculo" << endl;//saida para o usuario
		cout << dados.placas[i] << endl;//saida para o usuario
		cout << dados.renavam[i] << endl;//saida para o usuario
	}
	return 0;
}

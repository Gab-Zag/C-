#include <iostream>
#include <locale>
using namespace std;
struct ficha
{
	int codigo;
	char nome[30];
	char endereco[80];
	float saldo;
};
int main()
{
	setlocale(LC_ALL,"Portuguese");
	ficha dados;
	cout << "Codigo";
	cin >> dados.codigo;
	cin.ignore();
	cout << "Nome";
	cin.getline(dados.nome,30);
	cout << "Endereço";
	cin.getline(dados.endereco,80);
	cout << "Saldo";
	cin >> dados.saldo;
	cout << "Dados das pessoas";
	cout << dados.codigo;
	cout << dados.nome;
	cout << dados.endereco;
	cout << dados.saldo;
	return 0;
}

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	//variaveis
	int i;
	float n;
	int p = 0;
	float m;
	float n2 = 0;
	float n3;
	//entra de dados
	for(i = 0; i <= 9; i++)
	{
		cin >> n;
		n3 = n2 + n;
		n2 = n3;
		if(n >= 1)
		{
			p = p+1;
		}
	}
	m = n2 /10;
	//saida de dados
	cout << "Postivos = " << p << endl << fixed << setprecision(2)<< "Media = " << m;
	return 0;
}

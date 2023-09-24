#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	//variaveis
	double A;
	double B;
	double C;
	double D;
	double x1;
	double x2;
	//entrada de dados
	cin >> A;
	cin >> B;
	cin >> C;
	//saida de dados
	D = pow(B, 2) - (4. * A * C);
	x1 = (-B + sqrt(D)) / (2. * A);
	x2 = (-B - sqrt(D)) / (2. * A);
	if(A == 0)
		cout << "impossivel";
	else
	{
		if(D < 0)
			cout << "impossivel";
		else
	{
		cout << fixed << setprecision(5) << "X1 = " << x1 << endl;
		cout << fixed << setprecision(5) << "X2 = " << x2 << endl;
	}
	}
	
	return 0;
}

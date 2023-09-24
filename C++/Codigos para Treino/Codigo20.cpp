#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	double area, n, raio;
	n = 3.14159;
	cin >> raio;
	area = n * pow(raio, 2);
	cout << fixed << setprecision(4) << "A=" << area;
	return 0;
}

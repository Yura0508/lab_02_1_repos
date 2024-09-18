// Lab_02.cpp
// < Кісіль Юрій >
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 7
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double z1;
	double z2;
	double a;
	double b;
	double PI = 4 * atan(1.0);

	cout << "a = "; cin >> a;

	z1 = pow(cos(PI * 3 / 8 - a / 4), 2) - pow(cos((PI * 11 / 8) + a / 4), 2);
	z2 = sqrt(2) / 2 * sin(a / 2);

	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();

	return 0;
}

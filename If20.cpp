//На числовой оси расположены три точки: A, B, C. Определить, какая из
//двух последних точек(B или C) расположена ближе к A, и вывести эту
//точку и ее расстояние от точки A.
#include <iostream>
using namespace std;
int main()
{
	float a, b, c;
	cout << a << b << c;
	cin >> a >> b >> c;
	if (abs(a - b) > abs(a - c))
	{
		cout << c << abs(a - c);
	}
	else
	{
		cout << b << abs(a - b);
	}
}
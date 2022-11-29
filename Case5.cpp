//Арифметические действия над числами пронумерованы следующим образом: 1 — сложение, 2 — вычитание, 3 — умножение, 4 — деление.Дан
//номер действия N(целое число в диапазоне 1–4) и вещественные числа A и B(В не равно 0).Выполнить над числами//указанное действие и вывести результат.#include <iostream>
using namespace std;
int main()
{
	float a, b;
	int n;
	cin >> n;
	cin >> a >> b;
	if (b != 0)
	{
		switch (n)
		{
		case 1: cout << a + b; break;
		case 2: cout << a - b; break;
		case 3: cout << a * b; break;
		case 4: cout << b / a; break;
		}
	}
	else
	{
		cout << "B не может равняться нулю";
	}
}
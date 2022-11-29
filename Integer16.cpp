//Дано трехзначное число. Вывести число, полученное при перестановке цифр десятков и единиц исходного числа (например, 123 перейдет
//в 132).
#include <iostream>
#include <string>
using namespace std;

void main()
{
    int x, a, b, c, x2;
    string x1;
    cout << "Введите число: ";
    cin >> x;
    a = x % 10;
    b = x % 100 / 10;
    c = x / 100;
    x1 = to_string(c) + to_string(a) + to_string(b);
    x2 = stoi(x1);
    cout << x2;
}
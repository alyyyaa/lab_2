//Дано трехзначное число. Проверить истинность высказывания:
//«Все цифры данного числа различны».
#include <iostream>
using namespace std;

int main()
{
    int x, a, b, t;
    bool otv;
    cout << "Введите число: ";
    cin >> x;
    a = x % 10;
    b = x % 100 / 10;
    t = x / 100;
    if ((((t < b) && (b < a)) || ((t > b) && (b > a))) && ((a != b) && (b != t) && (t != a)))
    {
        otv = true;
    }
    else
    {
        otv = false;
    }
    cout << otv;
}
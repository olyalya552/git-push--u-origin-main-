#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(0, "");
	int a;
	int b;
	int S;
	cout << "Введите два целых числа : " << endl;
	cout << "Первая переменная: ";
	cin >> a;
	cout << "Вторая переменная: ";
	cin >> b;
	S = a + b;
	cout << "Сумма двух целых чисел: " << S << endl;
	return 0;
}
// Задание 20.cpp : Boolean20. Дано трехзначное число. Проверить истинность высказывания:
//«Все цифры данного числа различны».

#include <iostream>

using namespace std;

int main()

{
	setlocale(LC_ALL, "Russian");
	bool answer;
    cout << "Введите трехзначное число"<<endl;
	int a,b,c,d;
	cin >> a;
	b = a / 100;
	c = a / 10 % 10;
	d = a % 10;
	answer = c!=b && c!=d && d !=b;
	cout <<"Истинность высказывания:Все цифры данного числа различны -"  <<boolalpha << answer;
	return 0;

}


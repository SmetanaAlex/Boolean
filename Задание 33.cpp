// Задание 33.cpp : ЭBoolean33. Даны целые числа a, b, c. Проверить истинность высказывания:
//«Существует треугольник со сторонами a, b, c».

#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
    cout << "Введите сторону A"<<endl ;
	int a, b, c;
	cin >> a;
	cout << "Введите сторону B" << endl;
	cin >> b;
	cout << "Введите сторону C " << endl;
	cin >> c;
	bool answer;
	answer = a < b + c && b < a + c && c < a + b;
	cout << "Проверить истинность высказывания:Существует треугольник со сторонами a, b, c -"<<boolalpha << answer;
	return 0;
}

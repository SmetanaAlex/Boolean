// Задание 13.cpp : Boolean13. Даны три целых числа: A, B, C. Проверить истинность высказыва-
//ния: «Хотя бы одно из чисел A, B, C положительное».

#include <iostream>
using namespace std;

int main()

{
	setlocale(LC_ALL, "Russian");
	bool answer;
   cout << "Введите число А"<<endl;
   double a, b, c;
   cin >> a;
    cout << "Введите число В"<<endl;
	cin >> b;
	cout << "Введите число С"<<endl;
	cin >> c;
	answer = a > 0 && b > 0 && c>0;
	cout <<"Истинность высказывания: «Хотя бы одно из чисел A, B, C положительное» -" << boolalpha << answer;
	return 0;
}


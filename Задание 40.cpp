﻿// Задание 40.cpp :Boolean40. Даны координаты двух различных полей шахматной доски x1, y1,x2, y2(целые числа, лежащие в диапазоне 1–8).
//Проверить истинность вы сказывания: «Конь за один ход может перейти с одного поля на другое».

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите координаты двух различных полей шахматной доски x1, " << endl;
	cout << "(целые числа, лежащие в диапазоне 1–8) " << endl;
	short int x1, y1, x2, y2 ,a,b;
	cin >> x1;
	cout << "Введите координаты двух различных полей шахматной доски  y1" << endl;
	cout << "(целые числа, лежащие в диапазоне 1–8) " << endl;
	cin >> y1;
	cout << "Введите координаты двух различных полей шахматной доски x2" << endl;
	cout << "(целые числа, лежащие в диапазоне 1–8) " << endl;
	cin >> x2;
	cout << "Введите координаты двух различных полей шахматной доски y2" << endl;
	cout << "(целые числа, лежащие в диапазоне 1–8) " << endl;
	cin >> y2;
	bool answer;
	a = x1 - x2;
	b = y1 - y2;
	answer = a == 1 && b == 2 || a == -1 && b == 2 || a == 1 && b == -2 || a == -1 && b == -2 || a == 2 && b == 1 || a == 2 && b == -1 || a == -2 && b == 1 || a == -2 && b == -1;
	cout <<" Истинность вы сказывания: Конь за один ход может перейти с одного поля на другое -" << boolalpha << answer;
	return 0; 
}


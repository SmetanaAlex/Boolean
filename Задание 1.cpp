// Задание 1.cpp : Boolean1°. Дано целое число A. Проверить истинность высказывания: «Число
//A является положительным».

#include <iostream>


using namespace std;

int main()

{
	setlocale(LC_ALL, "Russian");
	double A ;
	bool answer;
	cout << "Введите число A: ";
	cin >> A;
	answer = A  > 0 ;
	cout << " чисело  A  является положительным  : " << boolalpha << answer << endl;

	
	return 0;
}
//Задание 1.cpp :Boolean10°. Даны два целых числа: A, B. Проверить истинность высказывания:
//«Ровно одно из чисел A и B нечетное».
#include <iostream>


using namespace std;

int main()

{
	setlocale(LC_ALL, "Russian");
	int A, B;
	bool answer;
	cout << "Введите число A: ";
	cin >> A;
	cout << "Введите число B: ";
	cin >> B;
	answer = A % 2 == 1 && B % 2 == 0 || A % 2 == 0 && B % 2 == 1;
	answer = (A % 2 + B % 2) == 1;
	cout << "Ровно одно из чисел A и B нечетное: " << boolalpha << answer << endl;


	return 0;
}
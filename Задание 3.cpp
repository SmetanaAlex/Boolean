// Задание 3.cpp : Boolean3. Дано целое число A. Проверить истинность высказывания: «Число A
//является четным».
#include <iostream>

using namespace std;

int main()

{
	setlocale(LC_ALL, "Russian");
    cout << "Введите число А-";
	int a;
	bool  answer;
	cin >> a;
	int b = a % 2;
	answer=  b == 0 ;
	cout <<"Число A является четным-" <<boolalpha << answer;
	return 0;

}


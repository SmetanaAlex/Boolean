// Задание 30.cpp :Boolean30. Даны целые числа a, b, c, являющиеся сторонами некоторого тре-
//угольника.Проверить истинность высказывания : «Треугольник со сторонами a, b, c является равносторонним».

#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
   cout << "Введите сторону A"<<endl ;
   int a, b, c;\
   cin >> a;
   cout << "Введите сторону B" << endl;
   cin >> b;
   cout << "Введите сторону C" << endl;
   cin >> c;
   bool answer;
   answer = a == b && b == c;
   cout <<"Истинность высказывания :Треугольник со сторонами a, b, c является равносторонним-"<< boolalpha << answer;
   return 0;

}


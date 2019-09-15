// Boolean23. Дано четырехзначное число. Проверить истинность высказывания:
//«Данное число читается одинаково слева направо и справа налево».
#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
    cout << "Введите четырехзначное число"<<endl;
	bool answer;
	int a, b, c, d, f,k;
	cin >> a;
	b = a / 1000;
	c = a / 100 % 10 * 10;
	d = a / 10 % 10 * 100;
	f = a % 10 * 1000;
	k = b + c + d + f;
	answer=  a == k;
	cout <<"Истинность высказывания: Данное число читается одинаково слева направо и справа налево -" << boolalpha << answer;
	return 0;

}


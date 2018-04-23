#include<iostream>
#include"circle.h"
#include"Date.h"
using namespace std;
int main() {

	setlocale(LC_ALL, "Rus");
	int n;
	std::cout << "введите номер задания: ";
	std::cin >> n;
	switch (n) {
	case 1: {
		int a = 5, b = 10;
		std::cout << a + b << std::endl;
		circle c1(10), c2(5);
			std::cout <<"Сумма:"<< c1 + c2 /*c1.operator(c2)*/ << std::endl;
			cout << "Разность:" << c1 - c2 << endl;
			cout << "произведение:" << c1 *c2 << endl;
			cout << "Результат деления:" << c1/c2 << endl;

			c2 = c1 + 7;
			c2 = c1.operator+(7.0);
			/*cout <<"радиус после увеличения:"<< (c1 + 7.0).getRadius << endl;*/


			cout << (c1 == c2) << endl;

			cout << (c1 == 7) << endl;

			cout << (c1 > c2) << endl;
	}break;

	case 2: {
		Date g(21, 03, 2017);
	}break;
	}

	system("pause");
	return 0;
}
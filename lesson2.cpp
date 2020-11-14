//Стандартный шаблон программы под Visual Studio 2017
#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <cmath>
#define PI 3.14159265
using namespace std;

// Корни
int Kor() {
	double a, b, c, D, x, X1, X2;

	cout << "Введите значение А: ";
	cin >> a;

	cout << "Введите значение B: ";
	cin >> b;

	cout << "Введите значение  C: ";
	cin >> c;



	// D = b2 - 4ac

	D = b * b - 4 * a*c;

	double X5;
	cout << "======================" << endl;

	cout << "Дискриминант: " << D << endl;

	cout << "======================" << endl;


	if (D > 0)
	{
		X1 = (-b + sqrt(D)) / (2 * a);
		cout << "Корень №1:   " << X1 << endl;

		X2 = (-b - sqrt(D)) / (2 * a);
		cout << "Корень №2:  " << X2 << endl;
	}
	else if (D == 0)
	{
		X1 = (-b) / (2 * a);
		cout << "Корень:  " << X1 << endl;
	}
	else
	{
		cout << "Дискриминант < 0. Корней нет." << endl;
	}



	return 0;
}


// Проверка числа Фибоначи
int CheckFibonachi(int V) {
	switch (V)
	{
	case 1:
	case 2:
	case 3:
	case 5:
	case 8: cout << "Ф: " << V << endl; break;
	default: cout << "Н: " << V << endl; break;
	}
	return V;
}

// Рандомный вывод числа Фибоначи
int Fibonachi() {
	int S, value;

	for (value = 0; value < 100; value++) {
		int R = rand() % 10 + 1;
		CheckFibonachi(R);
	}

	return 0;

}

int Enter() {
	int S;
	cout << "	Введите число от 1 до 10:	";
	cin >> S;
	return S;
}

int main()

{
	//Изменение кодировки консоли
	setlocale(LC_ALL, "Russian");


	Fibonachi();

	system("pause>nul");
	return 0;
}

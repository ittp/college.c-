// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <cmath>
#define PI 3.14159265
using namespace std;


/*
int CountNumbers()
{


	cout << amount;
	return amount;

}
*/


int main() {

	int first, second, total;
	cout << "V1: " << endl;
	cin >> first;

	cout << "V2: " << endl;
	cin >> second;


	int key = first;
	int amount = 0;
	for (key; key <= second; key++) {
		amount += key;
		cout << "=== " << key << ": " << amount << " ===" <<endl;

		//cout << "amount: " << amount << endl;

	}

	cout << "====== Total ======" << endl;
	cout <<  ": " << amount << " ===" << endl;
	
	//getAmount(first, second);

	system("pause>nul");
	return 0;
}

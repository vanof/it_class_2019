#include "stdafx.h"
#include <iostream>

using namespace std;

int i = 1; // инициализация глобальной переменной для подсчёта кол-ва рекурсивных вызовов
unsigned long long int result;

/*
0!=1
1!=1
2!=2
3!=6
4!=24
5!=120
6!=720
7!=5 040
8!=40 320
9!=362 880
10!=3 628 800
11!=39 916 800
12!=479 001 600
13!=6 227 020 800
14!=87 178 291 200
15!=1 307 674 368 000
16!=20 922 789 888 000
17!=355 687 428 096 000
18!=6 402 373 705 728 000
19!=121 645 100 408 832 000
20!=2 432 902 008 176 640 000
21!=51 090 942 171 709 440 000
22!=1 124 000 727 777 607 680 000
*/

unsigned long long int factorial(unsigned long long int f) // рекурсивная функция для нахождения n!
{
	if (f == 1 || f == 0) // базовое или частное решение
	{
		result = 1;
		return result; // все мы знаем, что 1!=1 и 0!=1
	}
	//cout << "Step\t" << i << endl;
	i++;
	//cout << "Result= " << result << endl << endl;
	result = f*factorial(f - 1); // функция вызывает саму себя
	return result;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int n; // локальная переменная для передачи введенного числа с клавиатуры
	cout << "Enter n!: ";
	cin >> n;
	for (int k = 1; k <= n; k++)
	{
		cout << k << "!" << "=" << factorial(k) << endl; // вызов рекурсивной функции
	}

	system("pause");
	return 0;
}


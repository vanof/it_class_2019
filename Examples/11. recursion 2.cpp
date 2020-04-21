#include "stdafx.h"
#include <iostream>

using namespace std;

//Рекурсия - разбиение задачи на подзадачи и решение подзадач с помощью "простого" алгоритма
// Для решения подзадач используются функции

void func(int num)
{
	if (num > 0) 
		func(num - 1);
	cout << num << " ";
}

//func(3) - func(2) - func(1) - func(0)
// математика факториалов, задача ханойских башен и числа фибоначчи 

int _tmain(int argc, _TCHAR* argv[])
{
	func(3);

	system("pause");
	return 0;
}


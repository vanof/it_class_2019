#include "stdafx.h"
#include <iostream>

using namespace std;

/*
Рекурсия - разбиение задачи на подзадачи и решение подзадач с помощью "легкого" алгоритма.
Для решения подзадач используются функции. Использование рекурсии заключается в вызове функции из самой себя.
Пример задач, решаемых рекурсией: факториалы, задача ханойских башен и числа фибоначчи. 
*/

void func(int num)
{
	if (num > 0) 
		func(num - 1);
	cout << num << " ";
}



int _tmain(int argc, _TCHAR* argv[])
{
	//func(3) - func(2) - func(1) - func(0)
	func(3);

	system("pause");
	return 0;
}


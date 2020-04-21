//пример рекурсивного вызова с двумя функциями из диагностической работы

#include "stdafx.h"
#include <iostream>

using namespace std;

void F(int n);
void G(int n);

void F(int n)
{
	cout << n;
	if (n > 1)
	{
		F(n - 3);
		G(n - 2);
	}
}

void G(int n)
{
	if (n > 1)
	{
		G(n - 1);
		F(n + 1);
	}
	cout << n;
}

int main(int argc, _TCHAR* argv[])
{
	F(4);
	
	system("pause");
	return 0;
}


#include "stdafx.h"
#include <iostream>

using namespace std;

void matryoshka(int n);

int _tmain(int argc, _TCHAR* argv[])
{
	matryoshka(7);

	system("pause");
	return 0;
}

void matryoshka(int n)
{
	if (n == 1)
		cout << " Last matryoshka! " << n << "\n";
	else
	{
		cout << " Top side of matryoshka " << n << "\n";
		matryoshka(n - 1);
		cout << " Bottom side of matryoshka " << n << "\n";
	}
}



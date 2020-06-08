// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int s = 0;
	int n = 0;
	cin >> n;
	for (int i = 0; i <= n; i++)
	{
		if (i % 2 == 0)
			s += (3 * i - i)*(3 * i - i);
		else
			s += (i*(i - 2) - i)*(i*(i - 2) - i);
	}
	cout << s << endl;
	system("pause");
	return 0;
}


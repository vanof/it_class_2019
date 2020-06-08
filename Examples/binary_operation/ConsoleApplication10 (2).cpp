// ConsoleApplication10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int f(int n)
{
	int first = n % 10;
	while (n != 0)
	{
		int last = n % 10;
		n /= 10;
	}
	return first, last;
}

int _tmain(int argc, _TCHAR* argv[])
{
	f(12345);
	return 0;
}


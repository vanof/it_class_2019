// ConsoleApplication10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	unsigned char c = 5;
	unsigned char p = 4;
	unsigned char r = c & p;
	cout << (int)r<< endl;
	system("pause");
	return 0;
}


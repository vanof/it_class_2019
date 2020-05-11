#include "stdafx.h"
#include <iostream>

using namespace std;

void CallC()
{
	cout << "C called" << endl;
}

void CallB()
{
	cout << "B called" << endl;
	CallC();
}

void CallA()
{
	CallB();
	CallC();
}

int main()
{
	CallA();
	system("pause");
	return 0;
}
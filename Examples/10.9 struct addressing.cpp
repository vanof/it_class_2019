#include "stdafx.h"
#include <iostream>

using namespace std;

struct t_pair {
	int a;
	int b;
	//int c;
};

int _tmain(int argc, _TCHAR* argv[])
{
	t_pair arr[10];
	t_pair* adr = &arr[0];
	//адрес массива получить нельзя!
	t_pair* adr1 = &arr[1];
	
	system("pause");
	return 0;
}


#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	struct s{
		int a;
		int b;
	};
	
	struct human{
		string name;
		unsigned int age;
		bool gender;
		char t[10];
	};

	s x, y;
	x.a = 3;
	x.b = 5;
	y = x;

	system("pause");
	return 0;
}


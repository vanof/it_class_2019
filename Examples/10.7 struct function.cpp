#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

struct t_pair{
		int a;
		int b;
		string c;
	};

t_pair function(int x){
	t_pair result;

	result.a = x*x;
	result.b = x*x*x;
	result.c = "hahaha";
	return result;
}

void modify_pair(t_pair* p){
	(*p).a += 5;			//*p.a
	//p->a += 5;
	p->b += 10;				// операция косвенного обращения
	p->c = "change";
}

int _tmain(int argc, _TCHAR* argv[])
{
	
	t_pair x = function(5);
	t_pair y;
	y = x;
	modify_pair(&y);

	cout << x.a << ' ' << x.b << ' ' << x.c << endl;
	cout << y.a << ' ' << y.b << ' ' << y.c << endl;

	system("pause");
	return 0;
}


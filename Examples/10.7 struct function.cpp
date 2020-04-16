#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

//определение структуры данных типа t_pair
struct t_pair{
		int a;
		int b;
		string c;
	};

//функция создает "контейнер" типа t_pair для сохранения результата
t_pair function(int x){
	t_pair result;

	result.a = x*x;
	result.b = x*x*x;
	result.c = "hahaha";
	return result;
}

//функция обращается по адресу и изменяет значения
void modify_pair(t_pair* p){
	(*p).a += 5;			//запись *p.a компилятор не пропустит, скобки нужны обязательно.
 	//p->a += 5;
	p->b += 10;				// операция косвенного обращения, она аналогична записи (*p).b 
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


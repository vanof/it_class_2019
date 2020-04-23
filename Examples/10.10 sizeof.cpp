#include "stdafx.h"
#include <iostream>
#include <cstdint>

using namespace std;

struct t_pair {
	int64_t a;		//8 байта
	int64_t b;		//4 байта
	long long int c;		//4 байта
};

int main()
{
	int32_t x1;			//int
	int64_t x2;			// long long int
	int y;
	//long int k;
	long long int z; 
	float a;
	double b;
	t_pair p;

	cout << "Size of type:" << '\n';
	//cout << sizeof(int) << '\n';
	//cout << sizeof(int*) << '\n';
	cout << sizeof(x1) << '\n';
	cout << sizeof(x2) << '\n';
	//cout << sizeof(k) << '\n';
	cout << sizeof(y) << '\n';
	cout << sizeof(z) << '\n';
	cout << sizeof(a) << '\n';
	cout << sizeof(b) << '\n';
	cout << sizeof(p) << '\n';

	cout << "Pointers:" << '\n';
	cout << sizeof(&x1) << '\n';
	cout << sizeof(&y) << '\n';
	cout << sizeof(&z) << '\n';
	cout << sizeof(&a) << '\n';
	cout << sizeof(&b) << '\n';
	cout << sizeof(&p) << '\n';

	cout << &p << '\n';

	system("pause");
	return 0;
}
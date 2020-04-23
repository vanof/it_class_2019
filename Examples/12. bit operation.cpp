#include "stdafx.h"
#include <iostream>
#include <bitset>
#include <climits>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{

	int n = 1024;
	//выражение из задания 15
	int num = (~28 & (154 >> 2)) | (94 << 2);

	//вывод числа в двоичном виде
	//cout << bitset<sizeof(n) * 8>(n) << endl;


	int a, b;
	a = 017;
	b = 036;
	/*
	//cout << bitset<sizeof(int) * 8>(a) << endl;
	cout << bitset<sizeof(n) * 8>(b) << endl;
	int k = b << 5;
	cout << bitset<sizeof(n) * 8>(b << 5) << endl;
	cout << k << endl;
	*/
	/*
	cout << bitset<sizeof(n) * 8>(a&b) << endl;
	cout << bitset<sizeof(n) * 8>(a|b) << endl;
	cout << bitset<sizeof(n) * 8>(a^b) << endl;
	cout << bitset<sizeof(n) * 8>(~a) << endl;
	cout << bitset<sizeof(n) * 8>(~b) << endl;
	*/
	int res = (~28 & (154 >> 2)) | (94 << 2);
	int c = 154;
	int d = 94;
	int r = 28;
	cout << bitset<sizeof(n) * 8>(c) << endl;
	cout << bitset<sizeof(n) * 8>(c >> 2) << endl;
	cout << bitset<sizeof(n) * 8>(d) << endl;
	cout << bitset<sizeof(n) * 8>(d << 2) << endl;
	cout << bitset<sizeof(n) * 8>((c >> 2) | (d << 2)) << endl;
	cout << bitset<sizeof(n) * 8>(r) << endl;
	cout << bitset<sizeof(n) * 8>(~r) << endl;
	cout << bitset<sizeof(n) * 8>((~r) & ((c >> 3) | (d << 5))) << endl;
	cout << res << endl;
	/*
	printf("0%o & 0%o = 0%o\n", a, b, a & b);
	printf("0%o | 0%o = 0%o\n", a, b, a | b);
	printf("0%o ^ 0%o = 0%o\n", a, b, a ^ b);
	printf("0%o << 2 = 0%o\n", a, a << 2);
	printf("0%o >> 2 = 0%o\n", a, a >> 2);
	printf("~0%o = 0%o\n", a, ~a);
	*/


	system("pause");
	return 0;
}


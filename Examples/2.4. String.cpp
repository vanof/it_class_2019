#include "stdafx.h"
#include <iostream>
//#include <string>

using namespace std;

int main()
{
	string s = "hello";
	char p[] = "xaxa";
	strlen(p);
	cout << strlen(p) << endl;
	char in_string[500]; // строковый массив для ввода 
	gets_s(in_string);
	strcat_s(in_string, p);
	cout << in_string << endl;
	system("pause");
	return 0;
}
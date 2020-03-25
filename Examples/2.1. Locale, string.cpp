#include "stdafx.h"
#include <iostream>
//#include <Windows.h>
//#include <string>

//#include <clocale>

using namespace std;

int main(int argc, char* argv[])
{
	//SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
	//SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода

	//setlocale(LC_CTYPE, "rus");
	cout << "привет 10‚" << endl;
	string s;
	cin >> s;
	cout << s << endl;

	system("pause");
	return 0;
}
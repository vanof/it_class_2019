#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	string str;
	cin >> str;
	for (int i = 0; i < str.length(); i++){
		if (str[i] == 'A') 
			str[i] = 'Z';
		else str[i]++;
	}
	cout << str<<endl;
	system("pause");
	return 0;
}


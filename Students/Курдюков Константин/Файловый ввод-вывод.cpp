﻿
#include <fstream>
#include <iostream>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	ifstream file_input("C:\\Users\\sch1561-it-8\\Desktop\\Class\\input.txt");
	ofstream file_output("C:\\Users\\sch1561-it-8\\Desktop\\Class\\output.txt");
	string s = "";
	int k = 1;
	int m = 1;
	while (getline(file_input, s))
	{
		cout << s << " " << s.length() << endl;
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == ' ')
			{
				//s[i] = '0';
				//if(s[i] == '0' and s[i-1]=='0')
				{
					s.erase(i, 1);
					i--;
				}
			}
		}
		file_output << s << endl;
	}
	file_input.close();
	file_output.close();
}


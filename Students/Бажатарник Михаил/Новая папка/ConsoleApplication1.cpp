#include <fstream>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;



int main()
{
	setlocale(LC_ALL, "rus");
	ifstream file_input("C:\\input\\input.txt");
	string s;
	int m = 1, k = 1;
	while(file_input)
	{
		file_input >> s;
	}
	cout << s;
	cout << s.length()<<endl;
	for (int i = 1; i < s.length(); i++)
	{
			if (s[i] != s[i - 1])
			{
				k += 1;
				m = max(k,m);
			}
			else
			{
				k = 1;
			}
	}
	cout << m;
	file_input.close();
}

#include <fstream>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	ifstream file_input("C:\\Users\\Sch1561-it-9\\Documents\\GitHub\\it_class_2019\\Tasks\\24.txt");
	//ofstream file_output("C:\\Users\\Sch1561-it-9\\Documents\\GitHub\\it_class_2019\\Tasks\\24.txt");
	string s;
	int m = 1;
	int k = 1;

	while (file_input)
	{
		file_input >> s;
	}
	cout << s.length() << endl;
	for (int i = 1; i < s.length(); i++)
	{
		if (s[i] != s[i - 1])
		{
			k += 1;
			m = max(k, m);
		}
		else
		{
			k = 1
		}
	}
	cout << m;
	 //file_input.close();
	 /*while(getline(file_input,s))
	 * {
	       cout << s << endl;
	    }
	 
	 
	 */

	}
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	ifstream file_input("C:\\Users\\sch1561-it-21\\Documents\\GitHub\\it_class_2019\\Tasks\\24.txt");
	//ofstream file_output("C:\\Users\\Sch1561-it-10\\source\\repos\\ConsoleApplication1\\ConsoleApplication1\\output.txt");
	string s;
	int k = 1;
	int m = 1;
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
			k = 1;

		}
		cout << m;
	}
	/*while (getline(file_input, s))
	{

		for (int i = 0; i < s.length(); i++)
		{

			if (s[i] == ' ')
			{
				//s[i] = '0';
				s.erase(i, 1);
				i--;
			}

		}
		cout << s << " " << s.length() << endl;
	} */
	file_input.close();
	//file_output.close();

}

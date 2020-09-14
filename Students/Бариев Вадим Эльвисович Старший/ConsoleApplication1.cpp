#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main()
{
	setlocale (LC_ALL, "rus");
	ifstream file_input("C:\\Users\\Sch1561-it-10\\source\\repos\\ConsoleApplication1\\ConsoleApplication1\\input.txt");
	ofstream file_output("C:\\Users\\Sch1561-it-10\\source\\repos\\ConsoleApplication1\\ConsoleApplication1\\output.txt");
		string s = "";
	int k = 1;
	int m = 1;
	while (getline(file_input, s))
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
	}
	file_output << s << endl;
	file_input.close();
	file_output.close();

}

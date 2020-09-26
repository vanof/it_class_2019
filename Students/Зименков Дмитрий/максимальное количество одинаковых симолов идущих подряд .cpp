#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int a = 0, b = 0;
	string s;
	ifstream fin("A:\\проекты\\Проект 1\\Проект 1\\4_1.txt");
	//ofstream fout("A:\\проекты\\Проект 1\\Проект 1\\output.txt");
	while (fin)
	{
		fin >> s;
	}
	/*for (int i = 1; i < s.length(); i++)
	{
		if (s[i] == s[i-1])
		{
			a = a + 1;
		}
		else
		{
			b = a;
		}
		if (b < a)
		{
			b = a;
		}
	}*/
	// выводит общее количество пар
	for (int i = 1; i < s.length(); i++)
	{
		if (s[i] == s[i - 1])
		{
			a += 1;
			b = max(a, b);
		}
		else
		{
			a = 1;
		}

	}
	cout << "МАКСИМАЛЬНОЕ КОЛИЧЕСТВО ОДИНАКОВЫХ СИМВОЛОВ ИДУЩИХ ПОДРЯД В ЭТОМ ЧЕРТОВО МАССИВЕ -------> " << b;
	fin.close();
	//fout.close();

}
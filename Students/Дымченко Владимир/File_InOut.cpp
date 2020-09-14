// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include<string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    ifstream file_input("C:\\NovayaPapka\\input.txt");
    ofstream file_output("C:\\NovayaPapka\\output.txt");
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
        cout << s << "" << s.length() << endl;
        file_output << s << endl;
    }
    file_output << s;
    file_input.close();
    file_output.close();
}



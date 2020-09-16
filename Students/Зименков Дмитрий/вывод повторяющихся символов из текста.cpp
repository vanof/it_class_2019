#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    ifstream file_input("C:\\Users\\Sch1561-it-10\\Desktop\\Зименков Дмитрий\\ConsoleApplication3\\ConsoleApplication3\\24.txt");
    //ofstream file_output("C:\\Users\\Sch1561-it-10\\Desktop\\Зименков Дмитрий\\ConsoleApplication3\\ConsoleApplication3\\output.txt");
    string s;
    int k = 0, a = 0, b = 0;
    int m = 0;
    int n = 0;
    int kolvo = 0;
    int kolvo2 = 0;
    //если файл состоит из 1 строки, то:
    while (file_input)
    {
        file_input >> s;
    }
    cout << "всего =" << " " << s.length() << endl;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'X')
        {
            k += 1;
        }
        if (s[i] == 'Y')
        {
            m += 1;
        }
        if (s[i] == 'Z')
        {
            n += 1;
        }
    }
    cout << "x = "<< k << endl << "y = "<<  m << endl << "z = "<< n << endl;
    for (int i = 0; i < s.length(); i++)
    {
        while (s[i] == s[i++])
        {
            kolvo += 1;
        }
        if (kolvo2 < kolvo)
        {
            kolvo2 = kolvo;
            kolvo = 0;
        }
        else
        {
            kolvo = 0;
        }
    }
    cout << "максимальное количество повторений = "<<  kolvo2 << endl;
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] != s[i-1])
        {
            a += 1;
            b = max(a, b);
        }
        else
        {
            a = 1;
        }

    }
    cout << "пары = " << b << endl;
    //если файл состоит из 2 или более строчек, то:
    /*while (getline(file_input, s))
    {
        cout << s << " " << s.length() << endl;
        file_output << s;
    }
    */
    file_input.close();
    //file_output.close();
}


#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    ifstream file_input("C:\\Users\\Sch1561-it-4\\Documents\\GitHub\\it_class_2019\\Tasks\\4_1.txt");
    string s;
    int povt = 0;
    while (file_input)
    {
        file_input >> s;
    }
    for (int i = 0; i < s.length(); i++)
    {
        while (s[i] == s[i++])
        {
            povt += 1;
        }
    }
    cout << povt << endl;
    file_input.close();
}


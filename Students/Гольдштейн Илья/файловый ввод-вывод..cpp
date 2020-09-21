#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    ifstream file_input("C:\Users\Sch1561-it-10\Documents\GitHub\it_class_2019\Tasks\24.txt");
    ofstream file_output("C:\Users\Sch1561-it-10\Documents\GitHub\it_class_2019\Tasks\24.txt");
    string s;
    int k = 0;
    int m = 1;
    while (getline(file_input, s))
    {
        cout << s <<  " " << s.length() << endl;
        for(int i = 0; i < s.length(); i++)
        {
            if (s[i] == ' ')
            {
                s[i] = '0';
            }
        }
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '00')
            {
                s[i] == '1';
            }
        }
        file_output << s;
    }
    file_input.close();
    file_output.close();
}

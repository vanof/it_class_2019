#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    ifstream file_input("C:\\Users\\Sch1561-it-9\\Documents\\tagilov\\input.txt");
    ofstream file_output("C:\\Users\\Sch1561-it-9\\Documents\\tagilov\\output.txt");
    string s;
    int k = 1;
    int m = 1;
    while (getline(file_input, s))
    {
        
        
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ' ')
            {
                if (s[i] == ' ' and s[i + 1] == ' ')
                {
                    s.erase(i,1);
                    i--;
                }
            }
        }
        file_output << s << endl;
        cout << s.length() << ":" << s << endl;
    }
    file_input.close();
    file_output.close();


}

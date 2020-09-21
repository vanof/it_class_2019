#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    ifstream fin("C:\\Users\\Sch1561-it-10\\Documents\\GitHub\\it_class_2019\\Tasks\\24.txt");
   
    string s;
    int k = 1;
    int m = 1;
    while (fin)
    {
        fin >> s;
    }
    cout << s.length()<<endl;
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
    }
    cout << m;
  
    fin.close();
}






    

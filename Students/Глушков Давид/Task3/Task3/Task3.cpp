#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(0, ".1251");
    string s;
    string x = "";
    string y = "";
    ifstream file_input("C:\\Users\\Sch1561-it-4\\Documents\\GitHub\\it_class_2019\\Tasks\\2_1.txt");
    ofstream file_output("C:\\Users\\Sch1561-it-4\\Documents\\GitHub\\it_class_2019\\Students\\Глушков Давид\\Task2\\output.txt");
    int i = 0;
    while (getline(file_input, s)) {
        if (i == 0) {
            x += s;
            cout << s << endl;
        }
        if (i == 1) {
            y += s;
            cout << s << endl;
        }
        i++;
    }
    file_output << y << endl << x;
    file_output.close();
    cout << endl << y << endl << x;
}
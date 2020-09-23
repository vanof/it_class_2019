#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <windows.h>
#include <clocale>


using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(0, ".1251");
    string s;
    string x = "";
    ifstream file_input("C:\\Users\\Sch1561-it-4\\Documents\\GitHub\\it_class_2019\\Tasks\\2_1.txt");
    ofstream file_output("C:\\Users\\Sch1561-it-4\\Documents\\GitHub\\it_class_2019\\Students\\Глушков Давид\\Task2\\output.txt");
    while (getline(file_input, s)) {
        cout << s << endl; 
        break;
    }   
    file_output << s << endl;
    file_output.close();
    cout << x;
}
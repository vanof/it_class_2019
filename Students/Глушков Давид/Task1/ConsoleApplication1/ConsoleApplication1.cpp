#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    string s;
    string x = "";
    string y = "";
    bool ifnon = true;
    ifstream file_input("C:\\Users\\Sch1561-it-4\\Documents\\GitHub\\it_class_2019\\Tasks\\1_1.txt");
    int i = 0;
    while (getline(file_input, s)) {
        if (i == 0) {
            x += s;
        }
        if (i == 1) {
            y += s;
        }
        i++;
    }
        cout << pow(stoi(x), stoi(y));
    }
#include <iostream>
//#include <iomanip>
#include <bitset>

using namespace std;

int main()
{
    int x = 0b000010;
    int y = 0b000011;
    int z = 0xA;
    double pi = ;
    y = x+y;
    cout << bitset<32>(pi) << endl;
    //cout << z << endl;

    //флаги преобразований потоков
    cout << hex << z << endl;//вывод в шестнадцатеричной системе счисления
    cout << dec << z << endl;//вывод в десятичной системе счисления
    cout << oct << z << endl;//вывод в восьмеричной системе счисления
    return 0;
}

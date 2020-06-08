#include <iostream>
#include <iomanip>
#include <bitset>

using namespace std;

int main()

{        /*
       int name = -3;
            char v = 'a';
    cout << sizeof(int) << endl;
    cout << sizeof(unsigned int) << endl;
    cout << sizeof(short) << endl;
    cout << sizeof(long) << endl;
    cout << sizeof(long long) << endl;
    cout << sizeof(char) << endl;
    cout << sizeof(wchar_t) << endl;
    cout << sizeof(float) << endl;
    cout << sizeof(double) << endl;
 */


    int x =  0b01100011;
    int y = -0b01100011;
    //int z = 0b0;
     //z = ~y;
    //unsigned int y = -0b00010000;
    cout << x << endl;
    cout << y << endl;
    cout << "Unsigned:" << endl << bitset<8>(x) << endl;   //прямой
    cout << "Complement:" << endl << bitset<8>(~x) << endl;   // обратный
    cout << "Twos-complement:" << endl << bitset<8>(y) << endl;  //дополнительный код


    return 0;
}

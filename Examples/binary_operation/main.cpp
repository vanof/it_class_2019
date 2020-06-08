#include <iostream>

using namespace std;

string to_binary_string(unsigned int n)
{
    string result;
    do
    {
        result = ('0' + (n % 2)) + result;
        n = n / 2;
    } while (n > 0);
    return result;
}



int main()
{
    int i = 0;
    cin >> i;
    cout << to_binary_string(i);;
    return 0;
}




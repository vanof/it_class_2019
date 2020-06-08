#include <iostream>
#include <math.h>

using namespace std;

long _10to2(int x) {

	int i;
	int mod;
	long double_ = 0;

	for (i = 0; x>0; i++) {

		mod =  x % 2;
		x = (x - mod) / 2;
		double_ += mod * pow((double)10,i);
	}
	return double_;

}

int main()
{
     double x = _10to2(10);
     cout << x << endl;
    return 0;
}



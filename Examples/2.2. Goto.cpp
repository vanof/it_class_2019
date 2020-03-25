#include "stdafx.h"
#include <cmath> 
#include <iostream>

using namespace std;

int main()
{
    double z;
	
	tryAgain: // это лейбл
	
		cout << "Enter a non-negative number: "; 
		cin >> z;
		
		if (z < 0.0)
			goto tryAgain; // а это оператор goto 
	 
		cout << "The sqrt of " << z << " is " << sqrt(z) << endl;
		
	
	system("pause");
    return 0;
}
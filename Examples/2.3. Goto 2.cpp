#include "stdafx.h"
 #include <iostream>

using namespace std;

int main()
{
    goto skip; // прыжок вперёд недопустим
    int z = 7;
	
skip: // лейбл
    z += 4; // какое значение будет в этой переменной?
		
	system("pause");
    return 0;
}
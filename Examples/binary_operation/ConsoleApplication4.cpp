#include "stdafx.h"
#include <iostream>
#include <math.h>

using namespace std;

long double fact(int N)
{
	if (N < 0)
		return 0;
	if (N == 0)
		return 1;
	else
		return N * fact(N - 1);
}

int main(){
	int N, i = 1, k = 0, S = 1;
	double x;
	cin >> N >> x;
	for (; k <= i; k++){
		S *= pow((-1), (i + 1))*(pow(x, (i * 2)) / fact(i));
	}
	cout << S;
	system("pause");
}

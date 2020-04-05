#include "stdafx.h"
#include <iostream>
#include <random>
#include <time.h>

using namespace std;

int randInt(int a, int b)
{
	return a + rand() % (b - a + 1);
}

void printArray(int* arr, int N)
{
	for (int i = 0; i < N; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int comp(const int *i, const int *j)
{
	return *i - *j;
}

int main()
{
	srand(time(0));

	const int size = 250000;
	int A[size];

	for (int i = 0; i < size; i++)
		A[i] = randInt(0, 100);

	if (size < 20000)
		printArray(A, size);

	clock_t tStart = clock();
	
	//вызов стандартной функции быстрой сортировки qsort
	//(имя массива, его размер, размер ячейки, функция сравнения comp, приведенная к типу void
	qsort(A, size, sizeof *A, (int(*) (const void *, const void *)) comp);

	cout << "Time: " << (double)(clock() - tStart) / CLOCKS_PER_SEC << endl;

	if (size < 20000)
		printArray(A, size);

	system("pause");
	return 0;
}


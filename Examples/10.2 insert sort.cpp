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

void insert_sort(int *arr, int N){
	for (int i = 1; i<N; i++)
	{
		int k = i;
		while(k > 0 and arr[k-1] > arr[k])
		{
			swap(arr[k-1], arr[k]);
			k-=1;
		}
	}
}

int main()
{
	srand(time(0));

	const int size = 10000;
	int A[size];

	for (int i = 0; i < size; i++)
		A[i] = randInt(0, 100);

	if (size < 20000)
		printArray(A, size);

	clock_t tStart = clock();

	insert_sort(A, size);

	cout << "Time: " << (double)(clock() - tStart) / CLOCKS_PER_SEC << endl;

	if (size < 20000)
		printArray(A, size);

	system("pause");
	return 0;
}


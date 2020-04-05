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

void bubble_sort(int* arr, int N) 
{
	for (int i = 0; i < N - 1; i++)
	{
		for (int j = N - 2; j >= i; j--)
		{
			if (arr[j + 1] < arr[j]) 
			{
				//swap(arr[j], arr[j+1]);	
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main()
{
	srand(time(0));

	const int size = 10;
	int A[size];

	/*
	for (int& x : A)		//запись цикла в диапазоне
	int x = randInt(0, 100);
	*/

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


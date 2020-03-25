#include "stdafx.h"
#include <iostream>
#include <random>
#include <time.h>

using namespace std;

void bubble_sort(int* arr, int N) {
	int buffer;
	bool flag = true;
	while (flag) {
		flag = false;
		for (int i = 1; i<N; i++){
			if (arr[i]<arr[i - 1]) {
				buffer = arr[i];
				arr[i] = arr[i - 1];
				arr[i - 1] = buffer;
				flag = true;
			}
		}
	}
}

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

/*
01234
n = 5
j = 3
i = 4

arr 4 < arr 3
arr 3 < arr 2
arr 2 < arr 1
arr 1 < arr 0
*/
void bubble(int* arr, int N) {
	for (int i = 0; i < N - 1; i++)
		for (int j = N - 2; j >= i; j--)
			if (arr[j + 1] < arr[j]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
}

int main()
{
	srand(time(0));

	const int size = 10000;
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

	//bubble_sort(A, size);
	bubble(A, size);

	cout << "Time: " << (double)(clock() - tStart) / CLOCKS_PER_SEC << endl;

	if (size < 20000)
		printArray(A, size);

	system("pause");
	return 0;
}


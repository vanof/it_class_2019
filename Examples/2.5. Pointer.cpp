#include "stdafx.h"
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	int v = 123; // инициализация переменной var числом 123
	int *ptr_v = &v; // указатель на переменную var (присвоили адрес переменной указателю)

	cout << "&v    = " << &v << endl;// адрес переменной var содержащийся в памяти, извлечённый операцией взятия адреса
	cout << "ptr_v  = " << ptr_v << endl;// адрес переменной var, является значением указателя ptrvar
	cout << "v     = " << v << endl; // значение в переменной var
	cout << "*ptr_v = " << *ptr_v << endl; // вывод значения содержащегося в переменной var через указатель, операцией разименования указателя

	system("pause");
	return 0;
}
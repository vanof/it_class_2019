#include "stdafx.h"
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	int v = 123; // ������������� ���������� var ������ 123
	int *ptr_v = &v; // ��������� �� ���������� var (��������� ����� ���������� ���������)

	cout << "&v    = " << &v << endl;// ����� ���������� var ������������ � ������, ����������� ��������� ������ ������
	cout << "ptr_v  = " << ptr_v << endl;// ����� ���������� var, �������� ��������� ��������� ptrvar
	cout << "v     = " << v << endl; // �������� � ���������� var
	cout << "*ptr_v = " << *ptr_v << endl; // ����� �������� ������������� � ���������� var ����� ���������, ��������� ������������� ���������

	system("pause");
	return 0;
}
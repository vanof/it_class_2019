#include "stdafx.h"
#include <iostream>

//библиотека <string> переопределяет поток вывода cout 
// для типа данных string
#include <string>

using namespace std;

/*
Создать структуру данных, содержащую информацию
о учениках группы со следующими полями: 
класс, имя, фамилия, пол, оценки (10 шт.)
Написать и протестировать функции:
- ввода данных;
- вывода данных;
- расчета средней оценки для каждого ученика;
- определения отличников из числа учеников (оценок "5" > 80%).
*/

struct student{
	string t_class;
	string second_name;   
	bool gender;
	int grade[5];
};

//функция вывода в консоль
void print(student* p)		//int* или string* - это адресный тип данных
{
	cout << p->t_class  << endl;
	cout << p->second_name << endl;
	if (p->gender == 1)
		cout << "Man" << endl;
	if (p->gender == 0)
		cout << "Woman" << endl;
	for (int i = 0; i < 5; i++)
		cout << p->grade[i] << ' ';
	cout << endl;
}

//функция ввода 
void input(student* p)
{
	cout << "Enter class:" << endl;
	cin >> p->t_class;
	cout << "Enter second name:" << endl;
	cin >> p->second_name;
	cout << "Enter gender (1 - woman or 0 - man):" << endl;
	//добавить проверку ввода, отличного от 0 или 1
	cin >> p->gender;
	int n = sizeof(p->grade)/sizeof(int);
	cout << "Enter " << n << " grade:" << endl;
	for (int i = 0; i < n; i++)
		cin >> p->grade[i];
	cout << "Input succefully completed!" << endl;
}

//функция расчета средней оценки
void average(student *p)
{

}

//функция определения отличников
void excellent_student(student *p)
{

}

int _tmain(int argc, _TCHAR* argv[])
{
	student first = { "10V", "Tagilov", 1, {5,3,4,2,5} };
	student second;

	input(&second);

	//student* adr = &first;
	print(&first);
	print(&second);  //в функцию идет передача адреса

	system("pause");
	return 0;
}


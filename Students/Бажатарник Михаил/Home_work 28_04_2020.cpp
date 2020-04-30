#include <iostream>
using namespace std;

struct student
{
	int t_class[10];
	int second_name[10];   
	int gender[10];
	int grade[100];
};

student use;

void input(int t)
{
  int b,c;
  
  cout << "Класс:" << endl;
  cin >> use.t_class[t]; //Ввод в класс
  
  cout << "Имя и фамилия:" << endl
  cin >> use.second_name[t]; //Ввод в имя и фамилию
  
  cout << "Пол:" << endl;
  cin >> use.gender[t]; //Ввод в пол
  
  cout << "Оценки:" << endl;
  if(t == 1) {b = 0;}
  if(t > 1) {b = t*10;}
  for(int i = 1; i <= 10; i++)
    {
    c = b+i;
    cin >> use.grade[c]; //Ввод в оценки
    }
  cout << endl;
}

void output(int e)
{
   int f,g,n,z;
  
  cout << "Класс:" <<"  "; //Вывод в класс
  cout << use.t_class[e] <<"  ";
  
  cout << "Имя и фамилия:" <<"  "; //Вывод в имя и фамилию
  cout << use.second_name[e] <<"  ";
  
  cout << "Пол:" <<"  "; //Вывод в пол
  cout << use.gender[e] <<"  ";
  
  cout << "Средняя оценка:" <<"  ";
  if(e == 1){f = 0;}
  if(e > 1){f = e*10;}
  for(int i = 1; i <= 10; i++)
    {
    g = f+i;
    n += use.grade[g]; //Рассчёт средней оценки и кол-ва пятёрок
    if (use.grade[g]==5) {z+=1;}
    }  
  n = n/10;
  cout << n <<"  ";
  cout << "Отличник? :" <<"  ";
  if (z=>8) { cout << "Да" << endl;}
  else { cout << "Нет" << endl;} 
}

int main()
{
    setlocale (LC_ALL, "rus");
    for(int i = 1; i <= 10; i++)
    {input(i);}
    for(int i = 1; i <= 10; i++)
    {input(i);}

    return 0;
}

#include <iostream>
#include <string>
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
  string a;
  int b,c,m;
  
  cout << "Класс:" << endl;
  cin >> a;   
  use.t_class[t] = a; //Ввод в класс
  
  cout << "Имя и фамилия:" << endl
  cin >> a;   
  use.second_name[t] = a; //Ввод в имя и фамилию
  
  cout << "Пол:" << endl;
  cin >> a;   
  use.gender[t] = a; //Ввод в пол
  
  cout << "Оценки:" << endl;
  if(t == 1) {b = 0;}
  if(t > 1) {b = t*10;}
  for(int i = 1; i <= 10; i++)
    {
    c = b+i;
    cin >> m;   
    use.grade[c] = m; //Ввод в оценки
    }
  cout << endl;
}

void output(int e)
{
   string d;
   int f,g,n,z;
  
  cout << "Класс:" <<"  ";
  d = use.t_class[t]; //Вывод в класс
  cout << d <<"  ";
  
  cout << "Имя и фамилия:" <<"  ";
  d = use.second_name[t]; //Вывод в имя и фамилию
  cout << d <<"  ";
  
  cout << "Пол:" <<"  ";
  d = use.gender[t]; //Вывод в пол
  cout << d <<"  ";
  
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
    for(int i = 1; i <= 10; i++)
    {input(i);}
    for(int i = 1; i <= 10; i++)
    {input(i);}

    return 0;
}

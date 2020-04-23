#include <iostream>
#include <iomanip>
using namespace std;

void mas(int h)
{
if(h==0){cout << "Класс:" << endl;}
if(h==1){cout << "Имя:" << endl;}
if(h==2){cout << "Фамилия:" << endl;}
if(h==3){cout << "Пол:" << endl;}
if(h==4){cout << "Оценки:" << endl;} 
}
 
int main()
{
    setlocale (LC_ALL, "rus");
    int a,d=0,e=0, m[10]; // Объявляем целочисленные переменные и один массив.
    cout<<"Количество учеников:"<<endl;
    cin>>a;
    // Динамическое создание a-мерного массива вещественных чисел на a*5 элементов
    float **ptrarray = new float* [a]; // a строк в массиве
    for (int count = 0; count < a; count++)
        ptrarray[count] = new float [6]; // и шесть столбцов
    // Заполнение массива
    for (int b = 0; b < a; b++)
    {
     for (int c = 0; c < 4; c++)
     {
     mas(c);
     cin>>ptrarray[b][c];
     }
     
     for(i = 0; i < 10; i++)
  {
    cin >> m[i]; // Вводим оценки
    d+=m[i]; // Суммирование оценок
    if(m[i]==5){e+=1} // Подсчёт пятёрок
  }
    ptrarray[b][5]=d/10; // Подсчёт средней оценки
    
    if(e==8){ptrarray[b][6]="Отличник"}
    else{ptrarray[b][6]=" "}
    }
    // Вывод массива (Класс;Имя;Фамилия;Пол;Средняя оценка;Отличник или нет)
    for (int count_row = 0; count_row < a; count_row++)
     {
        for (int count_column = 0; count_column < 6; count_column++)
            cout << setw(3) << ptrarray[count_row][count_column] << "   ";
        cout << endl;
     }
    // Удаление a-мерного динамического массива
    for (int count = 0; count < a; count++)
        delete []ptrarray[count];
    return 0;
}
  

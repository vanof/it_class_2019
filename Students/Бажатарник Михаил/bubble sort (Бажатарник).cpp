#include <iostream>
#include <cstdlib> // в заголовочном файле <cstdlib> содержится функция rand()
#include <ctime> // в заголовочном файле <ctime> содержится функция time()
using namespace std;
int main() 
{
  int C = 100000;
  int mas[C]; // объявили массив на C ячеек
  
  srand(time(NULL));
  
  int B = 1000; // границы генерации элементов (от B до A)
  int A = -B;
    
  for (int i = 0; i < C; i++) 
  {
  mas[i] = A + rand() % ((B + 1) - A); // генерируем элементы в массив
  }
    for (int i = 0; i < C; i++) 
  {
    bool flag = true;
    for (int j = 0; j < C - (i + 1); j++) 
    { 
       if (mas[j] > mas[j + 1]) 
       {
       flag = false;
       swap (mas[j], mas[j + 1]);// меняем местами значения элементов
       }
    }
    if (flag) 
    {
      break;
    }
  }
  for (int i = 0; i < C; i++) {
    cout << mas[i] << " "; // выводим элементы массива
  }
  return 0;
}

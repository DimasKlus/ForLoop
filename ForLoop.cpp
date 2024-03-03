#include <iostream>             
#include <stdlib.h>             
using namespace std;

int main()
{
    system("chcp 1251 > nul");

    int N;

    cout << "Введите число: ";
    cin >> N;
    if (N % 2 == 0)// проверяем чётное ли число, если да, то
        for (int a = 2; a <= N; a += 2)// выполняем и выводим последовательность чётных чисел от 0 до введённого числа
        cout << a << " "; 
    else           //в иных случаях
        for (int a = 1; a <= N; a += 2)//аналогично выводим последовательность нечётных чисел
        cout << a << " ";
    cout << endl;
    system("pause");
    return 0;
}
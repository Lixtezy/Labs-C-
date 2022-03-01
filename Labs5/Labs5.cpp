#include <iostream>
using namespace std;

//Упражнение 1

void ArrayProcessing(int, int[]);
void SortArray(int, int[]);

int main()
{
    setlocale(LC_ALL, "Russian");

    const int n = 10;
    int mas[n];

    cout << "Заполните массив 10ю элементами:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "mas[" << i << "] = ";
        cin >> mas[i];
    }
    int my_choose;
    cout << "Выполнить операцию:" << endl;
    cout << "1.Обработка массива." << endl;
    cout << "2.Сортировка массива." << endl;
    cin >> my_choose;
    switch (my_choose)
    {
    case 1: ArrayProcessing(n, mas); break;
    case 2: SortArray(n, mas); break;
    default: cout << "\r Неизвестная операция";
    }
}

void ArrayProcessing(int n, int mas[])
{
    int s = 0;
    int sNeg = 0;
    int sPos = 0;
    int sOdd = 0;
    int sEven = 0;
    int maxIndex = 0;
    int minIndex = 0;
    int comp = 1;

    for (int i = 0; i < n; i++)
    {
        s += mas[i];
        if (mas[i] > 0) sPos += mas[i]; else sNeg += mas[i];
        if (i % 2 == 0) sEven += mas[i]; else sOdd += mas[i];
        if (mas[i] > mas[maxIndex]) maxIndex = i;
        if (mas[i] < mas[minIndex]) minIndex = i;
    }

    for (int i = min(minIndex, maxIndex); i <= max(minIndex, maxIndex); i++)
    {
        comp *= mas[i];
    }

    cout << "Сумма элементов массива = " << s << endl;
    cout << "Среднее значение масиива = " << s / n << endl;
    cout << "Сумма положительных элементов = " << sPos << endl;
    cout << "Сумма отрицательных элементов = " << sNeg << endl;
    cout << "Сумма элементов с четными индексами = " << sEven << endl;
    cout << "Сумма элементов с нечетными индексами = " << sOdd << endl;
    cout << "Индекс максимального элемента массива = " << maxIndex << endl;
    cout << "Индекс минимального элемента массива = " << minIndex << endl;
    cout << "Произведение элементов массива между минимальным и максимальным = " << comp << endl;
}

void SortArray(int N, int a[])
{
    int min = 0;
    int buf = 0;
    for (int i = 0; i < N; i++)
        cout << a[i] << "\t";
    cout << endl;
    for (int i = 0; i < N; i++)
    {
        min = i;
        for (int j = i + 1; j < N; j++)
            min = (a[j] < a[min]) ? j : min;
        if (i != min)
        {
            buf = a[i];
            a[i] = a[min];
            a[min] = buf;
        }
    }
    for (int i = 0; i < N; i++)
        cout << a[i] << "\t";
    cout << endl;
}

//Упражнение 2
using namespace std;

int* max_vect(int, int[], int[]);

int main()
{
    int a[] = { 45,22,31,45,52,68,75,24 };
    int b[] = { 71,64,57,43,39,27,15,30 };

    int kc = sizeof(a) / sizeof(a[0]);
    int* c;
    c = max_vect(kc, a, b);

    for (int i = 0; i < kc; i++)
        cout << c[i] << " ";
    cout << endl;
    delete[]c;
}

int* max_vect(int kc, int a[], int b[])
{
    int* c = new int[kc];
    for (int i = 0; i < kc; i++)
    {
        c[i] = max(a[i], b[i]);
    }
    return c;
}
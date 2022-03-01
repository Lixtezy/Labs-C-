#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    //Упражнение 1

	setlocale(LC_ALL, "Russian");
	cout << "Напишите стихотворение, по окончанию нажать Сtrl + X \n";	
	ofstream out("test.txt", ios::out | ios::binary);

	if (!out) {
		cout << "Файл открыть невозможно\n";
		return 1;
	}

	string str;
	getline(cin, str, '\030'); // завершить ввод по нажатию ctrl+x
	out.write(str.c_str(), str.size());

	out.close();

    //Упражнение 2

    setlocale(LC_ALL, "Russian");

    const int N = 10;
    int a[N] = { 13, 24, 29, 95, 84, 33, 74, 42, 68, 54 };
    int min = 0;
    int buf = 0;

    ofstream file("sort.txt");
    file.is_open();
    file << "Исходный массив:" << endl;

    for (int i = 0; i < N; i++)
    {
        file << a[i] << " ";
    }

    file << endl;

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            min = (a[j] < a[i]) ? j : i;
            if (i != min)
            {
                buf = a[i];
                a[i] = a[min];
                a[min] = buf;
            }
        }
    }

    file << "Отсортированный массив:" << endl;

    for (int i = 0; i < N; i++)
    {
        file << a[i] << " ";
    }

    file.close();
}
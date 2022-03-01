#include <iostream>
#include <windows.h>

using namespace std;

template <class T>
T average(T arr[], int size)
{
	T sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	return sum / size;
}

int main()
{
	SetConsoleOutputCP(1251);
	int arr[] = { 19,23,17,236,4,8,31,234,12 };
	double arrd[] = { 2.31,52.343,1.7,6.66,45.3,5.345 };
	long arrl[] = { 29682846, 32531327, 4644625, 5635100, 69119495, 71542426 };
	char arrc[] = { 'q','w','e','r','t','y' };
	int k1 = sizeof(arr) / sizeof(arr[0]);
	int k2 = sizeof(arrd) / sizeof(arrd[0]);
	int k3 = sizeof(arrl) / sizeof(arrl[0]);
	int k4 = sizeof(arrc) / sizeof(arrc[0]);

	cout << "Average of int: " << average(arr, k1) << endl;
	cout << "Average of double: " << average(arrd, k2) << endl;
	cout << "Average of long: " << average(arrl, k3) << endl;
	cout << "Average of char: " << int(average(arrc, k4)) << " " << average(arrc, k4) << endl;
}
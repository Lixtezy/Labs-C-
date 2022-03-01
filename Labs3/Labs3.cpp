#include <iostream>
#include<math.h>

using namespace std;

double sqrt_figure(double s1, double s2, double s3)
{
    // Площадь фигуры многоугольника
    double S = s1 + s2 + s3;
    return S;
}

double Side(int xa, int ya, int xb, int yb)
{
    // Вычисляем длину стороны
    return sqrt((pow(xa - xb, 2)) + (pow(ya - yb, 2)));
}

double sqrt_treug(double aa, double bb, double cc)
{
    // Площадь треугольника
    double p = (aa + bb + cc) / 2;
    double s = sqrt(p * (p - aa) * (p - bb) * (p - cc));
    return s;
}

double sqrtNormal(double g)
{
    return pow(g, 1.0 / 3.0);
}

double sqrtNNormal(double g)
{
    if (g == 0) return (double)0;
    double x1 = 0;
    double x = 1;
    while (1)
    {

        x1 = (2 * x + g / (x * x)) / 3;

        if (fabs(x1 - x) < 0.0001)
        {
            break;
        }
        x = x1;
    }
    return x1;
}

double sqrtRavn(double a) {
    return a * a * sqrt(3) / 4;
}

double sqrtNRavn(double a1, double b1, double c1) {
    double p1 = (a1 + b1 + c1) / 2;
    return sqrt(p1 * (p1 - a1) * (p1 - b1) * (p1 - c1));
}

int sum(int n, int k) {
    int total = k * n;
    if (k == 1) return n;
    else return (k * n + sum(n, k - 1));
}

void binary(int z) {

    if (z < 0) {
        cout << "Введен отрицательный номер";
    }
    else if (z < 2) {
        cout << z;
    }
    else {
        binary(z / 2);
        int res = z % 2;
        cout << res;
    }
}

int main()
{
    // Упражнение 1
    
    setlocale(LC_ALL, "Russian");
    std::cout << "Расчет площади сложной фигуры на примере пятиугольника.\n";
    // Координаты пятиугольника
    int x1 = 2, y1 = 2;
    int x2 = 5, y2 = 8;
    int x3 = 10, y3 = 7;
    int x4 = 13, y4 = 4;
    int x5 = 2, y5 = 8;
    // Сторона А
    double a = Side(x1, y1, x2, y2);
    // Сторона B
    double b = Side(x1, y1, x5, y5);
    // Сторона C
    double c = Side(x5, y5, x4, y4);
    // Сторона D
    double d = Side(x4, y4, x3, y3);
    // Сторона E
    double e = Side(x3, y3, x2, y2);
    // Сторона F Внутренняя
    double f = Side(x1, y1, x3, y3);
    // Сторона G Внутренняя
    double g = Side(x1, y1, x4, y4);
    // Площадь треугольника 1
    double s1 = sqrt_treug(a, e, f);
    // Площадь треугольника 2
    double s2 = sqrt_treug(f, g, d);
    // Площадь треугольника 3
    double s3 = sqrt_treug(g, b, c);
    double S = sqrt_figure(s1, s2, s3);
    cout << "Площадь пятиугольника:" << S;
     
    // Упражнение 2
    
    double q;
    double result, result2;
    cout << "\nВведите число для извлечения кубического корня" << endl;
    cin >> q;
    result = sqrtNormal(q);
    result2 = sqrtNNormal(q);
    cout << "Кубический корень из введеннного числа с использованием стандартной функции составляет: " << result << "\n";
    cout << "Кубический корень из введеннного числа с использованием пользовательской функции составляет: " << result2 << "\n";

    // Упражнение 3
    
    double aA, bB, cC, s;
    cout << "Введите стороны треугольника: А Б С \n";
    cin >> aA >> bB >> cC;
    if (aA == bB and bB == cC and aA == cC) {
        cout << "Вы ввели равносторонний треугольник \n";
        s = sqrtRavn(aA);
        cout << s;
    }
    else {
        cout << "Вы ввели не равнобедренный треугольник \n";
        s = sqrtNRavn(aA, bB, cC);
        cout << s;
    }

    // Упражнение 4
    
    int n, k;
    cout << " \nВведите число символов в ряду: ";
    cin >> n;
    cout << "\n Укажите множитель: ";
    cin >> k;
    if (k > 0) {
        cout << sum(n, k);
    }
    else {
        cout << "\n Множитель должен быть больше нуля" << endl;
    }

    // Упражнение 5

    int z;
    cout << "\n Введите число для перевода в двоичный код: ";
    cin >> z;
    binary(z);
}

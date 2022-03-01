#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    std::cout << "Подсчета площади пятиугольника по формуле Гаусса\n";
   
    std::cout << "Введите координаты Х первого угла в формате х.хх\n";
    double x1;
    std::cin >> x1;
    std::cout << "Введите координаты Y первого угла в формате y.yy\n";
    double y1;
    std::cin >> y1;

    std::cout << "Введите координаты x второго угла в формате х.хх\n";
    double x2;
    std::cin >> x2;
    std::cout << "Введите координаты Y второго угла в формате y.yy\n";
    double y2;
    std::cin >> y2;


    std::cout << "Введите координаты x третьего угла в формате х.хх\n";
    double x3;
    std::cin >> x3;
    std::cout << "Введите координаты Y третьего угла в формате y.yy\n";
    double y3;
    std::cin >> y3;


    std::cout << "Введите координаты x четвертого угла в формате х.хх\n";
    double x4;
    std::cin >> x4;
    std::cout << "Введите координаты Y четвретого угла в формате y.yy\n";
    double y4;
    std::cin >> y4;


    std::cout << "Введите координаты x пятого угла в формате х.хх\n";
    double x5;
    std::cin >> x5;
    std::cout << "Введите координаты Y пятого угла в формате y.yy\n";
    double y5;
    std::cin >> y5;

    double mod1 = abs((x1 * y2 + x2 * y3 + x3 * y4 + x4 * y5 + x5 * y1 - x2 * y1 - x3 * y2 - x4 * y3 - x5 * y4 - x1 * y5));

    double s = 0.5 * mod1;

    std::cout << "Площадь пятиугольника равна = " << s;

    return 0;
}
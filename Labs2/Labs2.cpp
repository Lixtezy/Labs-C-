#include <iostream>

int main()
{
    //Упражнение 1

    setlocale(LC_ALL, "Russian");
    std::cout << "Определение високовного года\n";
    std::cout << "Введите год yyyy:\n";
    int year;
    std::cin >> year;
    std::cout << "Вы ввели: " << year;

    if (year % 4 == 0 and year % 100 != 0 or year % 400 == 0)
    {
        std::cout << "Год был високосный:\n";
    }
    else
        std::cout << "Год был не високосный\n";


    //Упражнение 2

    std::cout << "Введите три числа и я выберу наибольшее.\n";
    int a;
    int b;
    int c;

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    if (a > b and a > c)
    {
        std::cout << a;
    }
    else if (b > a and b > c)
    {
        std::cout << b;
    }
    else if (c > a and c > b)
    {
        std::cout << c;
    }

    //Упражнение 3

    std::cout << "Задача о размене монет\n";
    std::cout << "Введите сумму которую Вам разменять: (x.xx) \n";
    double summ;
    std::cin >> summ;

    double coin10 = summ / 10;
    std::cout << "Монет по 10р.: " << trunc(coin10) << "\n";
    summ = summ - trunc(coin10) * 10;
    double coin5 = summ / 5;

    std::cout << "Монет по 5р.: " << trunc(coin5) << "\n";
    summ = summ - trunc(coin5) * 5;
    double coin05 = summ / 0.5;

    std::cout << "Монет по 50коп.: " << trunc(coin05) << "\n";
    summ = summ - trunc(coin05) * 0.5;
    double coin01 = summ / 0.1;

    std::cout << "Монет по 10коп.: " << trunc(coin01) << "\n";
    summ = summ - trunc(coin01) * 0.1;
    double coin001 = summ / 0.01;

    std::cout << "Монет по 1коп.: " << trunc(coin001) << "\n";
    summ = summ - coin001 * 0.01;

    std::cout << "Остаток: " << summ;

    //Упражнение 4

    std::cout << "Задача о стрелке и мишени\n";
    std::cout << "Укажите сложность игры: (0-5)\n";
    int level;
    std::cin >> level;
    std::cout << "Введите количество выстрелов: \n";
    int n;
    int i;
    std::cin >> n;
    int shotX;
    int shotY;
    int coin = 0;
    int coinMilk = 0;
    int coinN = 0;

    for (i = 1; i <= n; i++)
    {
        shotX = rand() % 10 + (-5); shotY = rand() % 10 + (-5);
        shotX = shotX + level;
        shotY = shotY - level;
        std::cout << i << "й бросок " << "X: " << shotX << " Y: " << shotY << std::endl;
        if ((shotX <= 2 && shotX >= -2) && (shotY <= 2 && shotY >= -2))
        {
            std::cout << "Вы попали в Яблочко \n";
            coin = coin + 1;
        }
        else if ((shotX <= 5 && shotX >= -5) && (shotY <= 5 && shotY >= -5))
        {
            std::cout << "Вы опали в середину \n";
            coinN = coinN + 1;
        }
        else if ((shotX > 5 || shotX < -5) || (shotY > 5 || shotY < -5))
        {
            std::cout << "Вы попали в молоко \n";
            coinMilk = coinMilk + 1;
        }
    }
    std::cout << "\n Попаданий в яблочко: " << coin;
    std::cout << "\n Попаданий в середину: " << coinN;
    std::cout << "\n Попаданий в молоко: " << coinMilk;

    if (coin > coinN)
    {
        std::cout << "Мастер спорта \n";
    }
    else if (coinN > coinMilk) {
        std::cout << "Середнячок \n";
    }
    else {
        std::cout << " \n Надо больше тренироваться";
    }
}
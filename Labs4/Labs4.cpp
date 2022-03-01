#include <iostream>
#include <cmath>

using namespace std;

// проверка, что строка является вещественным числом
bool IsReal(const char* s) {
    int points = 0; // количество точек
    int haveDigits = false; // были ли цифры

    for (int i = s[0] == '-' ? 1 : 0; s[i]; i++) {
        if (s[i] == '.' || s[i] == ',') {
            points++;

            if (points > 1)
                return false;
        }
        else if (s[i] < '0' || s[i] > '9') {
            return false;
        }
        else {
            haveDigits = true;
        }
    }

    return haveDigits;
}
// ввод вещественного числа с проверкой на некорректный ввод
double ReadReal(const char* message) {
    char s[100]; // строка для ввода
    cout << message;
    cin.getline(s, 100);

    while (!IsReal(s)) {
        cout << "Invalid input, try again: ";
        cin.getline(s, 100);
    }

    return atof(s);
}

// ввод коэффициентов уравнения
void ReadEquationCoefficients(double& a, double& b, double& c) {
    a = ReadReal("Enter a: ");
    b = ReadReal("Enter b: ");
    c = ReadReal("Enter c: ");
}

// решение квадратного уравнения
void SolveEquation(double a, double b, double c) {
    double d = b * b - 4 * a * c; // вычисляем дискриминант

    if (d < 0) {
        d = sqrt(-d); // извлекаем корень из дискриминанта
        double re = -b / (2 * a);
        double im = fabs(d / (2 * a));

        cout << "Первый корень: x1 = " << re << "-" << im << "i" << endl;
        cout << "Второй корень: x2 = " << re << "+" << im << "i" << endl;
    }
    else if (d > 0) {
        d = sqrt(d); // извлекаем корень из дискриминанта
        double x1 = (-b - d) / (2 * a); // первый корень
        double x2 = (-b + d) / (2 * a); // второй корень

        cout << "Первый корень: " << "x1 = " << x1 << endl;
        cout << "Второй корень: " << "x2 = " << x2 << endl;
    }
    else { // дискриминант равен нулю
        cout << "Корень x: " << (-b / (2 * a)) << endl;
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Вычисление квадратного уровнения \n";
    double a, b, c;
    ReadEquationCoefficients(a, b, c); 
    SolveEquation(a, b, c); 
}